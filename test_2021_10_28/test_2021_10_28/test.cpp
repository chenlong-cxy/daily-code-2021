//#include <stdio.h>
//
//int main()
//{
//	printf("hello world\n"); //¿âº¯Êı
//	return 0;
//}

//add.h
#pragma once

extern int my_add(int x, int y);

//add.c
#include "add.h"

int my_add(int x, int y)
{
	return x + y;
}

//sub.h
#pragma once

extern int my_sub(int x, int y);

//sub.c
#include "sub.h"

int my_sub(int x, int y)
{
	return x - y;
}
