#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main()
{
	string s;
	cin >> s;
	for (int i = 1; i < s.length(); i++)
	{
		string n = s.substr(0, s.length() - i);
		if (n.substr(0, n.length() / 2) == n.substr(n.length() / 2))
		{
			cout << n.length();
			return 0;
		}
	}
}