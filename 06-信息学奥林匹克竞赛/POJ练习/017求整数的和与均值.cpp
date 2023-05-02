#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int count = 0, n = 0, sum = 0;
    scanf("%d", &count);
    for (int i = 0; i < count; i++) {
        scanf("%d", &n);
        sum += n;
    }
    printf("%d %.5lf", sum, sum * 1.0 / count);
    return 0;
}