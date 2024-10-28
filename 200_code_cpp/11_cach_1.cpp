// Viết bằng C++
// Tìm số nhỏ nhất trong ba số

#include <iostream>
using namespace std;

int main () {
    // Khai báo biến
    float a, b, c;

    // Nhập ba số từ bàn phím
    cout << " Nhap so thu nhat a: ";
    cin >> a;
    cout << "Nhap so thu hai b: ";
    cin >> b;
    cout << "Nhap so thu ba c: ";
    cin >> c;

    // Tìm số nhỏ nhất
    float so_nho_nhat;
    if (a <= b && a <= c) {
        so_nho_nhat = a;
    } else if ( b <= a && b <= c) {
        so_nho_nhat = b;
    } else {
        so_nho_nhat = c;
    }

    // In kết quả
    cout << "So nho nhat la: " << so_nho_nhat << endl;

    return 0;
}