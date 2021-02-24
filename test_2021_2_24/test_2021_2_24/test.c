#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int** flipAndInvertImage(int** A, int ASize, int* AColSize, int* returnSize, int** returnColumnSizes)
//{
//	*returnSize = ASize;
//	*returnColumnSizes = AColSize;
//	int n = ASize;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int left = 0;
//		int right = n - 1;
//		while (left < right)
//		{
//			if (A[i][left] == A[i][right])
//			{
//				A[i][left] ^= 1;
//				A[i][right] ^= 1;
//			}
//			left++;
//			right--;
//		}
//		if (left == right)
//			A[i][left] ^= 1;
//	}
//	return A;
//}
//int main()
//{
//	int arr[3][3] = { { 1, 1, 0 }, { 1, 0, 1 }, { 0, 0, 0 } };
//
//	return 0;
//}
//int** flipAndInvertImage(int** A, int ASize, int* AColSize, int* returnSize, int** returnColumnSizes)
//{
//	*returnSize = ASize;
//	*returnColumnSizes = AColSize;
//	int n = ASize;
//	for (int i = 0; i < n; i++) 
//	{
//		int left = 0, right = n - 1;
//		while (left < right) 
//		{
//			if (A[i][left] == A[i][right])
//			{
//				A[i][left] ^= 1;
//				A[i][right] ^= 1;
//			}
//			left++;
//			right--;
//		}
//		if (left == right) 
//		{
//			A[i][left] ^= 1;
//		}
//	}
//	return A;
//}


//#include<stdio.h>
////从1 到 n 中1出现的次数
//int NumberOf1Between1AndN_Solution(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int num = i;
//		while (num)
//		{
//			if (num % 10 == 1)
//				count++;
//			num /= 10;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = NumberOf1Between1AndN_Solution(n);
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//int* maxInWindows(int* num, int numLen, int size, int* returnSize) 
//{
//	if (size > numLen)
//	{
//		*returnSize = 0;
//		return NULL;
//	}
//	*returnSize = size;
//	int i = 0;
//	int max = 0;
//	int* pm = num;
//	for (i = 0; i < size; i++)
//	{
//		max += num[i];
//	}
//	int tmp = max;
//	for (i = size; i < numLen; i++)
//	{
//		tmp = tmp + num[i] - num[i - size];
//		if (tmp>max)
//		{
//			max = tmp;
//			pm = &num[i - size + 1];
//		}
//	}
//	return pm;
//}
//int main()
//{
//	int arr[] = { 1, 2, 4, 3, 5, 6, 3 };
//	int* x = NULL;
//	int* ret = maxInWindows(arr, sizeof(arr) / sizeof(arr[0]), 3, x);
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
int* maxInWindows(int* num, int numLen, int size, int* returnSize)
{
	if ((size > numLen) || (size == 0))
	{
		*returnSize = 0;
		return NULL;
	}
	*returnSize = numLen - size + 1;
	int* p = (int*)malloc(4 * (numLen - size + 1));
	int i = 0;
	for (i = 0; i < numLen - size + 1; i++)
	{
		int max = num[i];
		int j = 0;
		for (j = i + 1; j < i + size; j++)
		{
			if (num[j]>max)
				max = num[j];
		}
		p[i] = max;
	}
	return p;
}