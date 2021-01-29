#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	assert(str != NULL);//断言
//	const char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}


//#include<stdio.h>
//int count_one_bit(size_t num)
//{
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num /= 2;
//	}
//	return count;
//}
//int count_one_bit(int num)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int count_one_bit(int num)
//{
//	int count = 0;
//	while(num)
//	{
//		num = num&(num - 1);
//		count++;
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_one_bit(num);
//	printf("%d\n", n);
//	return 0;
//}


//#include<stdio.h>
//int CountTwo(int i)
//{
//	int count = 0;
//	while (i)
//	{
//		if (i % 10 == 2)
//			count++;
//		i /= 10;
//	}
//	return count;
//}
//int main()
//{
//	int i = 0;
//	int total = 0;
//	for (i = 1; i <= 2020; i++)
//	{
//		total += CountTwo(i);
//	}
//	printf("%d\n", total);
//	return 0;
//}//624


#include<stdio.h>
int main()
{
	int a[40][40];//创建足够到20行20列的数组
	int x = 0, y = 0, z = 2;
	a[0][0] = 1;
	for (int i = 2; i < 40; i++)//开始填充数字
	{
		if (i % 2 == 0)//判断斜着的行数是奇数行还是偶数行，奇数和偶数代表从上往下还是从下往上填数字
		{
			int t = 0;
			x = 0; y = i-1;
			while (t<i)
			{
				t = t + 1;
				a[x][y] = z;
				z = z + 1;
				x = x + 1; y = y - 1;
			}
		}
		else
		{
			int t = 0;
			x = i-1; y = 0;
			while (t < i)
			{
				t = t + 1;
				a[x][y] = z;
				z = z + 1;
				x = x - 1; y = y + 1;
			}

		}
	}
	printf("%d", a[19][19]);
}