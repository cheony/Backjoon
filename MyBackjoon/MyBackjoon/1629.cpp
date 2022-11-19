#include <iostream>

using namespace std;

long long divide_conq(int a, int b, int c);

int main()
{
	int a, b, c;
	int i;
	int result = 1;

	cin >> a >> b >> c;

	result = divide_conq(a, b, c);
	
	int d = result % c;

	printf("%d", d);
	return 0;
}

long long divide_conq(int a, int b, int c)
{
//	if (b == 1)
//		return a;

	if (b == 0)
		return 1;

	long long result = divide_conq(a, b / 2, c);
	result = result * result % c; // The result can be over integer range, the type of result should be long long..
	if (b % 2)
		result = result * a % c;

	return result;
}