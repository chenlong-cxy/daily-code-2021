//#include <stdio.h>
//
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("c = %d\n", c);
//	return 0;
//}


//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double x = 0.0;
//	double y = 0.0;
//	double a = 2.0 / 3.0;
//	for (y = 1.0; y >= -1.0; y -= 0.05)
//	{
//		for (x = -1.0; x <= 1.0; x += 0.025)
//		{
//			if (pow(x, a) + pow(y, a) < 1.0)
//			{
//				putchar('#');
//			}
//		}
//		putchar('\n');
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	//预处理阶段处理
//	int a = 10;
//	printf("%s\n", __FILE__);
//	//d:\github仓库\daily-code-2021\test_2021_3_17\test_2021_3_17\test.c
//	printf("%d\n", __LINE__);
//	//50
//	printf("%s\n", __DATE__);
//	//Mar 17 2021
//	printf("%s\n", __TIME__);
//	//21:52:31
//	printf("%s\n", __FUNCTION__);
//	//main
//	return 0;
//}


//预处理指令
//#include <stdio.h>
////#define定义标识符
//#define MAX 100
//#define NAME "zhangsan"
//#define reg register
//#define print printf("hehe\n");
//int main()
//{
//	printf("%d\n", MAX);
//	printf("%s\n", NAME);
//	print;
//	return 0;
//}


//#include <stdio.h>
////#define定义宏
//#define SQUARE1(x) x*x
//#define SQUARE2(x) (x)*(x)
//
//#define DOUBLE1(x) (x)+(x)
//#define DOUBLE2(x) ((x)+(x))
//int main()
//{
//	printf("%d\n", SQUARE1(2 + 3));//11
//	printf("%d\n", SQUARE2(2 + 3));//25
//
//	printf("%d\n", 3 * DOUBLE1(2));//8
//	printf("%d\n", 3 * DOUBLE2(2));//12
//	return 0;
//}


//#include <stdio.h>
//
////#define DOUBLE1(x) (DOUBLE1(x-1)+(x))//error
//
//#define TEST MAX+10
//
//#define MAX 100
//int main()
//{
//	//printf("%d\n", DOUBLE1(3));//error
//	printf("%d\n", TEST);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("hello world\n");
//	printf("hello"     " world\n");
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("the value of a is 10\n");
//	printf("the value of b is 20\n");
//	printf("the value of f is 3.14\n");
//	return 0;
//}


//#include <stdio.h>
////#
////将参数插入到字符串中
//#define print(data,format) printf("the value of "#data" is "format"\n",data);
//int main()
//{
//	int a = 10;
//	print(a, "%d");
//	int b = 20;
//	print(b, "%d");
//	double f = 3.14;
//	print(f, "%.2lf");
//	return 0;
//}


#include <stdio.h>
//##
//把位于##两边的符号合为一个符号
//它允许宏定义从分离的文本片段创建标识符
#define CAT(a,b) a##b
int main()
{
	int Class100 = 1931;
	printf("%d\n", CAT(Class, 100));
	return 0;
}