#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct Stu s = { "zhangsan", 20, 100.00 };
//	//���ļ�
//	FILE* pf = fopen("data.txt", "wb");//write binary
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//д������
//	fwrite(&s, sizeof(struct Stu), 1, pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct Stu s = { 0 };
//	//���ļ�
//	FILE* pf = fopen("data.txt", "rb");//write binary
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//д������
//	fread(&s, sizeof(struct Stu), 1, pf);
//	printf("%s %d %.2lf", s.name, s.age, s.score);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


#include <stdio.h>
#include <string.h>
#include <errno.h>
int main()
{
	int a = 10000;
	FILE* pf = fopen("bin.dat", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	fwrite(&a, sizeof(int), 1, pf);
	fclose(pf);
	pf = NULL;
	return 0;
}