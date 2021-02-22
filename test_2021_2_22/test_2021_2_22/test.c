//结构体传参
//#include<stdio.h>
//struct Test
//{
//	int i;
//	char c;
//	double d;
//};
//void Initial(struct Test* p)
//{
//	(*p).i = 15;
//	p->d = 3.14;
//	p->c = 'w';
//}
//print(struct Test* p)
//{
//	printf("%d %lf %c\n", p->i, p->d, p->c);
//}
//int main()
//{
//	struct Test test = { 0 };
//	printf("%d\n", sizeof(struct Test));
//	Initial(&test);
//	print(&test);
//	return 0;
//}


//#include<stdio.h>
//struct Test
//{
//	int a : 13;
//	int b : 15;
//	int c : 27;
//	int d : 13;
//};
//int main()
//{
//	struct Test test = { 0 };
//	printf("%d\n", sizeof(struct Test));//12
//	return 0;
//}


//#include<stdio.h>
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(struct S));
//	s.a = 10;
//	s.b = 21;
//	s.c = 5;
//	s.d = 7;
//	return 0;
//}//2a0507


//#include<stdio.h>
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color
//{
//	RED = 2,
//	GREEN = 8,
//	BLUE
//};
//int main()
//{
//	enum Color c = RED;
//	printf("%d %d %d\n", c, GREEN, BLUE);
//	return 0;
//}


//#include<stdio.h>
////联合-联合体-共用体
//union U
//{
//	int a;
//	char b;
//	double c;
//};
//int main()
//{
//	union U u;
//	printf("%p\n", &u);
//	printf("%p\n", &u.a);
//	printf("%p\n", &u.b);
//	printf("%p\n", &u.c);
//	printf("%d\n", sizeof(union U));
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int* p = &a;
//	if ((*(char*)p) == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}


//#include<stdio.h>
//int Check_sys()
//{
//	union Un
//	{
//		int i;
//		char c;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int ret = Check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//}


//#include<stdio.h>
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	printf("%d\n", sizeof(enum Sex));//4
//	return 0;
//}


#include<stdio.h>
union U
{
	int a;//4 8 4
	char b[5];//1 8 1
};
int main()
{
	printf("%d\n", sizeof(union U));
	return 0;
}