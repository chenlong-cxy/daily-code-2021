//#include <iostream>
//#include <functional>
//#include <queue>
//#include <vector>
//using namespace std;
//int main()
//{
//	int n = 0;
//	cin >> n;
//	priority_queue<int, vector<int>, less<int>> q;
//	for (int i = 0; i < 3 * n; i++)
//	{
//		int num = 0;
//		cin >> num;
//		q.push(num);
//	}
//	int ret = 0;
//	for (int i = 0; i < n; i++)
//	{
//		q.pop();
//		ret += q.top();
//		q.pop();
//	}
//	cout << ret << endl;
//	return 0;
//}

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int num = 0;
		cin >> num;
		if (i == 0 || num != v[v.size() - 1])
			v.push_back(num);
	}
	for (int i = 0; i < v.size() - 1; i++)
	{
		v[i] = v[i] - v[i + 1];
	}
	int count = 0;
	for (int i = 1; i < v.size() - 1; i++)
	{
		if (v[i] > 0 && v[i - 1] < 0)
			count++;
		else if (v[i] < 0 && v[i - 1] > 0)
			count++;
	}
	cout << count + 1 << endl;
	return 0;
}