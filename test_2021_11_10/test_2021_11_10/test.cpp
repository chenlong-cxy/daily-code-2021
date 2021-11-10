#include <iostream>
using namespace std;
int add(int num1, int num2)
{
	while (num2)
	{
		int temp = num1^num2; //相加（忽略进位）
		num2 = (num1&num2) << 1; //进位
		num1 = temp;
	}
	return num1;
}
int main()
{
	cout << add(2, 10) << endl;
	return 0;
}

//两数相加（不用+、-、*、/）
class Solution {
public:
	int Add(int num1, int num2) {
		while (num2)
		{
			int temp = num1^num2;
			num2 = (num1&num2) << 1;
			num1 = temp;
		}
		return num1;
	}
};

//判断能否组成三角形
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string add(string num1, string num2)
{
	int end1 = num1.size() - 1, end2 = num2.size() - 1; //定义两个字符串的尾指针
	string RetStr; //存储两个字符串相加后的结果
	int next = 0; //标识进位
	while (end1 >= 0 || end2 >= 0) //两个字符串中有一个未遍历完，则继续循环
	{
		int val1 = 0; //第一个字符串等待相加的数字
		if (end1 >= 0)
		{
			val1 = num1[end1] - '0';
			end1--;
		}
		int val2 = 0; //第二个字符串等待相加的数字
		if (end2 >= 0)
		{
			val2 = num2[end2] - '0';
			end2--;
		}
		int RetVal = val1 + val2 + next; //两个数字相加后的结果，注意需要加上进位
		if (RetVal > 9) //判断是否需要进位
		{
			RetVal -= 10;
			next = 1; //需要进位，设置next为1
		}
		else
		{
			next = 0; //不需进位，设置next为0
		}
		RetStr += (RetVal + '0'); //将RetVal尾插到RetStr
	}
	if (next == 1) //判断是否还需进位
		RetStr += '1'; //将'1'尾插插到RetStr
	reverse(RetStr.begin(), RetStr.end()); //将字符串RetStr进行反转
	return RetStr; //返回这两个字符串相加后的结果
}
int main()
{
	string a, b, c;
	while (cin >> a >> b >> c)
	{
		string i = add(a, b);
		string j = add(a, c);
		string k = add(b, c);
		if (i.size()>c.size() || i>c)
		{
			if (j.size()>b.size() || j>b)
			{
				if (k.size()>a.size() || k>a)
					cout << "Yes" << endl;
				else
					cout << "No" << endl;
			}
			else
				cout << "No" << endl;
		}
		else
			cout << "No" << endl;
	}
	return 0;
}