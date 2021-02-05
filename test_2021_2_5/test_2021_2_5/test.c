#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	if (a = 0)
//	{
//		printf("%d", a - 10);
//	}
//	else
//	{
//		printf("%d", a++);
//	}
//	return 0;
//}//0


//#include<stdio.h>
//int main()
//{
//	int x;
//	int y;
//	int z;
//	x = z = 2, y = 3;
//	if (x > y)
//		z = 1;
//	else if (x == y)
//		z = 0;
//	else
//		z = -1;
//	printf("%d\n", z);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char acHello[] = "hello\0world";
//	char acNew[15] = { 0 };
//	strcpy(acNew, acHello);
//	printf("%d\n", strlen(acNew));
//	printf("%d\n", sizeof(acHello));
//	return 0;
//}//5 12


//#include<stdio.h>
//int main()
//{
//	char a[20];
//	char *p1 = (char *)a;
//	char *p2 = (char*)(a + 5);
//	int n = p2 - p1;
//	printf("%d\n", n);
//	return 0;
//}//5


//#define F(X,Y) ((X)+(Y))
//#include<stdio.h>
//int main()
//{
//	int a = 3, b = 4;
//	printf("%d\n", F(a++, b++));
//	return 0;
//}//7