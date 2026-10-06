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

bool search(Node* root, int key) 
{
    if (root == NULL) {
        return false;
    }

    if (root->val == key) {
        return true;
    }

    else if (key < root->val) {
        search(root->left, key);
    }

    else {
        search(root->right, key);
    }
}

int main() 
{
    vector<int> arr = {3, 2, 1, 5, 6, 4};

    Node* root = buildBST(arr);

    cout << search(root, 5) << endl; 
    cout << search(root, 8) << endl; 

    return 0;
}