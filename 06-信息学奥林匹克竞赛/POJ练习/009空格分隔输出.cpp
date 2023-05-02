#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    char ch;
    int n;
    float f1;
    double double_f1;
    scanf("%c %d %f %lf", &ch, &n, &f1, &double_f1);
    printf("%c %d %f %.6lf", ch, n, f1, double_f1);
    return 0;
}