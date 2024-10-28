// Viết bằng C++
// Tính hiệu hai số: Nhập hai số và in ra hiệu của chúng.

#include <iostream>
using namespace std;

int main() {
    // Khai báo hai biến
    float a, b;

    // Nhập hai số từ bàn phím
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;

    // Tính hiệu hai số
    float H = a - b;

    // In kết quả
    cout << "Hieu qua cua hai so la: " << H << endl;

    return 0;

}