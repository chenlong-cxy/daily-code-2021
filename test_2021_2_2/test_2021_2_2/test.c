#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("|-------------------------|\n");
	printf("|      1.Add   2.Sub      |\n");
	printf("|      3.Mul   4.Div      |\n");
	printf("|         0.exit          |\n");
	printf("|-------------------------|\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x*y;
}
int Div(int x, int y)
{
	return x / y;
}
cals(int(*p)(int, int))
{
	int x = 0;
	int y = 0;
	printf("������������\n");
	scanf("%d %d", &x, &y);
	int ret = p(x, y);
	printf("ret=%d\n", ret);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			cals(Add);
			break;
		case 2:
			cals(Sub);
			break;
		case 3:
			cals(Mul);
			break;
		case 4:
			cals(Div);
			break;
		case 0:
			printf("�˳�������\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}