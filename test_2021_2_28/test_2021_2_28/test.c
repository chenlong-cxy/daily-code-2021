//#include<stdbool.h>
//bool isMonotonic(int* A, int ASize)
//{
//	int i = 0;
//	int flag1 = 1;
//	int flag2 = 1;
//	for (i = 0; i < ASize - 1; i++)
//	{
//		if (A[i] - A[i + 1] >= 0)
//			continue;
//		else
//		{
//			flag1 = 0;
//			break;
//		}
//	}
//	for (i = 0; i < ASize - 1; i++)
//	{
//		if (A[i] - A[i + 1] <= 0)
//			continue;
//		else
//		{
//			flag2 = 0;
//			break;
//		}
//	}
//	if (flag1 == 1 || flag2 == 1)
//		return true;
//	else
//		return false;
//}


//int** highestPeak(int** isWater, 
//	int isWaterSize, 
//	int* isWaterColSize, 
//	int* returnSize, 
//	int** returnColumnSizes)
//{
//	*returnSize = isWaterSize;
//	**returnColumnSizes = *isWaterColSize;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < isWaterSize / (*isWaterColSize); i++)
//	{
//		for (j = 0; j < (*isWaterColSize); j++)
//		{
//			if (isWater[i][j] == 1)
//				isWater[i][j] = 0;//水域高度为0
//			else
//				isWater[i][j] = 1;//非水域高度，暂时为1
//		}
//	}
//
//}


//#include<stdio.h>
//#include<stdlib.h>
//int cmp(const void* e1,const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int findContentChildren(int* g, int gSize, int* s, int sSize)
//{
//	qsort(g, gSize, sizeof(int), cmp);
//	qsort(s, sSize, sizeof(int), cmp);
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 0, j = 0; i < gSize&&j < sSize; i++, j++)
//	{
//		while (j<sSize&&g[i]>s[j])
//		{
//			j++;
//		}
//		if (j < sSize)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int g[4] = { 10, 9, 8, 7 };
//	int s[4] = { 5, 6, 7, 8 };
//	int ret = findContentChildren(g, 4, s, 4);
//	printf("%d\n", ret);
//	return 0;
//}


//#include<string.h>
//#include<stdlib.h>
//int cmp(const void* e1, const void* e2)
//{
//	return ((*(char*)e1) - 'a') - ((*(char*)e2) - 'a');
//}
//int longestPalindrome(char* s)
//{
//	int sz = strlen(s);
//	qsort(s, sz, sizeof(char), cmp);
//	int i = 1;
//	int count = 0;
//	while (i<=sz)
//	{
//		int num = 1;
//		while ((i <= sz) && (s[i] == s[i + 1]))
//		{
//			num++;
//			i++;
//		}
//		count += num / 2;
//	}
//	return count * 2 + (count < sz);
//}


#include<stdio.h>
#include<string.h>
int longestPalindrome(char* s)
{
	int sz = strlen(s);
	int table[58] = { 0 };
	while (*s)
	{
		table[*s - 'A']++;
		s++;
	}
	int i = 0;
	int sum = 0;
	for (i = 0; i < 58; i++)
	{
		sum += table[i] / 2;
	}
	return (2*sum) < sz ? (2 * sum + 1) : (2*sum);
}
int main()
{
	char arr[] = "abccccdd";
	int ret = longestPalindrome(arr);
	printf("%d\n", ret);
	return 0;
}