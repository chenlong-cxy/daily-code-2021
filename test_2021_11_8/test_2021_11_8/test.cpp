
//ĞÇ¼ÊÃÜÂë
#include <iostream>
#include <vector>
using namespace std;
int fibonacci(int n)
{
	if (n == 1 || n == 2)
		return n;
	int first = 1;
	int second = 2;
	int third = 3;
	while (n - 3)
	{
		first = second % 10000;
		second = third % 10000;
		third = (first + second) % 10000;
		n--;
	}
	return third;
}
int main()
{
	int n = 0;
	while (cin >> n)
	{
		vector<int> v;
		int num = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> num;
			v.push_back(num);
		}
		for (auto e : v)
		{
			int ret = fibonacci(e);
			printf("%04d", ret);
		}
		cout << endl;
	}
	return 0;
}

/*n=1
|1 1|
|1 0|
n=2
|2 1|
|1 1|
n=3
|2 1|*|1 1|=|3 2|
|1 1| |1 0| |2 1|
n=4
|3 2|*|1 1|=|5 3|
|2 1| |1 0| |3 2|
n=5
|5 3|*|1 1|=|8 5|
|3 2| |1 0| |5 3|
*/



//Êı¸ù
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	while (cin >> s)
	{
		int num = 0;
		for (auto e : s)
		{
			num += e - '0';
		}
		int ret = 0;
		while (num || ret > 9)
		{
			if (num == 0)
			{
				num = ret;
				ret = 0;
			}
			ret += num % 10;
			num /= 10;
		}

		cout << ret << endl;

	}
	return 0;
}