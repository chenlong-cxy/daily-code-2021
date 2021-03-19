#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i = 10;
//	int j = 20;
//	int* p = &i;
//	int* q = &j;
//	printf("i = %d\n", *p);
//	printf("j = %d\n", *q);
//	printf("&i = %p\n", p);
//	printf("&j = %p\n", q);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 10;
//	int* p = &i;
//	printf("%p\n", p);
//	printf("%p\n", p + 1);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	int* p;
//	for (i = 0; i < 10; i++)
//	{
//		p = &arr[i];
//		printf("&arr[%d]:%p\n", *p, p);
//	}
//	return 0;
//}


//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*p)(int, int) = &Add;
//	int c = p(a, b);
//	printf("c = %d", c);
//	return 0;
//}


//#include <stdio.h>
//struct Stu
//{
//	char name[5];
//	char sec;
//	float x[3];
//};
//int main()
//{
//	printf("%d\n", sizeof(struct Stu));//20
//	return 0;
//}


//#include <stdio.h>
//#include <stddef.h>
//int main()
//{
//	//#define offsetof(s,m)   (size_t)&(((s *)0)->m)
//	offsetof();
//	return 0;
//}


//#define INT_PTR int*
//typedef int* int_ptr;
//INT_PTR a, b;//b不是指针类型
//int_ptr c, d;


//#include <stdio.h>
//#define N 4
//#define Y(n) ((N+2)*n)
//int main()
//{
//	int z = 2 * (N + Y(5 + 1));
//	//      2 * (4 + ((4+2)*5+1))
//	printf("%d\n", z);//70
//	return 0;
//}


//#include <stdio.h>
//#define A 2+2
//#define B 3+3
//#define C A*B
//int main()
//{
//	printf("%d\n", C);//11
//	//2+2*3+3
//	return 0;
//}


//#include <stdio.h>
////写一个宏，可以将一个整型数字比特位的奇数位和偶数位交换。
//#define SWAPINTBIT(N) ((((N)&0x55555555)<<1)|(((N)&0xaaaaaaaa)>>1))
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = SWAPINTBIT(n);
//	printf("%d\n", ret);
//	return 0;
//}


//#include <stdio.h>
//#include <stddef.h>
//struct S
//{
//	char ch;
//	int i;
//	double d;
//};
//int main()
//{
//	int a = offsetof(struct S, ch);
//	int b = offsetof(struct S, i);
//	int c = offsetof(struct S, d);
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//#include <stdio.h>
//#include <stddef.h>
//#define OFFSETOF(SN,MN) ((int)&(((SN*)0)->MN))
//struct S
//{
//	char ch;
//	int i;
//	double d;
//};
//int main()
//{
//	int a = OFFSETOF(struct S, ch);
//	int b = OFFSETOF(struct S, i);
//	int c = OFFSETOF(struct S, d);
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


