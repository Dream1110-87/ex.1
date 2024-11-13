#include <iostream>
using namespace std;

// 遞迴方式計算階乘
long long factorialRecursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

// 非遞迴方式計算階乘
long long factorialIterative(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cout << "請輸入一個非負整數 n: ";
    cin >> n;

    if (n < 0) {
        cout << "請輸入非負整數。" << endl;
    }
    else {
        cout << "遞迴方式計算的階乘 " << n << "! = " << factorialRecursive(n) << endl;
        cout << "非遞迴方式計算的階乘 " << n << "! = " << factorialIterative(n) << endl;
    }

    return 0;
}