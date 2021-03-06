#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[100];
//	gets(arr);
//	char* p[100];
//	char set[] =" .";
//	int i = 0;
//	p[i] = strtok(arr, set);
//	while (p[i] != NULL)
//	{
//		i++;
//		p[i] = strtok(NULL, set);
//	}
//	int j = 0;
//	for (j = i - 1; j >= 0; j--)
//	{
//		printf("%s", p[j]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	fib(8);
//	printf("%d\n",cnt);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = a > b ? a : b;
//	while (min%a != 0 || min%b != 0)
//	{
//		min++;
//	}
//	printf("%d\n", min);//最小公倍数
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (a*i%b != 0)
//	{
//		i++;
//	}
//	printf("%d\n", a*i);//最小公倍数
//	return 0;
//}//a*i一定是a的倍数，只需确定a*i是b的倍数即可


//#include <stdio.h>
////辗转相除法
//int Fun(int a, int b)
//{
//	if (b == 0)
//		return a;
//	else
//		return Fun(b, a%b);
//}//最大公因数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = Fun(a, b);
//	printf("%d\n", a*b / ret);//最小公倍数
//	return 0;
//}


//#include <stdio.h>
////更相减损术
//int Fun(int a, int b)
//{
//	if (a == b)
//		return a;
//	else if (a > b)
//		return Fun(a - b, b);
//	else
//		return Fun(a, b - a);
//}//最大公因数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = Fun(a, b);
//	printf("%d\n", a*b / ret);//最小公倍数
//	return 0;
//}


#include <stdio.h>
#include <string.h>
void Strreverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100];
	//输入
	gets(arr);
	//处理
	int len = strlen(arr);
	Strreverse(arr, arr + len - 1);//逆序整个字符串
	char* start = arr;
	char* end = arr;
	while (*end)
	{
		end = start;
		while (*end != ' '&&*end != '\0')
			end++;
		Strreverse(start, end - 1);
		start = end + 1;
	}//逆序每个单词
	//输出
	printf("%s\n", arr);
	return 0;
}