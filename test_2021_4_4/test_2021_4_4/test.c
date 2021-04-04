#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////int printf ( const char * format, ... );
//int main()
//{
//	printf("hello world!\n");
//	char arr[] = "hello world!\n";
//	printf(arr);
//	return 0;
//}


//#include <stdio.h>
////int scanf ( const char * format, ... );
//int main()
//{
//	int a = 10;
//	int*p = &a;
//	scanf("%d", p);
//	scanf("%d", &a);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	printf("%d ", input);
//	fscanf(stdin, "%d", &input);
//	printf("%d ", input);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int input = 10;
//	printf("%d\n", input);
//	fprintf(stdout, "%d\n", input);
//	return 0;
//}


////sscanf:从字符串读取格式化数据
////sprintf:将格式化数据写入字符串
//#include <stdio.h>
//int main()
//{
//	int input = 10;
//	printf("%d\n", input);
//	fprintf(stdout, "%d\n", input);
//	return 0;
//}


//sscanf,sprintf
//#include <stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	//write formatted data to a string.
//	//sprintf可以把格式化的数据转换为一个字符串
//	struct Stu s = { "zhangsan", 20, 100.00 };
//	char arr[100] = { 0 };
//	sprintf(arr, "%s %d %lf", s.name, s.age, s.score);
//	printf("%s\n", arr);
//
//	//read formatted data from a string.
//	//sscanf可以把一个字符串转换为格式化的数据
//	struct Stu tmp = { 0 };
//	sscanf(arr, "%s %d %lf", tmp.name, &(tmp.age), &(tmp.score));
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char arr[] = "2021 dragon";
//	int year = 0;
//	char s[10] = { 0 };
//	sscanf(arr, "%d %s", &year, s);
//	printf("%d\n", year);
//	printf("%s\n", s);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char arr[20] = { 0 };
//	int year = 2021;
//	char s[] = "dragon";
//	sprintf(arr, "%d %s", year, s);
//	printf("%s\n", arr);
//	return 0;
//}