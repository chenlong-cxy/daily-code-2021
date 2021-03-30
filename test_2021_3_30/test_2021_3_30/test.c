//int singleNumber(int* nums, int numsSize)
//{
//	int i = 0;
//	int arr[32] = { 0 };
//	for (i = 0; i < numsSize; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 32; j++)
//		{
//			long long tmp = 1;
//			if ((tmp << j)&nums[i] != 0)
//			{
//				arr[j]++;
//			}
//		}
//	}
//
//}


//int** fun(int n) 
//{
//	int ** s = (int **)malloc(n * sizeof(int *));
//	while (n--)
//		s[n] = (int *)malloc(n * sizeof(int));
//	return s;
//}


//int removeElement(int* nums, int numsSize, int val)
//{
//	int* p1 = nums;
//	int* p2 = nums;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		if (nums[i] != val)
//		{
//			*p2 = *p1;
//			p2++;
//			count++;
//		}
//		p1++;
//	}
//	return count;
//}


#include <stdio.h>

int removeDuplicates(int* nums, int numsSize)
{
	if (numsSize == 0)
		return 0;
	int* p1 = nums + 1;
	int* p2 = nums + 1;
	int count = 1;
	int i = 1;
	for (i = 1; i < numsSize; i++)
	{
		if (nums[i] != nums[i - 1])
		{
			count++;
			*p2 = *p1;
			p2++;
		}
		p1++;
	}
	return count;
}
int main()
{
	int arr[10] = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
	int ret = removeDuplicates(arr, 10);
	printf("%d\n", ret);
	return 0;
}