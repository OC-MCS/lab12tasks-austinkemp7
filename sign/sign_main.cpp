#include <iostream>
using namespace std;

void sign(int n)
{
	while (n > 0)
	{
		cout << "No Parking: " << n << endl;
		n--;
	}
} 

int main()
{
	sign(4);
	return 0;
}


