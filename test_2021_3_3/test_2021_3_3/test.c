#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void PrintN(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		printf("%d ", i);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	PrintN(n);
//	return 0;
//}


//#include <stdio.h>
//void PrintN(int n)
//{
//	if (n > 0)
//	{
//		PrintN(n - 1);
//		printf("%d ", n);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	PrintN(n);
//	return 0;
//}


//#include <stdio.h>
//#include <math.h>
////计算a0+a1*x^1+a2*x^2+...+an*x^n (n<=100)
//double test1(int n, double a[], double x)
//{
//	int i = 0;
//	double ret = a[0];
//	for (i = 1; i <= n; i++)
//	{
//		ret += a[i] * pow(x, i);
//	}
//	return ret;
//}
//double test2(int n, double a[], double x)
//{
//	int i = n;
//	double ret = a[n];
//	for (i = n; i > 0; i--)
//	{
//		ret = a[i - 1] + ret*x;
//	}
//	return ret;
//}


//#include <time.h>
//#include <stdio.h>
////clock_t clock(void);
////clock_t
////typedef long clock_t;
//int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int i = 0;
//	clock_t start = clock();//设置起点
//	for (i = 0; i < 1000000; i++)
//	{
//		int ret = Add(a, b);
//	}
//	clock_t finish = clock();//设置终点
//	double duration = ((double)(finish - start)) / CLOCKS_PER_SEC;
//	//#define CLOCKS_PER_SEC  1000
//	printf("start=%f\nfinish=%f\nduration=%f\n",
//		(double)start, (double)finish, duration);
//	return 0;
//}


#include <time.h>
#include <stdio.h>
#include <math.h>
//计算a0+a1*x^1+a2*x^2+...+an*x^n (n<=100)
#define MAXN 10//多项式的最大项数，即n+1
#define MAXK 1e7//被测函数最大重复调用次数，1*10^7次

double f1(int n, double a[], double x)
{
	int i = 0;
	double ret = a[0];
	for (i = 1; i <= n; i++)
	{
		ret += a[i] * pow(x, i);
	}
	return ret;
}//直接法

double f2(int n, double a[], double x)
{
	int i = n;
	double ret = a[n];
	for (i = n; i > 0; i--)
	{
		ret = a[i - 1] + ret*x;
	}
	return ret;
}//秦九韶算法

void run(double(*p)(int, double*, double), double a[], int f_num)
{
	int i = 0;
	clock_t start = clock();//设置起点
	for (i = 0; i < MAXK; i++)
	{
		p(MAXN - 1, a, 1.1);
	}
	clock_t finish = clock();//设置终点
	double duration_total = ((double)(finish - start)) / CLOCKS_PER_SEC;
	//#define CLOCKS_PER_SEC  1000
	printf("f%d:\n\tstart=%f\n\tfinish=%f\n\tduration_total=%f\n\tduration=%f\n",
		f_num, (double)start, (double)finish, duration_total, duration_total / MAXK);
}
int main()
{
	double a[MAXN];
	int i = 0;
	for (i = 0; i < MAXN; i++)
		a[i] = (double)i;
	run(f1, a, 1);
	run(f2, a, 2);
	return 0;
}//秦九韶算法比直接法快一个数量级