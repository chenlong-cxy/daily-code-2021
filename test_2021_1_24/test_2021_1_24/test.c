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
