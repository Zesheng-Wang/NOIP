#include <iostream>
using namespace std;
int main()
{
    int M, N, X;
    cin >> M >> N >> X;
    while (X > 0)
    {
        if (M % N == 0)
            X = X - M / N;
        else
            X = X - M / N - 1;
        if (X < 0)
            break;
        N += M / N;
    }
    cout << N;
    return 0;
}