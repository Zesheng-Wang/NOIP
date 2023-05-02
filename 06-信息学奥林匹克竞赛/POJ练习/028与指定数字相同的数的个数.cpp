#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, a[101], m, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    for (int i = 0; i < n; i++) {
        if(a[i]==m){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}