//#include <stdio.h>
//#include <stdlib.h>
//struct S1
//{
//	int i;
//	int arr[];//未知大小成员->柔性数组成员
//};
//struct S2
//{
//	int i;
//	int arr[0];//未知大小成员->柔性数组成员
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	struct S1* ps = (struct S1*)malloc(sizeof(struct S1) + 5 * sizeof(int));
//	printf("%d\n", sizeof(struct S1));
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//struct S
//{
//	int a;
//	int arr[];
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	int i = 0;
//	ps->a = 100;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = (struct S*)realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	//开辟空间
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = (int*)malloc(5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//调整大小
//	int* ptr = (int*)realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放空间
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//struct S
//{
//	int n;
//	int arr[];
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	struct S s;
//	printf("%d\n", sizeof(s));//4
//	return 0;
//}