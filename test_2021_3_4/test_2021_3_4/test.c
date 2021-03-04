#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//	//2.动态内存未释放->内存泄漏
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//1.程序崩溃->将字符串拷贝到NULL中->error
//	printf(str);//与printf("%s",str);等价
//}
//int main()
//{
//	Test();
//	return 0;
//}
//1.运行代码程序会出现崩溃现象
//2.程序存在内存泄漏问题
//p在销毁前，开辟的动态内存未释放，在销毁后无法找到


//改正一
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void GetMemory(char** p)
//{
//	*p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);//1.传址
//	strcpy(str, "hello world");
//	printf(str);
//	//2.释放动态内存
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//改正二
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//char* GetMemory()
//{
//	char* p = (char *)malloc(100);//堆区
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();//1.将开辟好的动态内存首地址返回回来，用str接收
//	strcpy(str, "hello world");
//	printf(str);
//	//2.释放动态内存
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//#include <stdio.h>
//char *GetMemory(void)
//{
//	char p[] = "hello world";//栈区
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//返回栈空间地址的问题
//出了函数，字符数组p的内容被销毁，打印数组p的首地址时为随机值


//改正
//#include <stdio.h>
//char *GetMemory(void)
//{
//	static char p[] = "hello world";//静态区
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//释放
//	//free(str);(改)
//  //str=NULl;(改)
//}
//int main()
//{
//	Test();
//	return 0;
//}
//动态内存空间未释放->内存泄漏


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	//str=NULL;(改)
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}
//free释放str指向的空间后，不会将str置为NULL

