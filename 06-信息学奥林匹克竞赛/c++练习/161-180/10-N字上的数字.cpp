#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, sum = 0, a[107][107];
	cin >> n;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}	
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (j==0 || j == n-1 || j==i)
				sum += a[i][j];
		}
	}
	cout << sum;	
    return 0;
}
