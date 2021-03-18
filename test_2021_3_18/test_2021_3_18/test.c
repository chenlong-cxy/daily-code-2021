#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读取文件信息
//	char ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c", ch);
//	}
//	//判断结束原因
//	if (ferror(pf))
//	{
//		printf("读取文件时发生错误\n");
//	}
//	else if (feof(pf))
//	{
//		printf("文件成功读取完毕\n");
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include <stdio.h>
//#include <Windows.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fputs("hello world! 1931", pf);
//	printf("写到输出缓冲区\n");
//	Sleep(10000);//休眠10秒钟
//	fflush(pf);//刷新缓冲区，使输出缓冲区的数据写入到文件
//	printf("刷新缓冲区，使输出缓冲区的数据写入到文件\n");
//	Sleep(10000);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


