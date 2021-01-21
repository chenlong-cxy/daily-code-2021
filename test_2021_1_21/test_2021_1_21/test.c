#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//			printf("%d ",year);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//假设是素数
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 101; i <= 199; i+=2)
//	{
//		int flag = 1;//假设是素数
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//
//	}
//	return 0;
//}//试除法

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		while (i)
//		{
//			if (i % 10 == 9)
//				count++;
//			i = i / 10;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = "hello bit!!!";
//	char arr2[20] = "############";
//	strcpy(arr2, arr1);
//	printf("arr1:%s,arr2:%s\n", arr1, arr2);
//	memset(arr1,'5',4);
//	printf("arr1:%s,arr2:%s\n", arr1, arr2);
//	return 0;
//}

//#include<stdio.h>
//void swap(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = is_prime(n);
//	if (ret == 1)
//		printf("%d是素数\n", n);
//	else
//		printf("%d不是素数\n", n);
//	return 0;
//}

//#include<stdio.h>
//int binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (k > arr[mid])
//			left = mid + 1;
//		else if (k < arr[mid])
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	scanf("%d", &k);
//	int ret = binary_search(arr,k);
//	if (ret = -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标为：%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//void test(int* pn)
//{
//	(*pn)++;
//}
//int main()
//{
//	int num = 0;
//	test(&num);
//	printf("%d\n", num);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int year, month;
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		getchar();
//		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//			printf("31\n");
//		else if (month == 4 || month == 6 || month == 9 || month == 11)
//			printf("30\n");
//		else if ((((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) && (month == 2))
//			printf("29\n");
//		else
//			printf("28\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 199; i += 2)
//	{
//		int flag = is_prime(i);
//		if (flag == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int is_leap_year(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int ret = is_leap_year(year);
//	if (ret == 1)
//		printf("%d年是闰年\n", year);
//	else
//		printf("%d年不是闰年\n", year);
//	return 0;
//}

//#include<stdio.h>
//void swap(int* pa,int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a,&b);
//	printf("a=%d,b=%d\n", a, b);
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%d=%-3d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

