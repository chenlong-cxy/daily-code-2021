#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111(����)
//	//11111111111111111111111111111110(����)
//	//10000000000000000000000000000001(ԭ��)
//	printf("%d\n", ~a);//-1
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 13;
//	//00000000000000000000000000001101
//	//00000000000000000000000000000010
//	//00000000000000000000000000001111
//	//a|(1<<1)
//	//00000000000000000000000000001111
//	//11111111111111111111111111111101
//	//00000000000000000000000000000010
//	//a&(~(1<<1))
//	while (~scanf("%d", &a))
//		printf("%d\n", a);
//	return 0;
//}

//#include<stdio.h>
////void test1(int* arr)
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//4
//}
////void test2(char* ch)
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//4
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++&&++b&&d++;
//	printf("a=%d,b=%d,c=%d,d=%d,i=%d\n", a, b, c, d, i);//1��2��3��4��0
//	return 0;
//}//�߼������Ϊ�٣��ұ߾Ͳ��ټ��㣨��·��

//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++||++b||d++;
//	printf("a=%d,b=%d,c=%d,d=%d,i=%d\n", a, b, c, d, i);//2��2��3��4��1
//	return 0;
//}//�߼������Ϊ�棬�ұ߾Ͳ��ټ��㣨��·��

//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	a > b ? (a++) : (b++);
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//	return 0;
//}

//#include<stdio.h>
//void test(int n)
//{
//	while (n)
//	{
//		printf("hehe\n");
//		n--;
//	}
//}
//int main()
//{
//	test(3);//()�������ò�������������-test,3
//	return 0;
//}

//#include<stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//};
//int main()
//{
//	struct Stu s = { "zhangsan", 20, "nan" };
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%s\n", s.sex);
//	struct Stu* pc = &s;
//	printf("%s\n", (*pc).name);
//	printf("%s\n", pc->name);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}//��������

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);//��������ͬ�������ͬ
//	printf("ret = %d\n", ret);
//	return 0;
//}//ֻ�в����������ȼ��ͽ���ԣ�û��ȷ��Ψһ����·��

//#include <stdio.h>
//int i;
//int main()
//{
//	i--;
//	printf("%u\n", (unsigned int)i);
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}//>

//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = m^n;
//	int count = 0;
//	while (ret)
//	{
//		if (ret % 2 == 1)
//			count++;
//		ret = ret / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include<stdio.h>
//void Print(int n)
//{
//	int odd[16] = { 0 };
//	int even[16] = { 0 };
//	int i = 0;
//	int j = 0;
//	while (n)
//	{
//		odd[i++] = n % 2;
//		n = n >> 1;
//		even[j++] = n % 2;
//		n = n >> 1;
//	}
//	for (i = 15; i >= 0; i--)
//		printf("%d", odd[i]);
//	printf("\n");
//	for (j = 15; j >= 0; j--)
//		printf("%d", even[j]);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}

//#include<stdio.h>
//int NomberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n = n >> 1;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = NomberOf1(n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//int NomberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n&(n - 1);
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = NomberOf1(n);
//	printf("%d\n", ret);
//	return 0;
//}