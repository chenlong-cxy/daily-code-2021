#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//	//2.��̬�ڴ�δ�ͷ�->�ڴ�й©
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//1.�������->���ַ���������NULL��->error
//	printf(str);//��printf("%s",str);�ȼ�
//}
//int main()
//{
//	Test();
//	return 0;
//}
//1.���д���������ֱ�������
//2.��������ڴ�й©����
//p������ǰ�����ٵĶ�̬�ڴ�δ�ͷţ������ٺ��޷��ҵ�


//����һ
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void GetMemory(char** p)
//{
//	*p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);//1.��ַ
//	strcpy(str, "hello world");
//	printf(str);
//	//2.�ͷŶ�̬�ڴ�
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//������
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//char* GetMemory()
//{
//	char* p = (char *)malloc(100);//����
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();//1.�����ٺõĶ�̬�ڴ��׵�ַ���ػ�������str����
//	strcpy(str, "hello world");
//	printf(str);
//	//2.�ͷŶ�̬�ڴ�
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//#include <stdio.h>
//char *GetMemory(void)
//{
//	char p[] = "hello world";//ջ��
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//����ջ�ռ��ַ������
//���˺������ַ�����p�����ݱ����٣���ӡ����p���׵�ַʱΪ���ֵ


//����
//#include <stdio.h>
//char *GetMemory(void)
//{
//	static char p[] = "hello world";//��̬��
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//�ͷ�
//	//free(str);(��)
//  //str=NULl;(��)
//}
//int main()
//{
//	Test();
//	return 0;
//}
//��̬�ڴ�ռ�δ�ͷ�->�ڴ�й©


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	//str=NULL;(��)
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}
//free�ͷ�strָ��Ŀռ�󣬲��Ὣstr��ΪNULL

