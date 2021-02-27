#include<stdio.h>
#include<string.h>
int tmp(char* s, int left, int right, int k)
{
	int num[26];
	memset(num, 0, sizeof(num));
	int i = left;
	for (i = left; i <= right; i++)
	{
		num[s[i] - 'a']++;
	}//num[0]����ַ���s��'a'�ĸ�����num[1]���'b'�ĸ������Դ�����
	char ch = 0;
	for (i = 0; i < 26; i++)
	{
		if ((num[i] > 0) && (num[i] < k))
		{
			ch = i + 'a';
			break;
		}
	}
	if (ch == 0)//�ַ���s�е���ĸ���ִ��������ڵ���k
		return right -left + 1;
	int j = left;
	int ret = 0;
	while (j <= right)
	{
		while (j <= right&&s[j] == ch)
			j++;
		if (j > right)
			break;
		int start = j;
		while (j <= right&&s[j] != ch)
			j++;
		int length = tmp(s, start, j - 1, k);//��s[start]��s[i-1]���ַ�����
		ret = ret > length ? ret : length;
	}
	return ret;
}

int longestSubstring(char* s, int k)
{
	return tmp(s, 0, strlen(s) - 1, k);
}
int main()
{
	char arr[] = "aaabb";
	int ret = longestSubstring(arr, 3);
	printf("%d\n", ret);
	return 0;
}

//int fmax1(int x, int y)
//{
//	return x > y ? x : y;
//}
//int dfs(char* s, int l, int r, int k) 
//{
//	int cnt[26];
//	memset(cnt, 0, sizeof(cnt));
//	for (int i = l; i <= r; i++)
//	{
//		cnt[s[i] - 'a']++;
//	}
//	char split = 0;
//	for (int i = 0; i < 26; i++) 
//	{
//		if (cnt[i] > 0 && cnt[i] < k) 
//		{
//			split = i + 'a';
//			break;
//		}
//	}
//	if (split == 0) 
//	{
//		return r - l + 1;
//	}
//	int i = l;
//	int ret = 0;
//	while (i <= r) 
//	{
//		while (i <= r && s[i] == split)
//		{
//			i++;
//		}
//		if (i > r) 
//		{
//			break;
//		}
//		int start = i;
//		while (i <= r && s[i] != split)
//		{
//			i++;
//		}
//		int length = dfs(s, start, i - 1, k);
//		ret = fmax1(ret, length);
//	}
//	return ret;
//}
//
//int longestSubstring(char* s, int k) 
//{
//	return dfs(s, 0, strlen(s) - 1, k);
//}
//int main()
//{
//	char arr[] = "ababbc";
//	int ret = longestSubstring(arr, 2);
//	printf("%d\n", ret);
//	return 0;
//}