//#include<stdio.h>
//int Check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}
//int main()
//{
//	if (Check_sys() == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//10000000-a
//	//%u-�޷�������
//	//11111111111111111111111110000000
//	//4294967168
//	printf("%u\n", a);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char a = 128;
//	//00000000000000000000000010000000
//	//10000000-a
//	//11111111111111111111111110000000
//	//%u-�޷�������
//	//4294967168
//	printf("%u\n", a);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i <= 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	//00101100-c
//	printf("%d %d", a + b, c);
//	//00000000000000000000000100101100-a+b->300
//	//00000000000000000000000000101100-c->44
//	return 0;
//}


//unsigned int a = 0x1234;//00 00 12 34
//unsigned char b = *(unsigned char *)&a;


//#include<stdio.h>
//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i<1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//11111111111111111111111111111111-(-1)����
//11111111-a[0]����
//11111110
//10000001-a[0]ԭ��->(-1)
//10000000000000000000000000000010-(-2)ԭ��
//11111111111111111111111111111101
//11111111111111111111111111111110-(-2)����
//11111110-a[1]����
//10000001
//10000010-a[1]ԭ��->(-2)
//...
//11111111111111111111111110000000
//10000000-a[127]����->-128
//11111111111111111111111101111111
//01111111-a[128]����(ԭ��)->127
//00000000-a[255]����(ԭ��)->0


//1
//1 1
//1 2 1
//1 3 3 1
//����
//#include<stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)//����
//	{
//		for (j = 0; j <= i; j++)//ÿ������
//		{
//			if (j == 0 || j == i)
//				arr[i][j] = 1;
//			else
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	//��ӡ
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//			printf("%-3d ", arr[i][j]);
//		printf("\n");
//	}
//	return 0;
//}


//A˵�������ҡ�murderer!='A';
//B˵����C��murderer=='C';
//C˵����D��murderer=='D';
//D˵��C�ں�˵murderer!='D';
//��֪3����˵���滰��1����˵���Ǽٻ���
//#include<stdio.h>
//int main()
//{
//	char murderer;
//	//ABCΪ�棬DΪ��
//	murderer = 'C';//B
//	if ((murderer != 'A') && (murderer == 'D') && (murderer == 'D'))
//		printf("������%c\n", murderer);
//	//ABDΪ�棬CΪ��
//	murderer = 'C';//B
//	if ((murderer != 'A') && (murderer != 'D') && (murderer != 'D'))
//		printf("������%c\n", murderer);
//	//ACDΪ�棬BΪ��
//	murderer = 'D';//C
//	if ((murderer != 'A') && (murderer != 'D') && (murderer != 'C'))
//		printf("������%c\n", murderer);
//	//BCDΪ�棬AΪ��
//	murderer = 'C';//B
//	if ((murderer == 'D') && (murderer != 'D') && (murderer == 'A'))
//		printf("������%c\n", murderer);
//	return 0;
//}


//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
#include<stdio.h>
int Check(int A, int B, int C, int D, int E)
{
	if (A != B&&A != C&&A != D&&A != E&&B != C&&B != D&&B != E&&C != D&&C != E&&D != E)
		return 1;
	return 0;
}
int main()
{
	int A, B, C, D, E;
	for (A = 1; A <= 5; A++)
	{
		for (B = 1; B <= 5; B++)
		{
			for (C = 1; C <= 5; C++)
			{
				for (D = 1; D <= 5; D++)
				{
					for (E = 1; E <= 5; E++)
					{
						if (((B == 2) + (A == 3) == 1) && ((B == 2) + (E == 4) == 1) && ((C == 1) + (D == 2) == 1) && ((C == 5) + (D == 3) == 1) && ((E == 4) + (A == 1) == 1)&&(Check(A,B,C,D,E)==1))
						{
							printf("A�ǵ�%d��,B�ǵ�%d��,C�ǵ�%d����D�ǵ�%d����E�ǵ�%d��\n", A, B, C, D, E);
							return 0;
						}
					}
				}
			}
		}
	}
	return 0;
}