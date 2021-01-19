#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int fun_fac(int x)
//{
//	if (x == 1)
//		return 1;
//	else if (x > 1)
//		return x*fun_fac(x - 1);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = fun_fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = 1;
//	while(n)
//	{
//		ret = ret*n;
//		n--;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//void fun_exchange(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int a = 10, b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	fun_exchange(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a[] = { 12, 25, 36, 45, 58, 69, 74, 85, 96 };
//	int n,sz;
//	printf("请输入待查找数字：");
//	scanf("%d", &n);
//	sz = sizeof(a) / sizeof(a[0]);
//	int left, right;
//	left = 0;
//	right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (n > a[mid])
//			left = mid + 1;
//		else if (n < a[mid])
//			right = mid - 1;
//		else
//			break;
//	}
//	if (left <= right)
//		printf("该数存在\n");
//	else
//		printf("查无此数\n");
//	return 0;
//}

//int main()
//{
//	int a[5] = { 0 };
//	int i, j;
//	for (i = 0; i < 5; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5 - 1 - i; j++)
//		{
//			if (a[j]>a[j + 1])
//			{
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 5; i++)
//		printf("%d ", a[i]);
//	return 0;
//}

//int main()
//{
//	printf("hello world!\n");
//	return 0;
//}