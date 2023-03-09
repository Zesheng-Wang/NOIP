#include <iostream>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;

clock_t start, stop;
double duration;
const int MAXK = 1e7;
const int MAXN = 10;
double f(int n, double a[], double x);
double f1(int n, double a[], double x);

double f(int n, double a[], double x)
{
    int i;
    double p = a[0];
    for (i = 1; i <= n; i++)
    {
        p += (a[i] * pow(x, i));
    }
    return p;
}
double f1(int n, double a[], double x)
{
    int i;
    double p = a[n];
    for (i = n; i > 0; i--)
    {
        p = a[i - 1] + x * p;
    }
    return p;
}
int main()
{
    int i;
    double a[MAXN];
    for (int i = 0; i < MAXN; i++)
        a[i] = (double)i;
    start = clock();
    for (int i = 0; i < MAXK; i++)
    {
        f1(MAXN - 1, a, 1.1);
    }
    stop = clock();
    duration = (double)(stop - start) / CLK_TCK / MAXK;
    printf("%6.2e\n", duration);

    start = clock();
    for (int i = 0; i < MAXK; i++)
    {
        f(MAXN - 1, a, 1.1);
    }
    stop = clock();
    duration = (double)(stop - start) / CLK_TCK / MAXK;
    printf("%6.2e", duration);
    return 0;
}