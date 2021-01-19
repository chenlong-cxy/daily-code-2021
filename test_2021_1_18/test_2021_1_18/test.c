#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int i, j, arr[10][10] = { 0 };
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


int jumpFloor(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return jumpFloor(n - 1) + jumpFloor(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret=jumpFloor(n);
	printf("%d\n", ret);
	return 0;
}