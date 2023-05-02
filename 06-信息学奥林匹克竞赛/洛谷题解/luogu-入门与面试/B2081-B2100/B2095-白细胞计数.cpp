/*
 *@Description : B2095 白细胞计数
 *@Author : Zesheng Wang
 *@Date : 2022/7/28 13:47
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n, v, k;
    double a[1001] = {}, sum = 0.0, max_num = -10000, min_num = 9999, b[1001] = {};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
        sum += a[i];
    }
    for (int i = 0; i < n; i++) {
        if (max_num < a[i]) {
            max_num = a[i];
            k = i;
        }
        if (min_num > a[i]) {
            min_num = a[i];
            v = i;
        }
    }
    double avg = (sum - max_num - min_num) / (n - 2.0);
    for (int i = 0; i < n; i++) {
        if (i != k && i != v) {
            b[i] = abs(a[i] - avg);
        } else {
            b[i] = -1001;
        }
    }
    max_num = -1001;
    for (int i = 0; i < n; i++) {
        if (max_num < b[i]) {
            max_num = b[i];
        }
    }
    printf("%.2lf %.2lf", avg, max_num);
    return 0;
}
 */
/*
 *@Description : B2095 白细胞计数
 *@Author : Zesheng Wang
 *@Date : 2022/7/28 13:47
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n;
    double a[1001] = {}, sum = 0.0, b[1001] = {};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }
    sort(a, a + n);

    for (int i = 1; i < n-1; i++) {
        sum += a[i];
    }

    double avg = sum / (n - 2.0);
    for (int i = 1; i < n - 1; i++) {
        b[i] = fabs(a[i] - avg);
    }
    double diff = *max_element(b, b + 300);
    printf("%.2lf %.2lf", avg, diff);
    return 0;
}
 */