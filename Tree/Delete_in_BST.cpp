#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;        
        Node* left;
        Node* right;
    
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insert(Node* root, int val)
{
    if (root == NULL) {
        return new Node(val);
    }

    if (val < root->val) {
        root->left = insert(root->left, val);
    }
    else {
        root->right = insert(root->right, val);
    }
    return root;
}

Node* buildBST(vector<int> arr) 
{
    Node* root = NULL;

    for (int val : arr) {
       root = insert(root, val); 
    }

    return root;
}

Node* getInorderSuccessor(Node* root) 
{
    while (root != NULL && root->left != NULL)
    {
        root = root->left;
    }
    return root; 
}

Node* delNode(Node* root, int key)
{
    if (root == NULL) {
        return NULL;
    }

    if (key < root->val) {
        root->left = delNode(root->left, key);
    }
    else if (key > root->val) {
        root->right = delNode(root->right, key);
    }
    else {
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else {
            Node* IS = getInorderSuccessor(root->right);
            root->val = IS->val;
            root->right = delNode(root->right, IS->val);
        }
    }
    return root;
}

void inorder(Node* root) {
    if (root == NULL) {
        return;
    }

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() 
{
    vector<int> arr = {3, 2, 1, 5, 6, 4};

    Node* root = buildBST(arr);

    cout << "Before: ";
    inorder(root);
    cout << endl;

    delNode(root, 5);

    cout << "After: ";
    inorder(root);
    cout << endl;
    
    return 0;
}