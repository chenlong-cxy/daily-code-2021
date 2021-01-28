//#include <stdio.h>
//int main()
//{
//	long i;
//	long arr[16];
//	for (i = 0; i <= 18; i++)
//	{
//		arr[i] = 0;
//		printf("%d",i);
//	}
//	return 0;
//}


//int main(int argc, char* argv[])
//{
//	long i;
//	long a[16];
//
//	for (i = 0; i <= 17; i++)
//	{
//		a[i] = 0;
//		printf("%d", i);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("%d", sizeof(long));
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//void adjustment(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (*(arr + left) % 2 != 0)
//		{
//			left++;
//		}//´Ó×óµ½ÓÒÑ°ÕÒÅ¼Êı
//		while (*(arr + right) % 2 == 0)
//		{
//			right--;
//		}//´ÓÓÒµ½×óÑ°ÕÒÆæÊı
//		if (left < right)
//		{
//			int temp = *(arr + left);
//			*(arr + left) = *(arr + right);
//			*(arr + right) = temp;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	adjustment(arr, 10);
//	int n = 0;
//	for (n = 0; n < 10; n++)
//		printf("%d ",arr[n]);
//	return 0;
//}


//#include<stdio.h>
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*(arr++) != '\0')
//		count++;
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//void my_strcpy(char* dest, const char* sour)
//{
//	while (*sour != '\0')
//	{
//		*dest = *sour;
//		dest++;
//		sour++;
//	}
//	*dest = *sour;
//}
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* sour)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(sour != NULL);
//	while (*(dest++) = *(sour++))
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "#############";
//	printf("%s\n",my_strcpy(arr2, arr1));
//	return 0;
//}