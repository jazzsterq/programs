#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

class TrieNode {
public:
    TrieNode* children[2];
    bool isEnd;

    TrieNode() {
        for (int i = 0; i < 2; ++i) {
            children[i] = nullptr;
        }
        isEnd = false;
    }
};

class Trie {
private:
    TrieNode* root;

    void insertUtil(TrieNode* node, int num, int bitIndex) {
        if (bitIndex < 0) {
            node->isEnd = true;
            return;
        }

        int bit = (num >> bitIndex) & 1;
        if (!node->children[bit]) {
            node->children[bit] = new TrieNode();
        }
        insertUtil(node->children[bit], num, bitIndex - 1);
    }

    int countSmallerUtil(TrieNode* node, int k, int xor_sum, int cur_xor) {
        if (!node || k == 0) return 0;
        if (node->isEnd && --k == 0) return 1;

        int count = 0;
        for (int i = 0; i < 2; ++i) {
            int next_xor = cur_xor ^ i;
            count += countSmallerUtil(node->children[i], k, xor_sum | (i << cur_xor), next_xor);
            if (count >= k) break; // Optimization: Stop if we've already found enough smaller elements
        }
        return count;
    }

public:
    Trie() {
        root = new TrieNode();
    }

    void insert(int num) {
        insertUtil(root, num, 30); // Assuming integers are 32-bit
    }

    int findKthSmallest(int k) {
        return countSmallerUtil(root, k, 0, 30);
    }
};

int main() {
    int Q;
    cin >> Q;

    Trie trie;
    vector<int> secret_set;

    for (int i = 0; i < Q; ++i) {
        int query_type, value;
        cin >> query_type >> value;

        if (query_type == 1) {
            if (find(secret_set.begin(), secret_set.end(), value) == secret_set.end()) {
                secret_set.push_back(value);
                trie.insert(value);
            }
        } else if (query_type == 2) {
            int k = value;
            int result = trie.findKthSmallest(k);
            if (result == 0) {
                cout << -1 << endl;
            } else {
                cout << result << endl;
            }
        }
    }

    return 0;
}
