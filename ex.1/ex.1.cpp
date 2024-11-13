#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "請輸入月份 (1-12): ";
    cin >> month;

    if (month >= 3 && month <= 5) {
        cout << "這是春季。" << endl;
    }
    else if (month >= 6 && month <= 8) {
        cout << "這是夏季。" << endl;
    }
    else if (month >= 9 && month <= 11) {
        cout << "這是秋季。" << endl;
    }
    else if (month == 12 || month == 1 || month == 2) {
        cout << "這是冬季。" << endl;
    }
    else {
        cout << "輸入無效，請輸入 1 到 12 之間的數字。" << endl;
    }

    return 0;
}