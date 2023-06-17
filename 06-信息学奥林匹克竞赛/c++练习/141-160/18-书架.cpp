#include<bits/stdc++.h>
using namespace std;


bool cmp(int a, int b){
	return a > b;
}
int main(){
	int n, b, sum = 0, count = 0, a[20007];
	cin >> n >> b; 
	for(int i=0; i<n; i++){
		cin >> a[i];
	}	
	sort(a, a+n, cmp);
	for (int i=0; i<n; i++){
		sum += a[i];
		count++;
		if (sum >= b){
			cout << count;
			break;
		}
			
	}
    return 0;
}
