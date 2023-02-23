#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    if(n%2==0){
        printf("even");
        return 0;
    }
    printf("odd");
    return 0;
}