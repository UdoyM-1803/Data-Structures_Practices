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

static int idx = -1;
Node* buildTree(vector<int> preorder) {
    idx++;
    if (preorder[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

int main() 
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);

    cout << root->val << endl;
    cout << root->left->val << endl;
    cout << root->right->val << endl;

    return 0;
}