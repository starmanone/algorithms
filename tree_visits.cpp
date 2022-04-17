#include <iostream>

struct Node{
    int value;
    Node* left;
    Node* right;
};

/*
*           1
        2       3
     5    4
*/

void traversePreOrder(Node* root){
    if (root == NULL)
        return;
    std::cout << root->value << std::endl;
    traversePreOrder(root->left);
    traversePreOrder(root->right);
}

void traversePostOrder(Node* root){
    if (root == NULL)
        return;
    traversePostOrder(root->left);
    traversePostOrder(root->right);
    std::cout << root->value << std::endl;
}

void traverseInOrder(Node* root){
    if (root == NULL)
        return;
    traverseInOrder(root->left);
    std::cout << root->value << std::endl;
    traverseInOrder(root->right);
}


int main(){

    Node ll = {5, NULL, NULL};
    Node lr = {4, NULL, NULL};
    Node left = {2, &ll, &lr};

    Node right = {3, NULL, NULL};

    Node root = {1, &left, &right};

    std::cout << "Pre-Order" << std::endl;
    traversePreOrder(&root);
    std::cout << "Post-Order" << std::endl;
    traversePostOrder(&root);
    std::cout << "In-Order" << std::endl;
    traverseInOrder(&root);
}