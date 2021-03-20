//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "120";
//	char arr2[] = "43";
//	int c = atoi(arr1) + atoi(arr2);
//	printf("%d\n", c);
//	return 0;
//}


//#include <stdio.h>
//#include <math.h>
////0-9
////48-57
//int my_atoi(const char* p)
//{
//	int num = 0;
//	while (*p<'0'||*p>'9')
//	{
//		p++;
//	}
//	while (*p >= '0' && *p <= '9')
//	{
//		num += num * 10 + (*p - '0');
//		p++;
//	}
//	return num;
//}
//int main()
//{
//	char arr[] = "1931";
//	int c = my_atoi(arr);
//	printf("%d\n", c);
//	return 0;
//}


//#include <stdio.h>
//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char tele[12];
//}Stu;
//int main()
//{
//	Stu s = { "chenlong", 20, "nan", "13547201153" };
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	return 0;
//}


//#include <stdio.h>
//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char tele[12];
//}Stu;
//int main()
//{
//	Stu arr[3] = { { "zhangsan", 29, "nan", "64385346554" },
//	{ "lisi", 34, "lv", "16549736565" }, 
//	{ "wangwu", 65, "nan", "16579654665" } };
//	printf("%-20s\t%-3d\t%-5s\t%-12s\n", "姓名", "年龄", "性别", "电话");
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%-20s\t%-3d\t%-5s\t%-12s\n",
//			arr[i].name, arr[i].age, arr[i].sex, arr[i].tele);
//	}
//	return 0;
//}