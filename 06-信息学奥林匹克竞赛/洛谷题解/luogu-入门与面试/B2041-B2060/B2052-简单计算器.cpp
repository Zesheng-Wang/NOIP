/*
 *@Description : B2052 简单计算器
 *@Author : Zesheng Wang
 *@Date : 2022/6/9 13:42
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, b, result = 0;
    char op;
    scanf("%d %d %c", &a, &b, &op);
    if ((b == 0) && (op == '/')) {
        printf("Divided by zero!");
        return 0;
    } else if (op == '+' || op == '-' || op == '*' || op == '/') {
        switch (op) {
            case '+':
                result = a + b;
                break;
            case '-':
                result = a - b;
                break;
            case '*':
                result = a * b;
                break;
            case '/':
                result = a / b;
                break;
        }
        printf("%d", result);
    } else if (op != '+' && op != '-' && op != '*' && op != '/') {
        printf("Invalid operator!");
    }
    return 0;
}
 */