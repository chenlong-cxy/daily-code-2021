#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//struct S
//{
//	char ch;
//	int arr[];
//};
//int main()
//{
//	struct S s = { 0 };
//	printf("%p\n", &s);
//	printf("%p\n", &(s+1));
//	printf("%p\n", s.arr);
//	return 0;
//}//柔性数组存在内存对齐


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	FILE* ptr = fopen("data.txt", "r");
//	if (ptr == NULL)
//	{
//		printf("打开文件失败\n");
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("打开文件成功\n");
//	}
//	return 0;
//}//Opens for reading. 
//If the file does not exist or cannot be found, the fopen call fails.


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	FILE* ptr = fopen("data.txt", "w");
//	if (ptr == NULL)
//	{
//		printf("打开文件失败\n");
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("打开文件成功\n");
//	}
//	return 0;
//}//Opens an empty file for writing. 
//If the given file exists, its contents are destroyed.


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	FILE* ptr = fopen("data.txt", "a");
//	if (ptr == NULL)
//	{
//		printf("打开文件失败\n");
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("打开文件成功\n");
//	}
//	return 0;
//}