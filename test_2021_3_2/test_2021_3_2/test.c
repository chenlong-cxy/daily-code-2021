#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
////malloc��free�ɶ�
//int main()
//{
//	//���ڴ�����10�����͵Ŀռ�
//	int* p = (int*)malloc(4 * sizeof(int));
//	//int* p = (int*)malloc(INT_MAX);//Not enough space
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ��
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
//	//free�����������ͷŶ�̬���ٵĿռ��
//	free(p);//����̬����ռ䲻��ʹ�õ�ʱ���Ӧ�û�������ϵͳ
//	p = NULL;//�ֶ��ÿ�
//	return 0;
//}


//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//#include <stdio.h>
//int main()
//{
//	//���ٿռ�
//	//calloc���������˿ռ��Ὣ�ռ��ÿ���ֽڳ�ʼ��Ϊ0
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
//	//�ͷſռ�
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
//	//���ٿռ�
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
//	//���ٵĿռ䲻����׷�ӿռ�
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
//	//�ͷſռ�
//	free(p);
//	p = NULL;
//	return 0;
//}
//realloc����ע�����
//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ俴��׷�ӣ���ֱ��׷�ӣ��󷵻�p
//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ俴��׷�ӣ���realloc��������һ��
//�µ����򣬿���һ����������Ŀռ䣬���ҽ�ԭ���ڴ��е����ݿ����������ͷ�
//�ɵ��ڴ�ռ�
//3.����һ���µı���������realloc�����ķ���ֵ���ж����Ƿ�Ϊ��ָ��


//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)realloc(NULL, 40);//�ȼ�
//	int* p = (int*)malloc(40);
//	return 0;
//}
