//奇数位上都是奇数或者偶数位上都是偶数
void oddInOddEvenInEven(vector<int>& arr, int len) {
	int pEven = 0, pOdd = 1;
	while (pEven < len&&pOdd < len)
	{
		while (pEven < len&&arr[pEven] % 2 == 0) //偶数位上找奇数
			pEven += 2;
		while (pOdd < len&&arr[pOdd] % 2 == 1) //奇数位上找偶数
			pOdd += 2;
		if (pEven >= len || pOdd >= len) //偶数位上没有找到奇数||奇数位上没有找到偶数
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

//猴子分桃
/*
x个桃子，老猴子最少得到y个桃子
分给1个猴子后剩下： = 4/5(x-1)
分给2个猴子后剩下： = 4/5(4/5(x-1)-1)
分给3个猴子后剩下： = 4/5(4/5(4/5(x-1)-1)-1)
...
分给n个猴子后剩下： = (4/5)^n*x-[(4/5)^1+(4/5)^2+...+(4/5)^n]
= (4/5)^n*x-4[1-(4/5)^n]
= (x+4)*(4/5)^n-4
x需为最小整数 -----> x=5^n-4
y = 分给n个猴子后剩下的桃子 + 每个猴子留下的桃子
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