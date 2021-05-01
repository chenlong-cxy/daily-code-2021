#include <stdio.h>
//BTNode* TreeFind(BTNode* root, BTDataType x)
//{
//	if (root == NULL)
//		return NULL;
//	if (root->data == x)
//		return root;
//	BTNode* left = TreeFind(root->left, x);
//	if (left)
//		return left;
//	BTNode* right = TreeFind(root->right, x);
//	if (right)
//		return right;
//	return NULL;
//}

void BTDestroy(BTNode* root)
{
	if (root == NULL)
		return;
	BTDestroy(root->left);
	BTDestroy(root->right);
	free(root);
	//root == NULL;
}

//int main()
//{
//	int* p1 = NULL;
//	int a = 10;
//	int* p2 = &a;
//	printf("%p\n", p2);
//	printf("%p\n", p1 - p2);
//	return 0;
//}