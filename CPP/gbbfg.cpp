#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

class BinaryTree {
private:
    
    struct Node {
        int data;
        Node* left;
        Node* right;
        Node(int val) : data(val), left(nullptr), right(nullptr) {}
    };

    Node* root;

public:
    
    BinaryTree() : root(nullptr) {}

    
    void insertNode(int parentVal, int val) {
        if (!root) {
            root = new Node(val);
            return;
        }
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            Node* temp = q.front();
            q.pop();
            if (temp->data == parentVal) {
                if (!temp->left) {
                    temp->left = new Node(val);
                    return;
                } else if (!temp->right) {
                    temp->right = new Node(val);
                    return;
                } else {
                    
                    return;
                }
            }
            if (temp->left)  q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
    }

    
    
    void deleteNode(int val) {
        if (!root) return;

        
        if (root->data == val) {
            deleteSubtree(root);
            root = nullptr;
            return;
        }

        
        queue<pair<Node*, Node*>> q;
        q.push({root, nullptr});
        while (!q.empty()) {
            auto [curr, parent] = q.front();
            q.pop();

            if (curr->data == val) {
                
                if (parent->left == curr) {
                    parent->left = nullptr;
                } else if (parent->right == curr) {
                    parent->right = nullptr;
                }
                deleteSubtree(curr);
                return;
            }

            if (curr->left)
                q.push({curr->left, curr});
            if (curr->right)
                q.push({curr->right, curr});
        }
    }

    
    int height() {
        return heightHelper(root);
    }

    
    bool isSymmetric() {
        return isMirror(root, root);
    }

    
    void flatten() {
        flattenHelper(root);
    }

    
    int findLCA(int val1, int val2) {
        Node* lcaNode = findLCAHelper(root, val1, val2);
        return (lcaNode ? lcaNode->data : -1);
    }

    
    void printLinkedList() {
        Node* current = root;
        while (current) {
            cout << current->data << " ";
            current = current->right;
        }
        cout << endl;
    }

private:
    
    void deleteSubtree(Node* node) {
        if (!node) return;
        deleteSubtree(node->left);
        deleteSubtree(node->right);
        delete node;
    }

    int heightHelper(Node* node) {
        if (!node) return 0;
        return 1 + max(heightHelper(node->left), heightHelper(node->right));
    }

    bool isMirror(Node* t1, Node* t2) {
        if (!t1 && !t2) return true;
        if (!t1 || !t2) return false;
        return isMirror(t1->left, t2->right) &&
               isMirror(t1->right, t2->left);
    }

    void flattenHelper(Node* node) {
        if (!node) return;
        flattenHelper(node->left);
        flattenHelper(node->right);
        Node* tempRight = node->right;
        node->right = node->left;
        node->left = nullptr;
        Node* curr = node;
        while (curr->right)
            curr = curr->right;
        curr->right = tempRight;
    }

    Node* findLCAHelper(Node* node, int val1, int val2) {
        if (!node) return nullptr;
        if (node->data == val1 || node->data == val2)
            return node;
        Node* leftLCA  = findLCAHelper(node->left, val1, val2);
        Node* rightLCA = findLCAHelper(node->right, val1, val2);
        if (leftLCA && rightLCA)
            return node;
        return (leftLCA != nullptr) ? leftLCA : rightLCA;
    }
};




int main() {
    BinaryTree bt;

    
    bt.insertNode(999 /*ignored*/, 10);
    bt.insertNode(10, 20);
    bt.insertNode(10, 30);
    bt.insertNode(20, 40);
    bt.insertNode(20, 50);
    bt.insertNode(30, 60);
    bt.insertNode(30, 70);

    int lcaVal = bt.findLCA(40, 50);
    if (lcaVal == -1)
        cout << "LCA not found.\n";
    else
        cout << "LCA of 40 and 70 is: " << lcaVal << endl;

    cout << "Height of tree: " << bt.height() << endl;
    cout << boolalpha << "Is tree symmetric by structure? " << bt.isSymmetric() << endl;

    
    cout << "\nDeleting the subtree with root 50...\n";
    bt.deleteNode(50);
    cout << "Height of tree after deletion: " << bt.height() << endl;

    
    cout << "\nFlattening the tree...\n";
    bt.flatten();
    cout << "Height after flatten (number of nodes in chain): " << bt.height() << endl;

    
    cout << "Flattened linked list: ";
    bt.printLinkedList();

    
    bt.insertNode(10, 50);

    return 0;
}