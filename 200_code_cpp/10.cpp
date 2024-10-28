// Viết bằng C++
// Tìm số lớn nhất trong ba số

#include <iostream>
using namespace std;

int main() {
    // Khai báo biến
    float a, b, c;

    // Nhập ba số từ bàn phím
    cout << "Nhap so thu nhat a: ";
    cin >> a;
    cout << "Nhap so thu hai b: ";
    cin >> b;
    cout << "Nhap so thu ba c: ";
    cin >> c;

    // Tìm số lớn nhất
    float so_lon_nhat;

    if (a >= b && a >= c) {
        so_lon_nhat = a;
    } else if (b >= a && b >= c)
    {
        so_lon_nhat = b;
    } else {
        so_lon_nhat = c;
    }
    
    // In kết quả
    cout << "So lon nhat la: " << so_lon_nhat << endl;

    return 0;
}