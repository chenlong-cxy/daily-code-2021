//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<malloc.h>
//#include<stdlib.h>
// 
//typedef char Elementtype;    //    �����������ͣ��ɸ�����Ҫ���ж���
//typedef struct TreeNode * Node;    //    Node�൱��struct treeNode *
////    �������ڵ�ṹ
//typedef struct TreeNode {
//    Elementtype Element;
//    Node left;    //    ���ڵ�����ӽڵ�
//    Node right;    //    ���ڵ�����ӽڵ�
//   
//}TREE,*PTREE;
//
////����Ϊ��������ʽ�洢�ṹ�Ĳ�������
//
////������
//void visit(Node T) {
//printf("%100c", T->Element);
//}
//
////�������
//void PreOrderTree(PTREE Root) {
// 
//    if (Root == NULL)
//        return;
//    else {
//        putchar(Root->Element);
////��д�����������Ĵ��� 
//     
//      PreOrderTree(Root->left);
//      PreOrderTree(Root->right);
//    }
//}
//
//
////�������
//void InOrderTree(PTREE Root) {
//
//    if (Root == NULL)
//        return;
//    else {
//        InOrderTree(Root->left);
//        putchar(Root->Element);
////��д�����������Ĵ��� 
//     
//      InOrderTree(Root->right);
//    }
//}
//
////�������
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
////������ʾ��
//int main(void) {
//	PTREE Root = NULL;    
//    printf("����������������Ľڵ����ݣ� ");
//    //  ��д�������Ĵ�������
//   
//	Root = CreateBiTree(Root);
//    printf("\nǰ��������Ϊ��");
//    PreOrderTree(Root);    
//    printf("\n����������Ϊ��");
//    InOrderTree(Root);
//    printf("\n����������Ϊ��");
//    PostOrderTree(Root);
//
//   return 0;
//}


#include <iostream>
using namespace std;
int main()
{
	char str[] = "����";
	for (int i = -30; i >= -50; i--)
	{
		str[3] = i;
		cout << str << endl;
	}

	return 0;
}