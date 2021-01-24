//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}//数组在内存中是连续存放的

//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 1, 2, 3, 4, 3, 4, 5, 6, 5, 6, 7, 8 };
//	int* p = &arr[0][0];
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//#include<stdio.h>
////void Bubble_sort(int* arr,int sz)
//void Bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设数组有序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;//数组无序
//			}//arr[j]==*(arr+j);
//		}
//		if (flag == 1)
//			break;
//	}
//}
//void print_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(arr, sz);
//	print_sort(arr, sz);
//	return 0;
//}

//#include<stdio.h>
//void Bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设数组有序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;//数组无序
//			}
//		}
//	}
//}
//void print_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//}
//int main()
//{
//	int arr[] = { 2, 3, 1, 5, 7, 6, 4, 9, 8, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(arr, sz);
//	print_sort(arr, sz);
//	return 0;
//}

//#include<stdio.h>
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		arr[i] = 0;
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz / 2; i++)
//	{
//		int temp = arr[i];
//		arr[i] = arr[sz - 1 - i];
//		arr[sz - 1 - i] = temp;
//	}
//}
//int main()
//{
//	int arr1[10];
//	init(arr1,10);//赋初值为0
//	print(arr1, 10);//打印数组
//	int arr2[10] = { 2, 4, 3, 6, 8, 5, 7, 1, 10, 9 };
//	print(arr2, 10);
//	reverse(arr2, 10);//逆置元素
//	print(arr2, 10);
//	return 0;
//}

#include<stdio.h>
void exchange_sort(int arr1[], int arr2[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main()
{
	int arr1[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("arr1:");
	print(arr1,10);
	printf("arr2:");
	print(arr2, 10);
	exchange_sort(arr1, arr2, 10);
	printf("交换后\n");
	printf("arr1:");
	print(arr1, 10);
	printf("arr2:");
	print(arr2, 10);
	return 0;
}