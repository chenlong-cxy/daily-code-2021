//#include<stdio.h>
//int main()
//{
//	//int a = 5;
//	//int b = a << 1;
//	//��������ԭ�롢���롢������ͬ
//	//��������ԭ�롢���롢���������
//	//�ڴ��д洢���ǲ���
//	//<<��>>�ƶ����ǲ���
//	int a = -1;
//	int b = a >> 1;
//	//<<:
//	//10000000000000000000000000000001-ԭ��
//	//11111111111111111111111111111110-����
//	//11111111111111111111111111111111-����(���ڴ��д洢��ʽ�ǲ���)
//	//��߶������ұ߲�0
//	//>>:
//	//��������
//	//�ұ߶�������߲������λ��ͬ������//b=-1
//	//�߼�����
//	//�ұ߶�������߲�0
//	printf("%d\n", b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 7;
//	int c = a^b;
//	//101-a
//	//111-b
//	//010-c
//	printf("%d\n", c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = -1;
//	int c = a^b;
//	//00000000000000000000000000000101-a
//	//11111111111111111111111111111111-b(����)
//	//11111111111111111111111111111010-c(����)
//	//11111111111111111111111111111001-c(����)
//	//10000000000000000000000000000110-c(ԭ��)
//	printf("%d\n", c);//-6
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 3;
//	printf("a=%d,b=%d\n", a, b);
//	a = a^b;//��������
//	b = a^b;
//	a = a^b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	short a = 3;
//	int b = 10;
//	printf("%d\n", sizeof(a = b + 5));//2
//	printf("%d\n", a);//3
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(int[10]));//�������ͣ�int[10]
//	printf("%d\n", sizeof(int));//����Ԫ�����ͣ�int
//	//sizeof�����зŵı��ʽ�ǲ������
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	//  5     6
//	//  6     7
//	//        8
//	//  7  7
//	//  8
//	//  9  23
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n", a, b, c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d,b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("0x%x\n", 0x13 & 0x17);
//	//10011
//	//10111
//	//10011->19->0x13
//	printf("0x%x\n", 0x13 | 0x17);
//	//10011
//	//10111
//	//10111->23->0x17
//	return 0;
//}

//#include<stdio.h.>
//int main()
//{
//	const char *p = "Hello!";
//	printf("%c\n", *p);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%d\n", a += a *= a -= a / 3);
//	return 0;
//}

#include<stdio.h>
void main()
{
	int i = 0;
	while (i < 10){
		if (i < 1) continue;
		if (i == 5) break;
		i++;
	}
}