#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//��ȡ�ļ���Ϣ
//	char ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c", ch);
//	}
//	//�жϽ���ԭ��
//	if (ferror(pf))
//	{
//		printf("��ȡ�ļ�ʱ��������\n");
//	}
//	else if (feof(pf))
//	{
//		printf("�ļ��ɹ���ȡ���\n");
//	}
//	//�ر��ļ�
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
//	printf("д�����������\n");
//	Sleep(10000);//����10����
//	fflush(pf);//ˢ�»�������ʹ���������������д�뵽�ļ�
//	printf("ˢ�»�������ʹ���������������д�뵽�ļ�\n");
//	Sleep(10000);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


