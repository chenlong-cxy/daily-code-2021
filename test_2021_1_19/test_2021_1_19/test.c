#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 2;
//	if (b == c == a)
//		printf("ok\n");
//	return 0;
//}

//int main()
//{
//	int a;
//	int b;
//	int c = a + (a + b) / 2;
//	return 0;
//}

//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		left++;
//		right--;
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//#include<stdlib.h>
//int main()
//{
//	char input[20] = "������";
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣡��ĵ��Խ���һ���Ӻ�ػ���������롰��������ȡ���ػ�");
//	if ((strcmp(input, "������")) == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("#########################\n");
//	printf("####     1. play     ####\n");
//	printf("####     0. exit     ####\n");
//	printf("#########################\n");
//}
//void game()
//{
//	int x=rand()%100;
//	int guess = 0;
//	while (1)
//	{
//		printf("������֣�>\n");
//		scanf("%d", &guess);
//		if (guess > x)
//			printf("�´���\n");
//		else if (guess < x)
//			printf("��С��\n");
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("������(1/0)��>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int n = 6;
//	while (n)
//	{
//		int ret = rand() % 900+100;
//		printf("%d\n", ret);
//		n--;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = a > b ? b : a;
//	for (; i >= 1; i--)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}//շת�����

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	while (a%b)
	{
		int c = a%b;
		a = b;
		b = c;
	}
	printf("%d\n", b);
	return 0;
}//շת�����