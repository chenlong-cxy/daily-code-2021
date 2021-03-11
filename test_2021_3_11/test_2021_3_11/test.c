//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <ctype.h>
//int calculate(char * s)
//{
//	int sz = strlen(s);
//	char Operator = '+';
//	int p[sz];
//	int i = 0;
//	int num = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (isdigit(s[i]))
//			num = 10 * num + (int)(s[i] - '0');
//		if (!isdigit(s[i])&&s[i] != ' '||i == sz-1)
//		{
//			switch (Operator)
//			{
//			case '+':
//				p[j++] = num;
//				break;
//			case '-':
//				p[j++] = -num;
//				break;
//			case '*':
//				p[j - 1] *= num;
//				break;
//			case '/':
//				p[j - 1] /= num;
//				break;
//			}
//			num = 0;
//			Operator = s[i];
//		}
//	}
//	int ret = 0;
//	for (i = 0; i < j; i++)
//		ret += p[i];
//	return ret;
//}
//int main()
//{
//	char s[] = "3+2*2";
//	int ret = calculate(s);
//	printf("%d\n", ret);
//	return 0;
//}

//int calculate(char* s) 
//{
//	int n = strlen(s);
//	int stk[n], top = 0;
//	char preSign = '+';
//	int num = 0;
//	for (int i = 0; i < n; ++i) 
//	{
//		if (isdigit(s[i]))
//			num = num * 10 + (int)(s[i] - '0');
//		if (!isdigit(s[i]) && s[i] != ' ' || i == n - 1)
//		{
//			switch (preSign)
//			{
//			case '+':
//				stk[top++] = num;
//				break;
//			case '-':
//				stk[top++] = -num;
//				break;
//			case '*':
//				stk[top - 1] *= num;
//				break;
//			default:
//				stk[top - 1] /= num;
//			}
//			preSign = s[i];
//			num = 0;
//		}
//	}
//	int ret = 0;
//	for (int i = 0; i < top; i++)
//		ret += stk[i];
//	return ret;
//}


#include <stdio.h>
#include <string.h>
char firstUniqChar(char* s)
{
	int sz = strlen(s);
	int table[26] = { 0 };
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		table[s[i] - 'a']++;
	}
	for (i = 0; i < sz; i++)
	{
		if (table[s[i] - 'a'] == 1)
			return s[i];
	}
	return ' ';
}
int main()
{
	char s[] = "abaccdeff";
	char ch = firstUniqChar(s);
	printf("%c\n", ch);
	return 0;
}