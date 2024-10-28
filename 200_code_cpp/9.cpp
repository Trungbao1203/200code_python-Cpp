// Viết bằng C++
// Tính diện tích hình tam giác

#include <iostream>
using namespace std;

int main() {
    // Khai báo biến
    float h, d;

    // Nhập chiều cao và đáy từ bàn phím
    cout << "Nhap chieu cao h cua hinh tam giac: ";
    cin >> h;
    cout << "Nhap do dai d cua hinh tam giac: ";
    cin >> d;
    
    // Kiểm tra điều kiện chiều cao và đáy > 0
    if ( h  > 0 && d > 0) {
        // Tính diện tích hình tam giác
        float S = 0.5 * d * h;
        // In kết quả
        cout << "Dien tich hinh tam giac: " << S << endl;
    } else {
        cout << " Chieu cao và day lon hon 0." << endl;
    }

    return 0;
}
