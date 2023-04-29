#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main(){
	string s;
	int n;
	bool in = false;
	cin >> n >> s;
	for(int i = 0; i < n; i++){
		if(s[i] == '|'){
			in = !in;
		}
		if(s[i] == '*' && in){
			cout << "in";
			return 0;
		}
	}
	cout << "out";
	return 0;
}