//#include <stdio.h>
//
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("c = %d\n", c);
//	return 0;
//}


#include <stdio.h>
#include <math.h>
int main()
{
	double x = 0.0;
	double y = 0.0;
	double a = 2.0 / 3.0;
	for (y = 1.0; y >= -1.0; y -= 0.05)
	{
		for (x = -1.0; x <= 1.0; x += 0.025)
		{
			if (pow(x, a) + pow(y, a) < 1.0)
			{
				putchar('#');
			}
		}
		putchar('\n');
	}
	return 0;
}


//#include <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}