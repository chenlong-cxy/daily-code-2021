#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	long num = 0;
//	FILE *fp = NULL;
//	if ((fp = fopen("fname.dat", "r")) == NULL)
//	{
//		printf("Can’t open the file! ");
//		exit(0);
//	}
//	while (fgetc(fp) != EOF)
//	{
//		num++;
//	}
//	printf("num=%d\n", num);
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}


//#include <stdio.h>
//FILE


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		//No such file or directory
//		return 1;
//	}
//	else
//	{
//		printf("%s\n", strerror(errno));
//		//No error
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	//Opens an empty file for writing. If the given file exists, its contents are destroyed.
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	printf("%s\n", strerror(errno));
//	return 0;
//}//"w"的时候，如果该文件不存在则自动创建该文件，如果存在会清空文件内容，以供"w"


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("data.txt", "w");
//	//读取文件
//	//...
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	FILE* pf = fopen("Debug\\data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		printf("%s\n", strerror(errno));
//	}
//	return 0;
//}
//相对路径
//FILE* pf = fopen("data.txt", "r");//同级
//FILE* pf = fopen("./data.txt", "r");//同级
//FILE* pf = fopen("../data.txt", "r");//上一级
//FILE* pf = fopen("../../data.txt", "r");//上上级
//FILE* pf = fopen("Debug/data.txt", "r");//下一级
//FILE* pf = fopen("Debug\\data.txt", "r");//下一级

//绝对路径
//FILE* pf = fopen("D:\\code\\test_2021_3_14\\test_2021_3_14\\data.txt", "r");//同级


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//写数据
//	//char ch = fputc('a', pf);
//	//printf("%c\n", ch);
//
//	//int i = 0;
//	//for (i = 'a'; i <= 'z'; i++)
//	//{
//	//	fputc(i, pf);//pf：文件流
//	//}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}//Each of these functions returns the character written.


//#include <stdio.h>
//int main()
//{
//	fputc('a', stdout);//程序运行起来时标准输出流自动打开了，所以不用fopen函数
//	fputc('c', stdout);
//	fputc('e', stdout);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		/*char ch = fgetc(pf);
//		printf("%c\n", ch);*/
//		char ch = 0;
//		while ((ch = fgetc(pf)) != EOF)
//		{
//			printf("%c", ch);
//		}
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	char ch = fgetc(stdin);
//	printf("%c\n", ch);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//写数据
//	fputs("hello world!\n", pf);
//	fputs("\ta\n", pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	fputs("hello csdn!", stdout);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读数据
//	char arr[20] = { 0 };
//	//fgets(arr, 2, pf);
//	//printf("%s", arr);
//	while (fgets(arr, 2, pf)!=NULL)
//	{
//		printf("%s", arr);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	char arr[20] = { 0 };
//	fgets(arr, 10, stdin);
//	printf("%s\n", arr);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//struct Stu
//{
//	int age;
//	char name[20];
//	double score;
//};
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//格式化输出
//	struct Stu s = { 20, "zhangsan", 100.00 };
//	fprintf(pf, "%d %s %.2lf", s.age, s.name, s.score);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//struct Stu
//{
//	int age;
//	char name[20];
//	double score;
//};
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//格式化读取
//	struct Stu s = { 0 };
//	fscanf(pf, "%d %s %lf", &(s.age), s.name, &(s.score));
//	printf("%d %s %.2lf", s.age, s.name, s.score);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char arr[20] = { 0 };
//	fscanf(stdin, "%s", arr);
//	//scanf("%s", arr);
//	fprintf(stdout, "%s", arr);
//	//printf("%s",arr);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char arr[20] = { 0 };
//	fscanf(stdin, "%s", arr);
//	//scanf("%s",arr);
//	printf("%s\n", arr);
//	return 0;
//}


//sscanf,sprintf
#include <stdio.h>
struct Stu
{
	char name[20];
	int age;
	double score;
};
int main()
{
	//write formatted data to a string.
	//sprintf可以把格式化的数据转换为一个字符串
	struct Stu s = { "zhangsan", 20, 100.00 };
	char arr[100] = { 0 };
	sprintf(arr, "%s %d %lf", s.name, s.age, s.score);
	printf("%s\n", arr);

	//read formatted data from a string.
	//sscanf可以把一个字符串转换为格式化的数据
	struct Stu tmp = { 0 };
	sscanf(arr, "%s %d %lf", tmp.name, &(tmp.age), &(tmp.score));
	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
	return 0;
}