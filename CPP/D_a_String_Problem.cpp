#include <iostream>
#include <vector>
#include <unordered_set>
#include <memory>
#include <map>
#include <string>

using namespace std;

// A class to represent a suffix tree node
class SuffixTreeNode {
public:
    map<char, shared_ptr<SuffixTreeNode>> children;
    shared_ptr<SuffixTreeNode> suffixLink;
    int start;
    shared_ptr<int> end;  // Use shared_ptr for automatic memory management
    int suffixIndex;

    SuffixTreeNode(int start, shared_ptr<int> end) : start(start), end(end), suffixLink(nullptr), suffixIndex(-1) {}
};

// A class to represent a suffix tree
class SuffixTree {
    string text;
    shared_ptr<SuffixTreeNode> root;
    shared_ptr<SuffixTreeNode> lastNewNode, activeNode;
    int activeEdge, activeLength;
    int remainingSuffixCount;
    int leafEnd;
    shared_ptr<int> rootEnd, splitEnd;
    int size;

    shared_ptr<SuffixTreeNode> newNode(int start, shared_ptr<int> end) {
        return make_shared<SuffixTreeNode>(start, end);
    }

    int edgeLength(shared_ptr<SuffixTreeNode> n) {
        return *(n->end) - n->start + 1;
    }

    bool walkDown(shared_ptr<SuffixTreeNode> currNode) {
        if (activeLength >= edgeLength(currNode)) {
            activeEdge += edgeLength(currNode);
            activeLength -= edgeLength(currNode);
            activeNode = currNode;
            return true;
        }
        return false;
    }

    void extendSuffixTree(int pos) {
        leafEnd = pos;
        remainingSuffixCount++;
        lastNewNode = nullptr;

        while (remainingSuffixCount > 0) {
            if (activeLength == 0) activeEdge = pos;

            if (activeNode->children.find(text[activeEdge]) == activeNode->children.end()) {
                activeNode->children[text[activeEdge]] = newNode(pos, make_shared<int>(leafEnd));

                if (lastNewNode != nullptr) {
                    lastNewNode->suffixLink = activeNode;
                    lastNewNode = nullptr;
                }
            } else {
                shared_ptr<SuffixTreeNode> next = activeNode->children[text[activeEdge]];
                if (walkDown(next)) continue;

                if (text[next->start + activeLength] == text[pos]) {
                    if (lastNewNode != nullptr && activeNode != root) {
                        lastNewNode->suffixLink = activeNode;
                        lastNewNode = nullptr;
                    }
                    activeLength++;
                    break;
                }

                splitEnd = make_shared<int>(next->start + activeLength - 1);
                shared_ptr<SuffixTreeNode> split = newNode(next->start, splitEnd);
                activeNode->children[text[activeEdge]] = split;

                split->children[text[pos]] = newNode(pos, make_shared<int>(leafEnd));
                next->start += activeLength;
                split->children[text[next->start]] = next;

                if (lastNewNode != nullptr) {
                    lastNewNode->suffixLink = split;
                }

                lastNewNode = split;
            }

            remainingSuffixCount--;
            if (activeNode == root && activeLength > 0) {
                activeLength--;
                activeEdge = pos - remainingSuffixCount + 1;
            } else if (activeNode != root) {
                activeNode = activeNode->suffixLink;
            }
        }
    }

    void setSuffixIndexByDFS(shared_ptr<SuffixTreeNode> n, int labelHeight) {
        if (n == nullptr) return;

        bool leaf = true;
        for (auto& it : n->children) {
            leaf = false;
            setSuffixIndexByDFS(it.second, labelHeight + edgeLength(it.second));
        }
        if (leaf) {
            n->suffixIndex = size - labelHeight;
        }
    }

public:
    SuffixTree(const string& text) : text(text), size(text.size()), rootEnd(make_shared<int>(-1)), root(newNode(-1, rootEnd)), activeNode(root), activeEdge(-1), activeLength(0), remainingSuffixCount(0), leafEnd(-1) {
        for (int i = 0; i < size; i++) {
            extendSuffixTree(i);
        }
        setSuffixIndexByDFS(root, 0);
    }

    shared_ptr<SuffixTreeNode> getRoot() const {
        return root;
    }

    const string& getText() const {
        return text;
    }
};

// Function to check if the string can be partitioned using `t` and 'a'
bool isValidPartition(const string& s, const string& t) {
    int n = s.length();
    int m = t.length();
    vector<int> dp(n + 1, 0);
    dp[0] = 1; // Base case: empty string is always valid

    for (int i = 0; i < n; i++) {
        if (dp[i]) {
            if (i + m <= n && s.substr(i, m) == t) {
                dp[i + m] = 1;
            }
            if (s[i] == 'a') {
                dp[i + 1] = 1;
            }
        }
    }

    return dp[n];
}

int main() {
    int num_tests;
    cin >> num_tests; // Number of test cases

    while (num_tests--) {
        string s;
        cin >> s; // Read the string

        int count = 0; // To keep track of valid partitions
        SuffixTree st(s);
        shared_ptr<SuffixTreeNode> root = st.getRoot();
        unordered_set<string> seen;
        const string& text = st.getText();
        int n = text.size();

        vector<shared_ptr<SuffixTreeNode>> stack;
        stack.push_back(root);

        while (!stack.empty()) {
            shared_ptr<SuffixTreeNode> node = stack.back();
            stack.pop_back();

            for (auto it : node->children) {
                stack.push_back(it.second);
                if (it.second->suffixIndex == -1) continue;

                string t = text.substr(it.second->suffixIndex, n - it.second->suffixIndex);
                if (t.find_first_not_of('a') != string::npos && seen.find(t) == seen.end()) {
                    seen.insert(t); // Mark this substring as seen
                    if (isValidPartition(s, t)) {
                        count++; // Increment count if it is a valid partition
                    }
                }
            }
        }

        cout << count << endl; // Output the result for this test case
    }

    return 0;
}
