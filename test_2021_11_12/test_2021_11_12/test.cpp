//����λ�϶�����������ż��λ�϶���ż��
void oddInOddEvenInEven(vector<int>& arr, int len) {
	int pEven = 0, pOdd = 1;
	while (pEven < len&&pOdd < len)
	{
		while (pEven < len&&arr[pEven] % 2 == 0) //ż��λ��������
			pEven += 2;
		while (pOdd < len&&arr[pOdd] % 2 == 1) //����λ����ż��
			pOdd += 2;
		if (pEven >= len || pOdd >= len) //ż��λ��û���ҵ�����||����λ��û���ҵ�ż��
			break;
		swap(arr[pEven], arr[pOdd]);
		pEven += 2;
		pOdd += 2;
	}
}

void oddInOddEvenInEven(vector<int>& arr, int len) {
	size_t i = 0, j = 1;
	while (i<len && j<len)
	{
		if (arr[len - 1] % 2 == 0)
		{
			swap(arr[len - 1], arr[i]);
			i += 2;
		}
		else
		{
			swap(arr[len - 1], arr[j]);
			j += 2;
		}
	}
}

//���ӷ���
/*
x�����ӣ��Ϻ������ٵõ�y������
�ָ�1�����Ӻ�ʣ�£� = 4/5(x-1)
�ָ�2�����Ӻ�ʣ�£� = 4/5(4/5(x-1)-1)
�ָ�3�����Ӻ�ʣ�£� = 4/5(4/5(4/5(x-1)-1)-1)
...
�ָ�n�����Ӻ�ʣ�£� = (4/5)^n*x-[(4/5)^1+(4/5)^2+...+(4/5)^n]
= (4/5)^n*x-4[1-(4/5)^n]
= (x+4)*(4/5)^n-4
x��Ϊ��С���� -----> x=5^n-4
y = �ָ�n�����Ӻ�ʣ�µ����� + ÿ���������µ�����
= (x+4)*(4/5)^n-4 + n
= 4^n-4+n
*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n = 0;
	while (1)
	{
		cin >> n;
		if (n == 0)
			return 0;
		long x = pow(5, n) - 4;
		long y = pow(4, n) - 4 + n;
		cout << x << " " << y << endl;
	}
	return 0;
}