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
//		printf("小端\n");
//	else
//		printf("大端\n");
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
//	//%u-无符号整型
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
//	//%u-无符号整型
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
//11111111111111111111111111111111-(-1)补码
//11111111-a[0]补码
//11111110
//10000001-a[0]原码->(-1)
//10000000000000000000000000000010-(-2)原码
//11111111111111111111111111111101
//11111111111111111111111111111110-(-2)补码
//11111110-a[1]补码
//10000001
//10000010-a[1]原码->(-2)
//...
//11111111111111111111111110000000
//10000000-a[127]补码->-128
//11111111111111111111111101111111
//01111111-a[128]补码(原码)->127
//00000000-a[255]补码(原码)->0


//1
//1 1
//1 2 1
//1 3 3 1
//……
//#include<stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)//行数
//	{
//		for (j = 0; j <= i; j++)//每行列数
//		{
//			if (j == 0 || j == i)
//				arr[i][j] = 1;
//			else
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//			printf("%-3d ", arr[i][j]);
//		printf("\n");
//	}
//	return 0;
//}


//A说：不是我。murderer!='A';
//B说：是C。murderer=='C';
//C说：是D。murderer=='D';
//D说：C在胡说murderer!='D';
//已知3个人说了真话，1个人说的是假话。
//#include<stdio.h>
//int main()
//{
//	char murderer;
//	//ABC为真，D为假
//	murderer = 'C';//B
//	if ((murderer != 'A') && (murderer == 'D') && (murderer == 'D'))
//		printf("凶手是%c\n", murderer);
//	//ABD为真，C为假
//	murderer = 'C';//B
//	if ((murderer != 'A') && (murderer != 'D') && (murderer != 'D'))
//		printf("凶手是%c\n", murderer);
//	//ACD为真，B为假
//	murderer = 'D';//C
//	if ((murderer != 'A') && (murderer != 'D') && (murderer != 'C'))
//		printf("凶手是%c\n", murderer);
//	//BCD为真，A为假
//	murderer = 'C';//B
//	if ((murderer == 'D') && (murderer != 'D') && (murderer == 'A'))
//		printf("凶手是%c\n", murderer);
//	return 0;
//}


//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
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
							printf("A是第%d名,B是第%d名,C是第%d名，D是第%d名，E是第%d名\n", A, B, C, D, E);
							return 0;
						}
					}
				}
			}
		}
	}
	return 0;
}