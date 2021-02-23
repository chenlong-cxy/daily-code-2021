//#include<stdio.h>
//int maxSatisfied(int* customers, int customersSize, int* grumpy, int grumpySize, int X)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < customersSize; i++)
//	{
//		if (*(grumpy + i) == 0)
//		{
//			ret += *(customers + i);
//		}
//	}
//	int j = 0;
//	int max = 0;
//	for (j = 0; j < customersSize - X + 1; j++)//X个连在一起的连法
//	{
//		int k = 0;
//		int tmp = 0;
//		for (k = 0; k < X; k++)//这X个数相加
//		{
//			if (*(grumpy + k + j) == 1)
//			{
//				tmp += *(customers + j + k);
//			}
//		}
//		if (tmp > max)
//		{
//			max = tmp;
//		}
//	}
//	return ret + max;
//}
//int main()
//{
//	int customers[] = { 1, 0, 1, 2, 1, 1, 7, 5 };
//	int grumpy[] = { 0, 1, 0, 1, 0, 1, 0, 1 };
//	int num = maxSatisfied(customers, sizeof(customers) / sizeof(customers[0]), grumpy, sizeof(grumpy) / sizeof(grumpy[0]), 3);
//	printf("%d\n", num);
//	return 0;
//}
//
//
//
//int maxSatisfied(int* customers, int customersSize, int* grumpy, int grumpySize, int X) {
//	int total = 0;
//	int n = customersSize;
//	for (int i = 0; i < n; i++) {
//		if (grumpy[i] == 0) {
//			total += customers[i];
//		}
//	}
//	int increase = 0;
//	for (int i = 0; i < X; i++) {
//		increase += customers[i] * grumpy[i];
//	}
//	int maxIncrease = increase;
//	for (int i = X; i < n; i++) {
//		increase = increase - customers[i - X] * grumpy[i - X] + customers[i] * grumpy[i];
//		//窗口滑动
//		maxIncrease = fmax(maxIncrease, increase);
//	}
//	return total + maxIncrease;
//}


//#include<stdio.h>
//int findKthPositive(int* arr, int arrSize, int k)
//{
//	int i = 0;
//	int num = 0;
//	while (k)
//	{
//		num++;
//		if ((i < arrSize) && (*(arr + i) == num))
//			i++;
//		else
//			k--;
//	}
//	return num;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4 };
//	int k = 2;
//	int ret = findKthPositive(arr, sizeof(arr) / sizeof(arr[0]), k);
//	printf("%d\n", ret);
//	return 0;
//}


#include<stdio.h>
int* mostCompetitive(int* nums, int numsSize, int k)
{}
int main()
{
	int arr[] = { 3, 5, 2, 6 };
	int k = 2;
	int* p = mostCompetitive(arr, sizeof(arr) / sizeof(arr[0]), k);
	return 0;
}