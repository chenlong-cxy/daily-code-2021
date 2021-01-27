#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}


//#include<stdio.h>
//int count = 0;
//void move(int n, char a, char b, char c)
//{
//	if (n == 1)
//		printf("第%d次:%c->%c\n", ++count, a, c);
//	else
//	{
//		move(n - 1, a, c, b);
//		printf("第%d次:%c->%c\n", ++count, a, c);
//		move(n - 1, b, a, c);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	move(n, 'a', 'b', 'c');
//	printf("共移动了%d次\n", count);
//	return 0;
//}//汉诺塔问题


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i<4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}//0 0 3 4 5


//#include<stdio.h>
//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}//6,12


//#include<stdio.h>
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu *p)
//{
//	printf("%s\n", (*p).name);
//}
//
//int main()
//{
//	struct stu students[3] = { { 9801, "zhang", 20 },
//	{ 9802, "wang", 19 },
//	{ 9803, "zhao", 18 }
//	};
//	fun(students + 1);
//	return 0;
//}//wang


//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}//11223300


//#include<stdio.h>
//void print(int* pa, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	print(arr, 10);
//	return 0;
//}


//#include<stdio.h>
//int test(int a)
//{
//	int i = 0;
//	int sum = 0;
//	int term = 0;
//	for (i = 1; i <= 10000; i *= 10)
//	{
//		term += a*i;
//		sum += term;
//	}
//	return sum;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = test(a);
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int Narcissistic(int i)
//{
//	int n = log10(i) + 1;
//	int sum = 0;
//	while (i)
//	{
//		sum += (int)pow((i % 10), n);
//		i /= 10;
//	}
//	return sum;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int ret = Narcissistic(i);
//		if (ret == i)
//			printf("%d ", i);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	for (i = 0; i < 13; i++)
//	{
//		for (a = 0; a < fabs(6 - i); a++)
//			printf(" ");
//		for (b = 0; b < (6 - fabs(6 - i))*2+1; b++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int fee = 20;
//	num = fee + fee / 2;
//	printf("%d\n", num);
//	return 0;
//}


#include<stdio.h>
void print(char* pc)
{
	char ch = getchar();
	if (ch != '\n')
	{
		print(&ch);
		putchar(ch);
	}
}
int main()
{
	char ch;
	while ((ch = getchar()) != EOF)
	{
		print(&ch);
		putchar(ch);
		getchar();
	}
	return 0;
}