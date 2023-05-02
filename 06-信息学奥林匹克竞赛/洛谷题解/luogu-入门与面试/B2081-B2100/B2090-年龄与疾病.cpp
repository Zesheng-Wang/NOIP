/*
 *@Description : B2090 年龄与疾病
 *@Author : Zesheng Wang
 *@Date : 2022/6/25 16:37
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, a[101];
    int count_fir = 0, count_s = 0, count_t = 0, count_f = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0 && a[i] <= 18) {
            count_fir++;
        } else if (a[i] >= 19 && a[i] <= 35) {
            count_s++;
        } else if (a[i] >= 6 && a[i] <= 60) {
            count_t++;
        } else if (a[i] >= 61) {
            count_f++;
        }
    }
    printf("%.2lf%\n", count_fir * 1.0*100 / n);
    printf("%.2lf%\n", count_s * 1.0 *100/ n);
    printf("%.2lf%\n", count_t * 1.0 *100/ n);
    printf("%.2lf%\n", count_f * 1.0 *100/ n);
    return 0;
}
 */