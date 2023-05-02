/*
 *@Description : B2085 第 n 小的质数
 *@Author : Zesheng Wang
 *@Date : 2022/6/24 13:05
 *@Version : 1.0
*/
/*
#include<iostream>

using namespace std;
const int MAX = 10000001;
int a[MAX];
int b[MAX];

int main() {
    int n;
    cin >> n;

    for (int i = 2; i * i < MAX; i++) {
        if (a[i] == 0) {
            for (int j = i * i; j < MAX; j += i) {
                a[j] = 1;
            }
        }
    }
    int k = 1;
    for (int i = 2; i <= MAX; i++) {
        if (a[i] == 0) {
            b[k] = i;
            k++;
        }
    }
    cout << b[n];
    return 0;
}
 */
