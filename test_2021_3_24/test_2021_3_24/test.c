#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//typedef int ElementType;//�����������ͣ��ɸ�����Ҫ�����������Ͷ���
////�����㶨��
//typedef struct ListNode
//{
//	ElementType Data;//�����򣬴洢����
//	struct ListNode* Next;//ָ���򣬴洢��һ�����ĵ�ַ
//}Node, *PNode;
////��������
//PNode CreateList()
//{
//	PNode PHead, PTail;//����ͷָ���βָ��
//	PHead = (PNode)malloc(sizeof(Node));//��������һ��ͷ����ڴ�ռ�
//	if (PHead == NULL)
//	{
//		printf("ͷ�ڵ��ڴ�ռ俪��ʧ��\n");//malloc�������ٿռ�ʧ��
//		exit(-1);
//	}
//	//��ֻ��һ�����ʱ���ýڵ����ͷ��㣬����β��㣬����ͷָ���βָ��ָ��һ��λ��
//	PTail = PHead;
//	PTail->Next = NULL;//β����ָ����ΪNULL
//	int i = 0;
//	int len = 0;//��������ĳ���
//	printf("���������Ž�����:>");
//	scanf("%d", &len);
//	for (i = 0; i < len; i++)//ѭ������len�����
//	{
//		PNode PNew = (PNode)malloc(sizeof(Node));//����һ���½��
//		if (PNew == NULL)
//		{
//			printf("�½�㴴��ʧ��\n");//malloc�������ٿռ�ʧ��
//			exit(-1);
//		}
//		printf("�������%d����:>", i + 1);
//		scanf("%d", &(PNew->Data));//����������ݴ洢���½���������
//		PNew->Next = NULL;//���½���ָ������ΪNULL
//		PTail->Next = PNew;//���½��ĵ�ַ�洢��βָ��ָ��Ľ���ָ����
//		PTail = PNew;//�½�����µ�β��㣬����βָ��ָ����½��
//	}
//	printf("�������ɹ�\n");
//	return PHead;//����ͷ���λ��
//}
////��ӡ��������
//void TraverseList(PNode List)
//{
//	PNode P = List->Next;//��ͷ����ָ����ֵ��P��ʹPָ����һ�����
//	printf("���������ֵΪ:>");
//	if (P == NULL)
//	{
//		printf("����Ϊ��\n");
//	}
//	while (P != NULL)//PΪNULLʱ��������ӡ
//	{
//		printf("%d ", P->Data);//��ӡPָ��Ľ���������
//		P = P->Next;//���ý���ָ����ֵ��P��ʹPָ����һ�����
//	}
//	printf("\n");
//}
//int main()
//{
//	PNode List = CreateList();//�������ú���List����ͷ���λ��
//	TraverseList(List);//��ͷ��㴫�룬��ӡ������
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	fseek(pf, 0, SEEK_END);//���ļ�ָ�������ļ�ĩβ
//	int FileLen = ftell(pf);//���ļ�ָ��������ļ���ʼλ�õ�ƫ����
//	fseek(pf, 0, SEEK_SET);//���ļ�ָ��Ż��ļ���ͷ
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[3] = { 0 };
//	strcpy(arr, "��");
//	printf("%s\n", arr);
//	return 0;
//}


#include <stdio.h>
int main()
{
	char arr[] = "����ʦ����ѧ";
	printf("%d\n", sizeof(arr));//13
	return 0;
}