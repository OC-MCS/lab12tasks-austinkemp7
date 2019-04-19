#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

string stripper(string);
bool check(string);

int main()
{
	ifstream file;
	file.open("testCases.txt");
	string s;
	bool palen;
	while (getline(file, s))
	{
		string search = stripper(s);
		palen = check(search);
		if (palen)
		{
			cout << s << " is a palindrome." << endl;
		}
		else
		{
			cout << s << " is not a palindrome." << endl;
		}
	}
	return 0;
}

string stripper(string s)
{
	string strip;
	for (int i = 0; i < s.size(); i++)
	{
		if (isalpha(s[i]))
		{
			strip += s[i];
		}
	}
	return strip;
}

bool check(string input)
{
	bool palin = true;
	for (int i = 0; i < input.length(); i++)
	{
		if (toupper(input[0]) == toupper(input[input.length() - 1]))
		{
			return check(input.substr(1, input.length() - 2));
		}
		else
		{
			if ((input.length() == 1) || input.length() == 0)
			{
				palin = true;
			}
			else
			{
				palin = false;
			}
			return palin;
		}
	}
}