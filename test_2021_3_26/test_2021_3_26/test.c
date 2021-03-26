#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//typedef int ElementType;
//typedef struct ListNode
//{
//	ElementType Date;
//	struct ListNode* Next;
//}Node,*PNode;
//PNode CreateList()
//{
//	PNode PHead = (PNode)malloc(sizeof(Node));
//	if (PHead == NULL)
//	{
//		printf("ͷ��㿪�ٿռ�ʧ��\n");
//		exit(-1);
//	}
//	PNode PTail = PHead;
//	PTail->Next = NULL;
//	int sz = 0;
//	printf("�������������������:>");
//	scanf("%d", &sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		PNode PNew = (PNode)malloc(sizeof(Node));
//		if (PNew == NULL)
//		{
//			printf("�½�㴴��ʧ��\n");
//			exit(-1);
//		}
//		printf("�������%d������:>", i + 1);
//		scanf("%d", &(PNew->Date));
//		PNew->Next = NULL;
//		PTail->Next = PNew;
//		PTail = PNew;
//	}
//	printf("�������ɹ�\n");
//	return PHead;
//}
//void TravelList(PNode List)
//{
//	PNode P = List->Next;
//	if (P == NULL)
//	{
//		printf("����Ϊ��\n");
//	}
//	while (P != NULL)
//	{
//		printf("%d ", P->Date);
//		P = P->Next;
//	}
//	printf("\n");
//}
//int main()
//{
//	PNode p = CreateList();
//	TravelList(p);
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>
typedef int ElementType;//�����������ͣ��ɸ�����Ҫ�����������Ͷ���
//�����㶨��
typedef struct ListNode
{
	ElementType Data;//�����򣬴洢����
	struct ListNode* Next;//ָ���򣬴洢��һ�����ĵ�ַ
}Node, *PNode;
PNode CreateList()
{
	PNode PHead, PTail;//����ͷָ���βָ��
	PHead = (PNode)malloc(sizeof(Node));//��������һ��ͷ����ڴ�ռ�
	if (PHead == NULL)
	{
		printf("ͷ�ڵ��ڴ�ռ俪��ʧ��\n");//malloc�������ٿռ�ʧ��
		exit(-1);
	}
	//��ֻ��һ�����ʱ���ýڵ����ͷ��㣬����β��㣬����ͷָ���βָ��ָ��һ��λ��
	PTail = PHead;
	PTail->Next = NULL;//β����ָ����ΪNULL
	int i = 0;
	int len = 0;//��������ĳ���
	printf("���������Ž�����:>");
	scanf("%d", &len);
	for (i = 0; i < len; i++)//ѭ������len�����
	{
		PNode PNew = (PNode)malloc(sizeof(Node));//����һ���½��
		if (PNew == NULL)
		{
			printf("�½�㴴��ʧ��\n");//malloc�������ٿռ�ʧ��
			exit(-1);
		}
		printf("�������%d����:>", i + 1);
		scanf("%d", &(PNew->Data));//����������ݴ洢���½���������
		PNew->Next = NULL;//���½���ָ������ΪNULL
		PTail->Next = PNew;//�½��ĵ�ַ�洢��β����ָ����
		PTail = PNew;//�½�����µ�β��㣬����βָ��ָ����½��
	}
	printf("�������ɹ�\n");
	return PHead;//����ͷ���λ��
}
void TraverseList(PNode List)
{
	PNode P = List->Next;//��ͷ����ָ����ֵ��P��ʹPָ����һ�����
	printf("���������ֵΪ:>");
	if (P == NULL)
	{
		printf("����Ϊ��\n");
	}
	while (P != NULL)//PΪNULLʱ��������ӡ
	{
		printf("%d ", P->Data);//��ӡPָ��Ľ���������
		P = P->Next;//���ý���ָ����ֵ��P��ʹPָ����һ�����
	}
	printf("\n");
}
int Facctoria(PNode List)
{
	PNode P = List->Next;
	int sum = 0;
	int i = 0;
	while (P)
	{
		int Fac = 1;
		for (i = 2; i <= P->Data; i++)
		{
			Fac *= i;
		}
		sum += Fac;
		P = P->Next;
	}
	return sum;
}
int main()
{
	PNode List = CreateList();//�������ú���List����ͷ���λ��
	TraverseList(List);//��ͷ��㴫�룬��ӡ������
	int sum = Facctoria(List);
	printf("sum = %d\n", sum);
	return 0;
}


//#include <stdio.h>
//struct ListNode 
//{
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* deleteDuplicates(struct ListNode* head)
//{
//	if (head == NULL)
//	{
//		return head;
//	}
//	struct ListNode* P = head;
//	while (P->next != NULL)
//	{
//		if (P->val == P->next->val)
//		{
//			//ɾ�����
//			P->next = P->next->next;
//			free(P);
//		}
//		else
//		{
//			P = P->next;
//		}
//	}
//	return head;
//}


