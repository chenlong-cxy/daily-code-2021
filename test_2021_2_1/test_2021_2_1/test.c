//#include<stdio.h>
//int main()
//{
//	int n = 9;
//	//00000000000000000000000000001001
//	float *pFloat = (float *)&n;
//	//0 00000000 00000000000000000001001
//	//S=0
//	//E=-126
//	//M=0.00000000000000000001001
//	//(-1)^0*M*2^-126->0.000000
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	//1001
//	//(-1)^0*1.001*2^3
//	//S=0
//	//M=1.001
//	//E=3+127
//	//0 10000010 00100000000000000000000->1091567616
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d ", (*p)[i]);
//	return 0;
//}


//#include<stdio.h>
//void print(int(*p)[5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	print(arr, 3, 5);//二维数组的数组名就是二维数组的首元素，也就是一维数组的数组名
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 20;
//	int b = -10;
//	float c = 9.5;
//	return 0;
//}


#include <stdio.h>
int main()
{
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	char *str3 = "hello bit.";
	char *str4 = "hello bit.";
	if (str1 == str2)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");

	if (str3 == str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are not same\n");

	return 0;
}