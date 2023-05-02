#include <iostream>
#include <cstdio>
using namespace std;

int main()
{	
	int n, cost = 0;
	cin >> n;
	if (n <= 5){
		cost = 300 * n;
	} 
	else{
		cost = 280 * n;
	}
	cout << cost;
	return 0;
}


