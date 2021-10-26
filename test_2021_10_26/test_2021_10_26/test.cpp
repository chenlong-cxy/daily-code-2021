//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	void f(){ cout << "A::f()" << endl; }
//	int a;
//};
//class B : public A
//{
//public:
//	void f(int a){ cout << "B::f()" << endl; }
//	int a;
//};
//int main()
//{
//	B b;
//	b.f();
//	return 0;
//}


//#include <iostream>
//using namespace std;
//class Base1{ public: int _b1; };
//class Base2 { public: int _b2; };
//class Derive : public Base1, public Base2
//{
//public: int _d;
//};
//int main(){
//	Derive d;
//	Base1* p1 = &d;
//	Base2* p2 = &d;
//	Derive* p3 = &d;
//	cout << "p1:" << p1 << endl;
//	cout << "p2:" << p2 << endl;
//	cout << "p3:" << p3 << endl;
//	return 0;
//}


#include <iostream>
using namespace std;
class A
{
public:
	A() { cout << "A::A()" << endl; }
	~A() { cout << "A::~A()" << endl; }
	int a;
};
class B : public A
{
public:
	B() { cout << "B::B()" << endl; }
	~B() { cout << "B::~B()" << endl; }
	int b;
};
void f()
{
	B b;
}
int main()
{
	f();
	return 0;
}