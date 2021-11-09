//ÇàÍÜÌøÌ¨½×
class Solution {
public:
	int jumpFloorII(int number) {
		if (number == 0 || number == 1)
			return number;
		return pow(2, number - 1);
	}
};
/*
f(n)=f(n-1)+f(n-2)+...+f(1)+f(0)
f(n-1)=f(n-2)+f(n-3)+...+f(1)+f(0)
f(n)=2*(f(n-2)+f(n-3)...+f(1)+f(0))
f(n)=4*(f(n-3)+f(n-4)+...f(1)+f(0))
f(n)=2*(n-1)
f(n)=2*f(n-1)
*/

//Ã¨ßä½øÍë
#include <iostream>
using namespace std;
int main()
{
	double n = 0, r = 0;
	while (cin >> n >> r)
	{
		double C = 2 * 3.14*r;
		if (C < n)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}
	return 0;
}