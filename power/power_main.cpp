#include <iostream>
using namespace std;


int main()
{
	cout << pow(2.0, 5.0);

	return 0;
}

double pow(double base, double exp)
{
	if (exp == 0)
	{
		return 1.0;
	}
	else
	{
		return base * pow(base, exp - 1);
	}
}