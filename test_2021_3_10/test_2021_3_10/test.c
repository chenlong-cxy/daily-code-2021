//strncpy
//char *strncpy( char *strDest, const char *strSource, size_t count );
//#include <stdio.h>
//char* My_strncpy(char* dest, const char* src, size_t count)
//{
//	char* ret = dest;
//	while (count && (*dest++ = *src++))
//	{
//		count--;
//	}
//	if (count)
//	{
//		while (--count)
//			*dest++ = '\0';
//		//strncpy函数将源字符串中的字符拷贝到目标空间后不够的将用'\0'填充
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "abcdef";
//	My_strncpy(arr1, arr2, 1);
//	printf("%s\n", arr1);
//	return 0;
//}


//strncat
//char *strncat( char *strDest, const char *strSource, size_t count );
//#include <stdio.h>
//char* My_strncat(char* dest, const char* src, size_t count)
//{
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (count--)
//	{
//		if (!(*dest++ = *src++))
//			return ret;
//	}
//	*dest = '\0';
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "abcd";
//	char arr2[] = "efgh";
//	My_strncat(arr1, arr2, 2);
//	printf("%s\n", arr1);
//	return 0;
//}


#include <stdio.h>
void Bubble_sort(int* arr, int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void Find(int* arr, int sz, int* sig)
{
	Bubble_sort(arr, sz);
	int i = 0;
	int j = 0;
	while (i < sz)
	{
		if (arr[i] == arr[i + 1])
		{
			i += 2;
		}
		else
		{
			sig[j] = arr[i];
			j++;
			i++;
		}
	}
}
int main()
{
	int arr[] = { 3, 6, 8, 4, 3, 5, 8, 6, 4, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int sig[2] = { 0 };
	Find(arr, sz, sig);
	printf("%d %d\n", sig[0], sig[1]);
	return 0;
}