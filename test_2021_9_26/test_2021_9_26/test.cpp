//#include <iostream>
//#include <stack>
//using namespace std;
//int main()
//{
//	stack<char> S;
//	char x, y;
//	x = 'n'; y = 'g';
//	S.push(x); S.push('i'); S.push(y);
//	S.pop(); S.push('r'); S.push('t'); S.push(x);
//	S.pop(); S.push('s');
//	while (!S.empty())
//	{
//		x = S.top();
//		S.pop();
//		cout << x;
//	};
//	cout << y;
//	return 0;
//} //string


//#include <iostream>
//#include <queue>
//using namespace std;
//int main()
//{
//	queue<char> Q;
//	char x, y;
//	x = 'n'; y = 'g';
//	Q.push(x); Q.push('i'); Q.push(y);
//	Q.pop(); Q.push('r'); Q.push('t'); Q.push(x);
//	Q.pop(); Q.push('s');
//	while (!Q.empty())
//	{
//		x = Q.front();
//		Q.pop();
//		cout << x;
//	};
//	cout << y;
//	return 0;
//} //grtnsg


//#include <iostream>
//#include <queue>
//#include <string>
//#include <vector>
//#include <functional>
//using namespace std;
//int main()
//{
//	priority_queue<int> a;
//	priority_queue<int, vector<int>, greater<int> > c;
//	priority_queue<string> b;
//	for (int i = 0; i < 5; i++)
//	{
//		a.push(i);
//		c.push(i);
//	}
//	while (!a.empty())
//	{
//		cout << a.top() << ' ';
//		a.pop();
//	}
//	cout << endl;
//	while (!c.empty())
//	{
//		cout << c.top() << ' ';
//		c.pop();
//	}
//	cout << endl;
//	b.push("abc");
//	b.push("abcd");
//	b.push("cbd");
//	while (!b.empty())
//	{
//		cout << b.top() << ' ';
//		b.pop();
//	}
//	cout << endl;
//	return 0;
//}
//4 3 2 1 0
//0 1 2 3 4
//cbd abcd abc


//#include <iostream>
//using namespace std;
//template<typename Type>
//Type Max(const Type &a, const Type &b)
//{
//	cout << "This is Max<Type>" << endl;
//	return a > b ? a : b;
//}
//template<>
//int Max<int>(const int &a, const int &b)
//{
//	cout << "This is Max<int>" << endl;
//	return a > b ? a : b;
//}
//template<>
//char Max<char>(const char &a, const char &b)
//{
//	cout << "This is Max<char>" << endl;
//	return a > b ? a : b;
//}
//int Max(const int &a, const int &b)
//{
//	cout << "This is Max" << endl;
//	return a > b ? a : b;
//}
//int main()
//{
//	Max(10, 20);
//	Max(12.34, 23.45);
//	Max('A', 'B');
//	Max<int>(20, 30);
//	return 0;
//}
//This is Max
//This is Max<Type>
//This is Max<char>
//This is Max<int>


//#include <iostream>
//using namespace std;
//template<class T1, class T2>
//class Data
//{
//public:
//	Data() { cout << "Data<T1, T2>" << endl; }
//private:
//	T1 _d1;
//	T2 _d2;
//};
//template <class T1>
//class Data<T1, int>
//{
//public:
//	Data() { cout << "Data<T1, int>" << endl; }
//private:
//	T1 _d1;
//	int _d2;
//};
//template <typename T1, typename T2>
//class Data <T1*, T2*>
//{
//public:
//	Data() { cout << "Data<T1*, T2*>" << endl; }
//private:
//	T1 _d1;
//	T2 _d2;
//};
//template <typename T1, typename T2>
//class Data <T1&, T2&>
//{
//public:
//	Data(const T1& d1, const T2& d2)
//		: _d1(d1)
//		, _d2(d2)
//	{
//		cout << "Data<T1&, T2&>" << endl;
//	}
//private:
//	const T1 & _d1;
//	const T2 & _d2;
//};
//int main()
//{
//	Data<double, int> d1; // 调用特化的int版本
//	Data<int, double> d2; // 调用基础的模板
//	Data<int *, int*> d3; // 调用特化的指针版本
//	Data<int&, int&> d4(1, 2);
//	return 0;
//}
//Data<T1, int>
//Data<T1, T2>
//Data<T1*, T2*>
//Data<T1&, T2&>


