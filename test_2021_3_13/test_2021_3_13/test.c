#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", printf("%d\n", 123));
//	printf("%d\n", printf("%d", 123));
//	return 0;
//}//Each of these functions returns the number of characters printed, 
//or a negative value if an error occurs.


//#include <stdio.h>
//int count = 0;
//long long Fibonacci(int n)
//{
//	if (n == 0)
//		count++;
//	if (n == 0 || n == 1)
//		return n;
//	else
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//}//µÝ¹é
//int main()
//{
//	Fibonacci(20);
//	printf("%d\n", count);
//	return 0;
//}


//#include <stdio.h>
//long long Fibonacci(int n)
//{
//	if (n == 0)
//		return 0;
//	else if (n == 1)
//		return 1;
//	long long a = 0;
//	long long b = 1;
//	long long c = 1;
//	while (n - 2)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//		n--;
//	}
//	return c;
//}//µü´ú·¨
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i <= n; i++)
//	{
//		long long ret = Fibonacci(i);
//		printf("%lld ", ret);
//	}
//	return 0;
//}


//#include <stdio.h>
//long long Fibonacci(int n)
//{
//	if (n == 0 || n == 1)
//		return n;
//	else
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//}//µÝ¹é
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long long ret = Fibonacci(n);
//	printf("%lld\n", ret);
//	return 0;
//}


