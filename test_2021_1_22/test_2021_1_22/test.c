#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}//��ʽ����

//#include<stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("43")));
//	return 0;
//}//printf���ش�ӡ�ַ��ĸ���������ʱ���ظ���

//#include<stdio.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}//Ƕ�׵���

//#include<stdio.h>
//int add(int a, int b);//�����������ڲ��������ⲿ��extern��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}//ctrl+F7���룬ctrl+F5����+����
//int add(int a, int b)
//{
//	return a + b;
//}//��������

//#include<stdio.h>
//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = a + b;
//	printf("%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}�ݹ��ӡ���ֵ�ÿһλ����1234->1 2 3 4 

//#include<stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdef\238";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}//���������������������������������ʱ�򣬵ݹ�㲻�ټ�����
//ÿ�εݹ���ú��Խ��Խ�ӽ����������

//#include<stdio.h>
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//int count = 0;
//int Fibonacci(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=Fibonacci(n);
//	printf("%d\n", ret);
//	printf("count=%d\n", count);
//	return 0;
//}

//#include<stdio.h>
//int Fibonacci(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n - 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=Fibonacci(n);
//	printf("%d\n", ret);
//	return 0;
//}//����

//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//#include<stdio.h>
//int Fac1(int n)
//{
//	if (n <= 1)
//		return 1;
//	int ret = 1;
//	while (n)
//	{
//		ret *= n;
//		n--;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret1 = Fac1(n);
//	int ret2 = Fac2(n);
//	printf("ret1=%d,ret2=%d\n", ret1, ret2);
//	return 0;
//}

//#include<stdio.h>
//int my_strlen1(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen2(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen2(str+1);
//	else
//		return 0;
//}
//int main()
//{
//	int ret1 = my_strlen1("abcdef");
//	int ret2 = my_strlen2("abcdef");
//	printf("ret1=%d,ret2=%d\n", ret1, ret2);
//	return 0;
//}

//#include<stdio.h>
//void reverse_string(char* string)
//{
//	if (*(string + 1) != '\0')
//	{
//		reverse_string(string + 1);
//		printf("%c", *string);
//	}
//	else
//	{
//		printf("%c", *string);
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	return 0;
//}

//#include<stdio.h>
//int DigitSum(int n)
//{
//	if (n > 9)
//		return n % 10 + DigitSum(n/10);
//	else
//		return n;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//double my_pow(int n, int k)
//{
//	if (k < 0)
//		return 1.0 / my_pow(n, -k);
//	else if (k == 0)
//		return 1;
//	else
//		return n*my_pow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = my_pow(n, k);
//	printf("%d��%d�η�����%.2lf\n", n, k, ret);
//	return 0;
//}//�ݹ�ʵ��n��k�η�

#include<stdio.h>
int Fibonacci1(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fibonacci1(n - 1) + Fibonacci1(n - 2);
}
int Fibonacci2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n - 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret1 = Fibonacci1(n);
	int ret2 = Fibonacci2(n);
	printf("ret1=%d,ret2=%d\n", ret1, ret2);
	return 0;
}//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������