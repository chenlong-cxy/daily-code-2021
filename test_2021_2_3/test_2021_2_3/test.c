#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char *p = "abcdef";
//	printf("%d\n", sizeof(&p[0] + 1));//4
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int aa[2][5] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a[5] = { 5, 4, 3, 2, 1 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int Rotate_judge(char arr1[], char arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//存在情况次数
//	{
//		int tmp = arr1[sz - 1];
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			arr1[sz - 1 - j] = arr1[sz - 2 - j];
//		}
//		arr1[0] = tmp;
//		if (strcmp(arr1, arr2) == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "ABCDE";
//	char arr2[] = "cdeab";
//	int sz = strlen(arr1);
//	int ret = Rotate_judge(arr1, arr2, sz);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}


//实现一个函数，可以左旋字符串中的k个字符。
//#include<stdio.h>
//#include<string.h>
//void Left_rotate(char arr[], int sz, int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		int tmp = arr[0];
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[sz - 1] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "ABCDE";
//	int sz = strlen(arr);
//	int k = 0;
//	scanf("%d", &k);
//	Left_rotate(arr, sz, k);
//	printf("%s", arr);
//	return 0;
//}


//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);
#include<stdio.h>
int Search_fun(int arr[4][4], int row, int col, int n)
{
	int i = 0;
	int j = col - 1;
	while ((i <= row) && (j >= 0))
	{
		if (n > arr[i][j])
			i++;
		else if (n < arr[i][j])
			j--;
		else
			return 1;
	}
	return 0;
}
int main()
{
	int arr[4][4] = { { 1, 2, 3, 5 }, { 1, 2, 5, 7 }, { 3, 4, 8, 9 }, { 5, 7, 8, 10 } };
	int n = 0;
	printf("请输入一个数:>");
	scanf("%d", &n);
	int ret = Search_fun(arr, 4, 4, n);
	if (ret == 1)
		printf("改数存在\n");
	else
		printf("改数不存在\n");
	return 0;
}