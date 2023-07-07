#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* smallestRightNode(TreeNode* root) {
    if(root->right != nullptr) {
        TreeNode* current = root->right;
        while(current->left != nullptr) {
            current = current->left;
        }
        return current;
    } else {
        return root;
    }
}

TreeNode* largestLeftNode(TreeNode* root) {
    if(root->left != nullptr) {
        TreeNode* current = root->left;
        while(current->right != nullptr) {
            current = current->right;
        }
        return current;
    } else {
        return root;
    }
}

bool isValidBST(TreeNode* root) {
    if(root == nullptr) {
        return true;
    } else if(root->left == nullptr && root->right == nullptr) {
        return true;
    } else if(root->left == nullptr) {
        return root->val < root->right->val && root->val < smallestRightNode(root)->val && isValidBST(root->right);
    } else if(root->right == nullptr) {
        return root->val > root->left->val && root->val > largestLeftNode(root)->val && isValidBST(root->left);           
    } else if(root->left->val < root->val && root->val < root->right->val){
        bool validComparisons = smallestRightNode(root)->val > root->val && largestLeftNode(root)->val < root->val;
        bool validBSTs = isValidBST(root->left) && isValidBST(root->right);
        return validComparisons && validBSTs;
    } else {
        return false;
    }
}

int main() {
    TreeNode* fifth = new TreeNode(45);
    TreeNode* fourth = new TreeNode(15, nullptr, fifth);
    TreeNode* third = new TreeNode(10, nullptr, fourth);
    TreeNode* second = new TreeNode(30, third, nullptr);
    TreeNode* root = new TreeNode(3, nullptr, second);

    cout << isValidBST(root) << endl;
}