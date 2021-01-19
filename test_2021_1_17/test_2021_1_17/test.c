#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void move(int n, char a, char b, char c)
//{
//	if (n == 1)
//		printf("%c->%c\n", a, c);
//	else
//	{
//		move(n - 1, a, c, b);
//		printf("%c->%c\n", a, c);
//		move(n - 1, b, a, c);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	move(n, 'a', 'b', 'c');
//	return 0;
//}//汉诺塔问题

//int jumpfloor(int n)
//{
//	if (n <= 0)
//		return -1;
//	else if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	else
//		return jumpfloor(n - 1) + jumpfloor(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = jumpfloor(n);
//	printf("%d\n", ret);
//	return 0;
//}青蛙跳台阶问题