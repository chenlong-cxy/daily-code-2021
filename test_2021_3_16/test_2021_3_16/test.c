#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	printf("测试\n");
//	return 0;
//}

//FILE* pf;//文件指针变量

//随机读取

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//fseek
//根据文件指针的位置和偏移量来定位文件指针
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读取文件
//	char ch = fgetc(pf);
//	printf("%c ", ch);
//
//	//fseek(pf, 0, SEEK_SET);
//	//fseek(pf, -7, SEEK_END);
//	fseek(pf, -1, SEEK_CUR);
//
//	ch = fgetc(pf);
//	printf("%c ", ch);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
////ftell
////返回文件指针相对于起始位置的偏移量
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读取文件
//	char ch = fgetc(pf);
//	printf("%c ", ch);
//	ch = fgetc(pf);
//	printf("%c ", ch);
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
////rewind
////让文件指针的位置回到文件的起始位置
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读取文件
//	char ch = fgetc(pf);
//	printf("%c ", ch);
//	ch = fgetc(pf);
//	printf("%c ", ch);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c ", ch);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//选择排序（升序）
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main()
{
	printf("请输入待排序的数字个数:>");
	int n = 0;
	scanf("%d", &n);
	int* p = (int*)malloc(n*sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	printf("请输入待排数据:>");
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &p[i]);
	}
	int j = 0;
	int k = 0;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (p[k] > p[j])
			{
				k = j;
			}
		}//此时k为min
		if (k != i)
		{
			int tmp = p[i];
			p[i] = p[k];
			p[k] = tmp;
		}
	}
	//输出
	for (i = 0; i < n; i++)
	{
		printf("%d ", p[i]);
	}
	return 0;
}