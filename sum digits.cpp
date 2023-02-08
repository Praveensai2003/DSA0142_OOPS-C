
#include <bits/stdc++.h>
using namespace std;
class gfg {
public:
	int getSum(int n)
	{
		int sum = 0;
		while (n != 0) {
			sum = sum + n % 10;
			n = n / 10;
		}
		return sum;
	}
};

// Driver code
int main()
{
	gfg g;
	int n = 98765432;

	// Function call
	cout << g.getSum(n);
	return 0;
}
