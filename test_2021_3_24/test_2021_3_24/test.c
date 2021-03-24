#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
typedef int ElementType;
typedef struct NodeList
{
	ElementType data;
	struct NodeList* Next;
}Node, *PNode;
PNode CreateList()
{
	PNode PHead, PTail;
	//创建表头
	PHead = (PNode)malloc(sizeof(Node));
	if (PHead == NULL)
	{
		printf("内存开辟失败\n");//malloc函数开辟空间失败
		exit(-1);
	}
	//表尾
	PTail = PHead;
	int i = 0;
	int len = 0;
	printf("请输入待存放结点个数:>");
	scanf("%d", &len);
	for (i = 0; i < len; i++)
	{
		PNode PNew = (PNode)malloc(sizeof(Node));
		if (PNew == NULL)
		{
			printf("新结点创建失败\n");//malloc函数开辟空间失败
			exit(-1);
		}
		printf("请输入第%d个数:>", i + 1);
		scanf("%d",&(PNew->data));
		PTail = PNew->Next;

	}
	printf("链表创建成功\n");
	//返回表头
	return PHead;
}
void TraverseList(PNode List)
{
	PNode P = List->Next;
	printf("遍历链表的值为:>");
	if (P == NULL)
	{
		printf("链表为空\n");
	}
	while (P != NULL)
	{
		printf("%d ", P->data);
		P = P->Next;
	}
	printf("\n");
}
int main()
{
	PNode List = CreateList();
	TraverseList(List);
	return 0;
}