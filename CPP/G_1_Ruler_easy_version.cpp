#include <iostream>
#include <map>
#include <string>
using namespace std;
class TrieNode {
public:
    map<char, TrieNode*> children;
    int count;  // Count of names that go through this node

    TrieNode() : count(0) {}

    // Function to insert a name into the trie
    void insert(const string& s, int index = 0) {
        count++;  // Increment count since a new name is passing through this node
        if (index == s.length()) return;  // Stop if we've inserted the whole string

        char current = s[index];
        if (children.find(current) == children.end())
            children[current] = new TrieNode();  // Create a new node if it doesn't exist

        children[current]->insert(s, index + 1);  // Recurse to insert the next character
    }

    // Function to find the number of names starting with a given prefix
    int find(const string& s, int index = 0) {
        if (index == s.length()) return count;  // If we've matched the whole prefix, return the count

        char current = s[index];
        if (children.find(current) != children.end())
            return children[current]->find(s, index + 1);  // Continue searching along the prefix

        return 0;  // If the prefix doesn't exist, return 0
    }
};

int main() {
    TrieNode root;
    int n;  // Number of operations
    cin >> n;  // Read number of operations
    string operation, name;

    for (int i = 0; i < n; ++i) {
        string temp;
        cin>> temp;
        int flag=0;
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]==' '){
                flag=1;
                continue;
            }
            if(flag==0)operation+=temp[i];
            else name+=temp[i];
        }
        if (operation == "add") {
            root.insert(name);  // Insert the name into the trie
        } else if (operation == "find") {
            cout << root.find(name) << endl;  // Find and print the number of names starting with the prefix
        }
    }

    return 0;
}
