#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Fibonacci(int n)
//{
//	return n < 2 ? n : Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fibonacci(n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//int Factorial(int n)
//{
//	return n < 2 ? n : Factorial(n - 1)*n;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Factorial(n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24 }, *q[4], k;
//	for (k = 0; k<4; k++)
//	{
//		q[k] = &a[k * 3];
//	}
//	printf("%d\n", q[3][1]);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i, j, a = 0;
//	for (i = 0; i<2; i++)
//	{
//		for (j = 0; j<4; j++)
//		{
//			if (j % 2)
//				break;
//			a++;
//		}
//		a++;
//	}
//	printf("%d\n", a);
//	return 0;
//}