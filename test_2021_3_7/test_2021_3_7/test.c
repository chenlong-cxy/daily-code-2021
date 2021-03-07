//#include <stdio.h>
//struct S1
//{
//	char a;
//	char b;
//	int i;
//};//8
////嵌套的结构体对齐到自己的最大对齐数的整数倍处
//struct S2
//{
//	int i;//4
//	struct S1 s1;//4
//	char c;//1
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S2));//16
//	return 0;
//}


//位段：在一定程度上节省空间
//struct S1
//{
//	int a : 2;//只需要2个比特位
//	int b : 10;//只需要10个比特位
//};


//#include <stdio.h>
//typedef struct{
//	int a;//4/8->4
//	char b;//1/8->1
//	short c;//2/8->2
//	short d;//2/8->2
//}AA_t;
//int main()
//{
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(AA_t));//12
//	return 0;
//}


//#include <stdio.h>
////4字节对齐
//#pragma pack(4)
//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};//16
//struct B
//{
//	int a;
//	short b;
//	char c;
//	int d;
//};//12
//#pragma pack()
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	printf("%d\n", sizeof(struct B));
//	return 0;
//}


//#include <stdio.h>
//#pragma pack(4)
//struct tagTest1
//{
//	short a;
//	char d;
//	long b;
//	long c;
//};//12
//struct tagTest2
//{
//	long b;
//	short c;
//	char d;
//	long a;
//};//12
//struct tagTest3
//{
//	short c;
//	long b;
//	char d;
//	long a;
//};//16
//int main()
//{
//	struct tagTest1 stT1;
//	struct tagTest2 stT2;
//	struct tagTest3 stT3;
//	printf("%d\n", sizeof(long));
//	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//	return 0;
//}
//#pragma pack()


//#include <stdio.h>
//#include <stdlib.h>
//int A = 3;
//int B = 2;
//#define MAX_SIZE A+B
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	unsigned char state;
//	unsigned char avail : 1;
//}*Env_Alarm_Record;
//int main()
//{
//	struct _Record_Struct *pointer = (struct _Record_Struct*)malloc
//		(sizeof(struct _Record_Struct) * MAX_SIZE);
//	printf("%d\n", sizeof(struct _Record_Struct));
//	printf("%d\n", sizeof(struct _Record_Struct) * MAX_SIZE);
//	return 0;
//}


//#include <stdio.h>
//#include <memory.h>
//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	pstPimData->ucPim1 = 2;//00000010->02
//	pstPimData->ucData0 = 3;//00000011
//	pstPimData->ucData1 = 4;//00000100
//	pstPimData->ucData2 = 5;//00000101
//	//00101001->29
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//	return 0;
//}


//#include <stdio.h>
//union Un
//{
//	short s[7];
//	int n;
//};//2*7=14->16
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	union
//	{
//		short k;
//		char i[2];
//	}*s, a;
//	s = &a;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	//3839
//	printf("%x\n", a.k);
//	return 0;
//}


#include <stdio.h>
enum ENUM_A
{
	X1,
	Y1,
	Z1 = 255,
	A1,
	B1,
};
enum ENUM_A enumA = Y1;
enum ENUM_A enumB = B1;
int main()
{
	printf("%d %d\n", enumA, enumB);//1 257
	return 0;
}