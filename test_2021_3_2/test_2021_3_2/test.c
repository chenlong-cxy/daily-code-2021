#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
////malloc和free成对
//int main()
//{
//	//向内存申请10个整型的空间
//	int* p = (int*)malloc(4 * sizeof(int));
//	//int* p = (int*)malloc(INT_MAX);//Not enough space
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//free函数是用来释放动态开辟的空间的
//	free(p);//当动态申请空间不再使用的时候就应该还给操作系统
//	p = NULL;//手动置空
//	return 0;
//}


//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//#include <stdio.h>
//int main()
//{
//	//开辟空间
//	//calloc函数开辟了空间后会将空间的每个字节初始化为0
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	free(p);
//	p = NULL;
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	//开辟空间
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//开辟的空间不够，追加空间
//	int* ptr = (int*)realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	free(p);
//	p = NULL;
//	return 0;
//}
//realloc函数注意事项：
//1.如果p指向的空间之后有足够的内存空间看供追加，则直接追加，后返回p
//2.如果p指向的空间之后没有足够的内存空间看供追加，则realloc函数会找一个
//新的区域，开辟一块满足需求的空间，并且将原来内存中的数据拷贝回来，释放
//旧的内存空间
//3.需用一个新的变量来接收realloc函数的返回值，判断其是否为空指针


//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)realloc(NULL, 40);//等价
//	int* p = (int*)malloc(40);
//	return 0;
//}
