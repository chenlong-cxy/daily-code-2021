//#include<stdio.h>
//struct Stu
//{
//	int a;
//	char b;
//}a;
//struct Stu
//{
//	int a;
//	char b;
//}*pa;
//int main()
//{
//	pa = &a;
//	return 0;
//}


//#include<stdio.h>
//struct Stu
//{
//	int a;
//	char b;
//}a,*pa;
//int main()
//{
//	pa = &a;
//	return 0;
//}


//#include<stdio.h>
////�����ṹ�����
//struct
//{
//	int a;
//	char b;
//}a, *pa;
//int main()
//{
//	pa = &a;
//	return 0;
//}


//#include<stdio.h>
////�ṹ���������
////struct Node
////{
////	int data;//4
////	struct Node n;//?
////};//error->sizeof(struct Node)����֪
////struct Node
////{
////	int data;//4
////	struct Node* n;//4/8
////};//correct
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//struct Test1
//{
//	char b;
//	int a;
//	char c;
//};
//struct Test2
//{
//	char b;
//	char c;
//	int a;
//};
//int main()
//{
//	struct Test1 test1 = { 'w', 2, 'j' };
//	struct Test1* p = &test1;
//	struct Test2 test2;
//	printf("%d\n", sizeof(test1));
//	printf("%d\n", sizeof(test2));
//	printf("%c\n", *(char*)p);
//	return 0;
//}


//#include<stdio.h>
//#pragma pack(4)//����Ĭ�϶�����Ϊ4
//struct Test
//{
//	char a;
//	double b;
//}test;
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//int main()
//{
//	printf("%d\n", sizeof(test));
//	return 0;
//}


#include<stdio.h>
#include<stddef.h>
//size_t offsetof(structName, memberName);
//����ṹ���Ա����ڽṹ����ʼλ�õ�ƫ����
struct Test
{
	int a;
	char b;
	int c;
};
int main()
{
	printf("%d\n", offsetof(struct Test, a));//0
	printf("%d\n", offsetof(struct Test, b));//4
	printf("%d\n", offsetof(struct Test, c));//8
	return 0;
}