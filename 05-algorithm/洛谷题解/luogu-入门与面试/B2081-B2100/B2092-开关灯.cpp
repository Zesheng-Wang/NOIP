/*
 *@Description : B2092 开关灯
 *@Author : Zesheng Wang
 *@Date : 2022/6/25 18:46
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    bool l[5001];
    scanf("%d", &n);
    for (int i = 1; i <= 5000; i++) {
        l[i] = true;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            if (j % i == 0) {
                l[j] = !l[j];
            }
        }
    }
    for (int i = 1; i <= 5000; i++) {
        if(l[i] != true){
            cout << i << " ";
        }
    }
    return 0;
}
*/