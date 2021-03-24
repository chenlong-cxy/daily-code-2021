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
	//������ͷ
	PHead = (PNode)malloc(sizeof(Node));
	if (PHead == NULL)
	{
		printf("�ڴ濪��ʧ��\n");//malloc�������ٿռ�ʧ��
		exit(-1);
	}
	//��β
	PTail = PHead;
	int i = 0;
	int len = 0;
	printf("���������Ž�����:>");
	scanf("%d", &len);
	for (i = 0; i < len; i++)
	{
		PNode PNew = (PNode)malloc(sizeof(Node));
		if (PNew == NULL)
		{
			printf("�½�㴴��ʧ��\n");//malloc�������ٿռ�ʧ��
			exit(-1);
		}
		printf("�������%d����:>", i + 1);
		scanf("%d",&(PNew->data));
		PTail = PNew->Next;

	}
	printf("�������ɹ�\n");
	//���ر�ͷ
	return PHead;
}
void TraverseList(PNode List)
{
	PNode P = List->Next;
	printf("���������ֵΪ:>");
	if (P == NULL)
	{
		printf("����Ϊ��\n");
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