//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<malloc.h>
//#include<stdlib.h>
// 
//typedef char Elementtype;    //    定义数据类型，可根据需要自行定制
//typedef struct TreeNode * Node;    //    Node相当于struct treeNode *
////    定义数节点结构
//typedef struct TreeNode {
//    Elementtype Element;
//    Node left;    //    树节点的左子节点
//    Node right;    //    树节点的右子节点
//   
//}TREE,*PTREE;
//
////以下为二叉树链式存储结构的操作函数
//
////结点访问
//void visit(Node T) {
//printf("%100c", T->Element);
//}
//
////先序遍历
//void PreOrderTree(PTREE Root) {
// 
//    if (Root == NULL)
//        return;
//    else {
//        putchar(Root->Element);
////填写遍历左子树的代码 
//     
//      PreOrderTree(Root->left);
//      PreOrderTree(Root->right);
//    }
//}
//
//
////中序遍历
//void InOrderTree(PTREE Root) {
//
//    if (Root == NULL)
//        return;
//    else {
//        InOrderTree(Root->left);
//        putchar(Root->Element);
////填写遍历右子树的代码 
//     
//      InOrderTree(Root->right);
//    }
//}
//
////后序遍历
//void PostOrderTree(PTREE Root) {
//
//    if (Root==NULL) 
//        return ;
//    else{
//        PostOrderTree(Root->left);
//        PostOrderTree(Root->right);
//        putchar( Root->Element);
//    }
//} 
//
// 
//PTREE CreateBiTree(PTREE Root)
//{
//    char ch;
//    scanf("%c",&ch);
//    if(ch=='#')
//       Root=NULL;
//    else
//    {
//        Root=(PTREE)malloc(sizeof(struct TreeNode));
//        if(!Root)
//            exit(-1);
//        Root->Element=ch;
//		Root->left = CreateBiTree(Root->left);
//		Root->right = CreateBiTree(Root->right);
//    }
//	return Root;
//}
// 
////主程序示例
//int main(void) {
//	PTREE Root = NULL;    
//    printf("请先序输入二叉树的节点数据： ");
//    //  编写二叉树的创建函数
//   
//	Root = CreateBiTree(Root);
//    printf("\n前序遍历结果为：");
//    PreOrderTree(Root);    
//    printf("\n中序遍历结果为：");
//    InOrderTree(Root);
//    printf("\n后序遍历结果为：");
//    PostOrderTree(Root);
//
//   return 0;
//}


#include <iostream>
using namespace std;
int main()
{
	char str[] = "汉字";
	for (int i = -30; i >= -50; i--)
	{
		str[3] = i;
		cout << str << endl;
	}

	return 0;
}