//#include <stdio.h>
//int Fun1(int* arr, int sz)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i] ^ i;
//	}
//	return ret^i;
//}
//int Fun2(int* arr, int sz)
//int main()
//{
//	int arr[] = { 2, 4, 5, 1, 0, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret1 = Fun1(arr, sz);
//	int ret2 = Fun2(arr, sz);
//	printf("%d\n", ret);
//	return 0;
//}


//void fun(int n)
//{
//	int i = 1;
//	while (i <= n)
//		i = i * 2;
//}//2^x=n
////x=logn


//for (int i = 0; i<n; i++)
//	for (int j = 0; j<n; j++)
//		a[i][j] = i*j;
//	//O(n^2)


//int f(unsigned int n) 
//{
//	if (n == 0 || n == 1)
//		return 1;
//	else
//		return n * f(n - 1);
//}//O(n)


//int missingNumber(int* nums, int numsSize)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		ret = ret^nums[i] ^ i;
//	}
//	return ret^i;
//}


//#include <stdio.h>
//#include <stdlib.h>
////Note: The returned array must be malloced, 
////assume caller calls free().
//int* singleNumbers(int* nums, int numsSize)
//{
//	int* arr = (int*)malloc(sizeof(int)* 2);
//	//*returnSize = 2;
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		tmp ^= nums[i];
//	}
//	int pos = 0;
//	while (tmp % 2 == 0)
//	{
//		tmp >>= 1;
//		pos++;
//	}
//	arr[0] = 0, arr[1] = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		if ((nums[i] >> pos)%2 == 1)
//			arr[0] ^= nums[i];
//		else
//			arr[1] ^= nums[i];
//	}
//	return arr;
//}
//int main()
//{
//	int nums[8] = { 6, 5, 5, 9, 10, 9, 4, 10 };
//	int* arr = NULL;
//	arr = singleNumbers(nums, 8);
//	printf("%d %d\n", arr[0], arr[1]);
//	return 0;
//}


#include <stdio.h>
int main()
{
	printf("%d\n", __LINE__);
	return 0;
}