//#include <stdio.h>
//#include <math.h>
//#define PI 3.1415926
//double Fun(double W, double w, double C)
//{
//	double temp = (W - w) / C;
//	return acos(temp) / PI * 180;
//}
//int main()
//{
//	int W = 2;
//	int w = 1;
//	int C = 2;
//	double ret = Fun(W, w, C);
//	printf("%lf\n", ret);
//	return 0;
//}


//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//int* addToArrayForm(int* A, int ASize, int K, int* returnSize)
//{
//	if (ASize == 0)
//	{
//		*returnSize = 0;
//		return 0;
//	}
//	int digit = 0;
//	int i = 0;
//	int num = 0;
//	for (i = ASize - 1; i >= 0; i--)
//	{
//		num += (int)pow(10, digit)*A[i];
//		digit++;
//	}
//	int ret = num + K;
//	int n = (int)log10(ret) + 1;
//	*returnSize = n;
//	int* ptr = (int*)malloc(n*sizeof(int));
//	for (i = n - 1; i >= 0; i--)
//	{
//		ptr[i] = ret % 10;
//		ret /= 10;
//	}
//	return ptr;
//}
//int main()
//{
//	int A[10] = { 9, 9, 9, 9, 9, 9, 9, 9, 9, 9 };
//	int num = 0;
//	int* p = addToArrayForm(A, 10, 1, &num);
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	return 0;
//}


//int removeElement(int* nums, int numsSize, int val)
//{
//	int src = 0;
//	int dst = 0;
//	while (src < numsSize)
//	{
//		if (nums[src] == val)
//		{
//			src++;
//		}
//		else
//		{
//			nums[dst] = nums[src];
//			dst++;
//			src++;
//		}
//	}
//	return dst;
//}


//int removeDuplicates(int* nums, int numsSize){
//	if (numsSize == 0)
//		return 0;
//	int* p1 = nums + 1;
//	int* p2 = nums + 1;
//	int count = 1;
//	int i = 1;
//	for (i = 1; i < numsSize; i++)
//	{
//		if (nums[i] != nums[i - 1])
//		{
//			count++;
//			*p2 = *p1;
//			p2++;
//		}
//		p1++;
//	}
//	return count;
//}


//int removeDuplicates(int* nums, int numsSize)
//{
//	if (numsSize == 0 || numsSize == 1)
//	{
//		return numsSize;
//	}
//	int cur = 0;
//	int next = 1;
//	int dst = 0;
//	while (next < numsSize)
//	{
//		if (nums[cur] != nums[next])
//		{
//			nums[dst] = nums[cur];
//			dst++;
//			cur = next;
//		}
//		next++;
//	}
//	nums[dst] = nums[cur];
//	return dst + 1;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int* addToArrayForm(int* A, int ASize, int K, int* returnSize)
//{
//	int n = (int)log10(K) + 1;
//	int size = ASize > n ? ASize + 1 : n + 1;
//	int* arr = (int*)malloc(sizeof(int)*size);
//	int i = 0;
//	int flag = 0;//½øÎ»
//	*returnSize = 0;
//	for (i = ASize - 1; i >= 0; i--)
//	{
//		arr[*returnSize] = A[i] + K % 10 + flag;
//		flag = 0;
//		if (arr[*returnSize] >= 10)
//		{
//			flag = arr[*returnSize] / 10;
//			arr[*returnSize] %= 10;
//		}
//		K /= 10;
//		(*returnSize)++;
//	}
//	while (K != 0 || flag != 0)
//	{
//		arr[*returnSize] = flag + K % 10;
//		flag = 0;
//				if (arr[*returnSize] >= 10)
//		{
//			flag = arr[*returnSize] / 10;
//			arr[*returnSize] %= 10;
//		}
//		K /= 10;
//		(*returnSize)++;
//	}
//	int left = 0;
//	int right = *returnSize - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//	return arr;
//}
//int main()
//{
//	int A[1] = { 7 };
//	int K = 993;
//	int size = 0;
//	int* arr = addToArrayForm(A, 1, K, &size);
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//void reverse(int* nums, int start, int end)
//{
//	while (start < end)
//	{
//		int tmp = nums[start];
//		nums[start] = nums[end];
//		nums[end] = tmp;
//		start++;
//		end--;
//	}
//}
//void rotate(int* nums, int numsSize, int k)
//{
//	if (numsSize == 0 || numsSize == 1)
//		return;
//	k = k%numsSize;
//	if (k == 0)
//		return;
//	reverse(nums, 0, numsSize - 1);
//	reverse(nums, 0, k - 1);
//	reverse(nums, k, numsSize - 1);
//}


void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
	int i = m;
	int j = 0;
	while (i < nums1Size)
	{
		nums1[i] = nums2[j];
		i++;
		j++;
	}
	for (i = 0; i < nums1Size - 1; i++)
	{
		for (j = 0; j < nums1Size - 1 - i; j++)
		{
			if (nums1[j]>nums1[j + 1])
			{
				int tmp = nums1[j];
				nums1[j] = nums1[j + 1];
				nums1[j + 1] = tmp;
			}
		}
	}
}