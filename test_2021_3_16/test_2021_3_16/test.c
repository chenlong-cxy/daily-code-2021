#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	printf("����\n");
//	return 0;
//}

//FILE* pf;//�ļ�ָ�����

//�����ȡ

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//fseek
//�����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ��
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//��ȡ�ļ�
//	char ch = fgetc(pf);
//	printf("%c ", ch);
//
//	//fseek(pf, 0, SEEK_SET);
//	//fseek(pf, -7, SEEK_END);
//	fseek(pf, -1, SEEK_CUR);
//
//	ch = fgetc(pf);
//	printf("%c ", ch);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
////ftell
////�����ļ�ָ���������ʼλ�õ�ƫ����
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//��ȡ�ļ�
//	char ch = fgetc(pf);
//	printf("%c ", ch);
//	ch = fgetc(pf);
//	printf("%c ", ch);
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
////rewind
////���ļ�ָ���λ�ûص��ļ�����ʼλ��
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//��ȡ�ļ�
//	char ch = fgetc(pf);
//	printf("%c ", ch);
//	ch = fgetc(pf);
//	printf("%c ", ch);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c ", ch);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//ѡ����������
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main()
{
	printf("���������������ָ���:>");
	int n = 0;
	scanf("%d", &n);
	int* p = (int*)malloc(n*sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	printf("�������������:>");
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
		}//��ʱkΪmin
		if (k != i)
		{
			int tmp = p[i];
			p[i] = p[k];
			p[k] = tmp;
		}
	}
	//���
	for (i = 0; i < n; i++)
	{
		printf("%d ", p[i]);
	}
	return 0;
}