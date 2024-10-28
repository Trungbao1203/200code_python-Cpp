// Viết bằng C++
// Tính chi vi, diện tích hình tròn: Nhập bán kính và in ra chu vi, diện tích hình tròn.

#include <iostream>
#include <cmath> // khai báo số pi
using namespace std;

int main() {
    // Khai báo biến
    float r;

    // Nhập bán kính từ bàn phím
    cout << "Nhap ban kinh hinh tron r: ";
    cin >> r;

    // Kiểm tra điều kiện bán kính > 0
    if (r>0) {
        // Tính chu vi hình tròn
        float C = 2 * M_PI * r;
        // Tính diện tích hình tròn
        float S = M_PI * r * r;
        // In kết quả
        cout << "Chu vi hinh tron la: " << C << endl;
        cout << "Dien tich hinh tron la: " << S << endl;
    } else {
        cout << " Ban kinh phai lon hon 0." << endl;
    }

    return 0;
}