#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int g = 0, s = 0, b = 0;
    int a[n][3];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        g += a[i][0];
        s += a[i][1];
        b += a[i][2];
    }
    printf("%d %d %d %d", g, s, b, g + s + b);
    return 0;
}