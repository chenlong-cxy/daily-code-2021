#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char password[10] = { 0 };
//	scanf("%s", password);
//	printf("请确认(Y/N):>\n");
//	getchar();
//	int ch = getchar();
//	if (ch == 'Y')
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//	return 0;
//}

//int main()
//{
//	char password[10] = { 0 };
//	scanf("%s", password);
//	printf("请确认(Y/N):>\n");
//	int ch;
//	while (ch=getchar() != '\n')
//	{
//		;
//	}
//	ch=getchar();
//	if (ch == 'Y')
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//	return 0;
//}

//int main()
//{
//	int i = 0, j = 0,count=0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			count++;
//			printf("hehe,%d\n",count);
//		}
//	}
//	return 0;
//}

void move(int n,char a,char b,char c)
{
	if (n == 1)
	{
		printf("%c->%c\n", a, c);
	}
	else
	{

	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	move(n,'a','b','c');
	return 0;
}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0,ret=1;
//	for (i = 1; i <= n; i++)
//		ret = ret*i;
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0, ret = 1, i = 0, j = 0;
//	for (i = 1; i <= n;i++)
//	{
//		ret = 1;
//		for (j = 1; j <=i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n=0,ret=1,sum=0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}//《把时间当做朋友》

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入一个数：\n");
//	int n=0;
//	scanf("%d", &n);
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (n > arr[mid])
//			left = mid + 1;
//		else if (n < arr[mid])
//			right = mid - 1;
//		else
//			break;
//	}
//	if (left <= right)
//		printf("找到了,下标为%d\n",mid);
//	else
//		printf("找不到\n");
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int temp;
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int fun(int x, int y)
//{
//	return y == 0 ? x : fun(y, x%y);
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int c = fun(b,a%b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 101; i <= 199; i+=2)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0, count = 0, n;
//	for (i = 1; i <= 100; i++)
//	{
//		n = i;
//		while (n)
//		{
//			if (n % 10 == 9)
//				count++;
//			n /= 10;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum += -1.0 / i;
//		}
//		else
//			sum += 1.0 / i;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int max = a[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (a[i]>max)
//			max = a[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)//行数
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}