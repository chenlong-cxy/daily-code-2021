#include <iostream>
using namespace std;
int add(int num1, int num2)
{
	while (num2)
	{
		int temp = num1^num2; //��ӣ����Խ�λ��
		num2 = (num1&num2) << 1; //��λ
		num1 = temp;
	}
	return num1;
}
int main()
{
	cout << add(2, 10) << endl;
	return 0;
}

//������ӣ�����+��-��*��/��
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

//�ж��ܷ����������
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string add(string num1, string num2)
{
	int end1 = num1.size() - 1, end2 = num2.size() - 1; //���������ַ�����βָ��
	string RetStr; //�洢�����ַ�����Ӻ�Ľ��
	int next = 0; //��ʶ��λ
	while (end1 >= 0 || end2 >= 0) //�����ַ�������һ��δ�����꣬�����ѭ��
	{
		int val1 = 0; //��һ���ַ����ȴ���ӵ�����
		if (end1 >= 0)
		{
			val1 = num1[end1] - '0';
			end1--;
		}
		int val2 = 0; //�ڶ����ַ����ȴ���ӵ�����
		if (end2 >= 0)
		{
			val2 = num2[end2] - '0';
			end2--;
		}
		int RetVal = val1 + val2 + next; //����������Ӻ�Ľ����ע����Ҫ���Ͻ�λ
		if (RetVal > 9) //�ж��Ƿ���Ҫ��λ
		{
			RetVal -= 10;
			next = 1; //��Ҫ��λ������nextΪ1
		}
		else
		{
			next = 0; //�����λ������nextΪ0
		}
		RetStr += (RetVal + '0'); //��RetValβ�嵽RetStr
	}
	if (next == 1) //�ж��Ƿ����λ
		RetStr += '1'; //��'1'β��嵽RetStr
	reverse(RetStr.begin(), RetStr.end()); //���ַ���RetStr���з�ת
	return RetStr; //�����������ַ�����Ӻ�Ľ��
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