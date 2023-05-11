#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	string s;
	string ans = "     ";
	cin >> s;
	for (int i=0; i<=4; i++){
		ans[i] = char(s[i]) + char(s[i+1]);
		if (i == 4)
			ans[i] = char(s[i]) + char(s[0]);
	}
	cout << ans;
	return 0;
}


