#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "請輸入一個正整數 n: ";
    cin >> n;

    // 使用 for 迴圈
    int sumFor = 0;
    for (int i = 2; i <= n; i += 2) {
        sumFor += i;
    }
    cout << "使用 for 迴圈的偶數和: " << sumFor << endl;

    // 使用 while 迴圈
    int sumWhile = 0;
    int i = 2;
    while (i <= n) {
        sumWhile += i;
        i += 2;
    }
    cout << "使用 while 迴圈的偶數和: " << sumWhile << endl;

    // 使用 do-while 迴圈
    int sumDoWhile = 0;
    i = 2;
    do {
        if (i > n) break;  // 檢查避免超過 n
        sumDoWhile += i;
        i += 2;
    } while (i <= n);
    cout << "使用 do-while 迴圈的偶數和: " << sumDoWhile << endl;

    return 0;
}