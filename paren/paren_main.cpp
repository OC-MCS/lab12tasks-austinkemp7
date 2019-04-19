#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

bool isBalanced(string s)
{
	// replace the body of this function
	vector <char> stack;
	bool balanced = true;
	/*for (int i = 0; i < s.size(); i++)
	{
		stack.push_back(s[i]);
	}*/
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
		{
			stack.push_back(s[i]);
		}
		else if(s[i] == ')')
		{
			if (stack.size() != 0)
				stack.pop_back();
			else
				balanced = false;
		}
	}
	if (stack.size() > 0)
	{
		balanced = false;;
	}
	return balanced;
}

int main()
{
	ifstream file;
	file.open("balancedTestCases.txt");
	string s;
	while (getline(file, s))
	{
		if (isBalanced(s))
			cout << s << " is balanced." << endl;
		else
			cout << s << " is not balanced. " << endl;
	}

}