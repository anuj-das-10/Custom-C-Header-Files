#include<stdio.h>
#include<stdlib.h>

//	Structure of Tree Node
struct TreeNode {
	int data;
	struct TreeNode* left;
	struct TreeNode* right;
};

typedef struct TreeNode Tree;

//	It creates a new node
Tree* createNode(int value) {
	Tree* root = (Tree*)malloc(sizeof(Tree));
	root->data = value;
	root->left = NULL;
	root->right = NULL;
	return root;
}


//	In-order traversal of the binary tree
void preOrderTraversal(Tree* root) {
	if(root != NULL) {
		printf("%d  ", root->data);
		preOrderTraversal(root->left);
		preOrderTraversal(root->right);
	}
}


//	Pre-order traversal of the binary tree
void inOrderTraversal(Tree* root) {
	if(root != NULL) {
		inOrderTraversal(root->left);
		printf("%d  ", root->data);
		inOrderTraversal(root->right);
	}
}


//	Post-order traversal of the binary tree
void postOrderTraversal(Tree* root) {
	if(root != NULL) {
		postOrderTraversal(root->left);
		postOrderTraversal(root->right);
		printf("%d  ", root->data);
	}
}


//	It calculates the size of tree using recursion
int treeSize(Tree* root) {
	if(root == NULL) {
		return 0;
	}
	else return 1 + treeSize(root->left) + treeSize(root->right);
}


//	It counts the number of leaves (leaf nodes) in the binary tree
int countLeaves(Tree* root) {
	if(root == NULL) {
		return 0;
	}
	if(root->left == NULL && root->right == NULL) {
		return 1;
	}
	else {
		return countLeaves(root->left) + countLeaves(root->right);
	}
}


//	It checks whether the given binary tree is BST or not.
int isBST(Tree* root) {
	static Tree* previousNode = NULL;
	if(root != NULL) {
		if(!isBST(root->left)) {
			return 0;
		}
		if(previousNode != NULL && previousNode->data >= root->data) {
			return 0;
		}
		previousNode = root;
		return isBST(root->right);
	}
	else {
		return 1;
	}
}


//	It checks whether the given two binary trees are identical or not.
int areIdentical(Tree* root1, Tree* root2) {
	if(root1 == NULL && root2 == NULL) {
		return 1;
	}
	if(root1 == NULL || root2 == NULL) {
		return 0;
	}
	
	return (root1->data == root2->data) 
			&& areIdentical(root1->left, root2->left) 
			&& areIdentical(root1->right, root2->right);
}


//	It converts the given binary tree into its mirror tree
Tree* mirrorTree(Tree* root) {
	if(root == NULL) {
		return NULL;
	}
	
	Tree* tempNode = root->left;
	root->left = root->right;
	root->right = tempNode;
	
	mirrorTree(root->left);
	mirrorTree(root->right);
	
	return root;
}
