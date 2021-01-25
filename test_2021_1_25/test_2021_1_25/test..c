//#include<stdio.h>
//int main()
//{
//	//int a = 5;
//	//int b = a << 1;
//	//正整数的原码、反码、补码相同
//	//负整数的原码、反码、补码需计算
//	//内存中存储的是补码
//	//<<、>>移动的是补码
//	int a = -1;
//	int b = a >> 1;
//	//<<:
//	//10000000000000000000000000000001-原码
//	//11111111111111111111111111111110-反码
//	//11111111111111111111111111111111-补码(在内存中存储形式是补码)
//	//左边丢弃，右边补0
//	//>>:
//	//算术运算
//	//右边丢弃，左边补与符号位相同的数字//b=-1
//	//逻辑运算
//	//右边丢弃，左边补0
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
//	//11111111111111111111111111111111-b(补码)
//	//11111111111111111111111111111010-c(补码)
//	//11111111111111111111111111111001-c(反码)
//	//10000000000000000000000000000110-c(原码)
//	printf("%d\n", c);//-6
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 3;
//	printf("a=%d,b=%d\n", a, b);
//	a = a^b;//异或的密码
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
//	printf("%d\n", sizeof(int[10]));//数组类型：int[10]
//	printf("%d\n", sizeof(int));//数组元素类型：int
//	//sizeof括号中放的表达式是不计算的
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