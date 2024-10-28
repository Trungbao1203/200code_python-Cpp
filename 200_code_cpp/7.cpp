// Viết bằng C++
// Tính diện tích hình chữ nhật: Nhập chiều dài và chiều rộng và in ra chu vi, diện tích hình chữ nhật.

#include <iostream>
using namespace std;

int main () {
    // Khai báo biến
    float a, b;

    // Nhập chiều dài, chiều rộng từ bàn phím
    cout << "Nhap chieu dai a: ";
    cin >> a;
    cout << "Nhap chieu rong b: ";
    cin >> b;

    // Kiem tra điều kiện chiều dài và chiều rộng phải lớn hơn 0
    if (a>0 && b>0 ) {
        // Tinh chu vi hình chữ nhật
        float C = a + b;
        // Tinh dien tich hình chữ nhật
        float S = a*b;
        // In kết quả
        cout << " Chu vi cua hinh chu nhat la: " << C << endl;
        cout << " Dien tich cua hinh chu nhat la: " << S << endl;
    } else {
        cout << "Chieu dai và chieu rong phai lon hon 0." << endl;
    }

    return 0;
}