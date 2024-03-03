# Custom-C-Header-Files

## tree.h

If you want to contribute get started using this template given below:

```c
#include<stdio.h>
#include<stdlib.h>

struct TreeNode {
	int data;
	struct TreeNode* left;
	struct TreeNode* right;
};

typedef struct TreeNode Tree;

//   Implement your functions related to tree, here!
```

### Existing Functions
1. `Tree *createNode(int value)` - This function is used to create a new node with the provided integer value and it returns a new node with similar structure like `Tree*`.

2. `void preOrderTraversal(Tree* root)` - This function is used to traverse and print the nodes of a binary tree in the pre-order manner and it doesn't return anything.

3. `void inOrderTraversal(Tree* root)` - This function is used to traverse and print the nodes of a binary tree in the in-order manner and it doesn't return anything.

4. `void postOrderTraversal(Tree* root)` - This function is used to traverse and print the nodes of a binary tree in the post-order manner and it doesn't return anything.


5. `int treeSize(Tree* root)` - It calculates and returns the size of the tree, i.e., number of nodes in a binary tree. The time complexity is O(n).

6. `int countLeaves(Tree* root)` - It calculates and returns the number of leaves(leaf nodes) in a binary tree.

7. `int isBST(Tree* root)` - It returns `1` if the given binary tree satisfies all the properties of Binary Search Tree(BST), otherwise it returns `0`.

8. `int isIdentical(Tree* root1, Tree* root2)` - It returns `1` if the given binary tree is identical to one another and `0` otherwise.

9. `Tree* mirrorTree(Tree* root)` - It converts the given binary tree to its mirror tree and returns the root of the new mirror tree(invert binary tree). 