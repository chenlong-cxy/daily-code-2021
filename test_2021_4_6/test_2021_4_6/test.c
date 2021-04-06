#include <stdio.h>
#include <assert.h>
//����Func1��ʱ�临�Ӷ�
void Func1(int N)
{
	int count = 0;
	for (int i = 0; i < 2 * N; i++)
	{
		for (int j = 0; j < 2 * N; j++)
		{
			count++;
		}
	}
	for (int k = 0; k < 2 * N; k++)
	{
		count++;
	}
}
//����Func2��ʱ�临�Ӷ�
void Func2(int N)
{
	int count = 0;
	for (int k = 0; k < 100; k++)
	{
		++count;
	}
	printf("%d\n", count);
}
//������ֲ��Һ�����ʱ�临�Ӷ�
int BinarySearch(int* a, int N, int x)
{
	assert(a);
	int begin = 0;
	int end = N - 1;
	while (begin < end)
	{
		int mid = begin + ((end - begin) >> 1);
		if (x > a[mid])
			begin = mid + 1;
		else if (x < a[mid])
			end = mid - 1;
		else
			return mid;
	}
	return -1;
}
//����ð���������Ŀռ临�Ӷ�
void BubbleSort(int* a, int N)
{
	assert(a);
	for (int i = 0; i < N; i++)
	{
		int exchange = 0;
		for (int j = 0; j < N - 1 - i; j++)
		{
			if (a[j]>a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				exchange = 1;
			}
		}
		if (exchange == 0)
			break;
	}
}
int main()
{
	int a[10] = { 3, 3, 4, 6, 7, 3, 1, 7, 9, 5 };
	BubbleSort(a, 10);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
//����׳˵ݹ麯���Ŀռ临�Ӷ�
long long Factorial(size_t N)
{
	return N < 2 ? N : Factorial(N - 1)*N;
}
//����Fibonacci�Ŀռ临�Ӷȣ�
long long* Fibonacci(size_t n)
{
	if (n == 0)
		return NULL;
	long long * fibArray =
		(long long *)malloc((n + 1) * sizeof(long long));
	fibArray[0] = 0;
	fibArray[1] = 1; for (int i = 2; i <= n; ++i)
	{
		fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
	}
	return fibArray;
}
//����쳲����������Ŀռ临�Ӷ�
int Fibonacci1(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fibonacci1(n - 1) + Fibonacci1(n - 2);
}