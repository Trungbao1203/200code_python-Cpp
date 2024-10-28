// Viết bằng C++
// Kiểm tra một số nhập từ bàn phím là số chẵn hay số lẻ.

#include <iostream>
using namespace std;

int main() {
    // Khbao báo biến
    int a;

    // Nhập số từ bàn phím
    cout << "Nhap so: ";
    cin >> a;

    // Kiểm tra chẵn lẻ
    if (a % 2 == 0) {
        cout << "So " << a << " la so chan." << endl;
    } else {
        cout << "So " << a << " la so le." << endl;
    }

    return 0;
}