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


#include <stdio.h>
struct Stu
{
	char name[5];
	char sec;
	float x[3];
};
int main()
{
	printf("%d\n", sizeof(struct Stu));//20
	return 0;
}