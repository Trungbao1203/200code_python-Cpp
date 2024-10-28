// Viết bằng C++
// Tính tổng hai số: Nhập hai số và in ra tổng của chúng.

#include <iostream>
using namespace std;

int main() {
    // Khai báo hai biến
    float a, b;

    // Nhập hai số từ bàn phím
    cout << "Nhập a: ";
    cin >> a;
    cout << "Nhập b: ";
    cin >> b;

    // Tính tổng hai số
    float S = a + b;

    // In kết quả 
    cout <<"Tổng của hai số là: " << S << endl;

    return 0;
}