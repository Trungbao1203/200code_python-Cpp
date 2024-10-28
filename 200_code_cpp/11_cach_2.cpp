// Viết bằng C++
// Tìm số nhỏ nhất trong ba số (Cách 2)

#include <iostream>
using namespace std;

int main() {
    // Khai báo biến
    float list[3];

    // Nhập ba số từ bàn phím
    for (int i = 0; i < 3 ; i++) {
        cout << "Nhap so thu " << i + 1 << ": ";
        cin >> list[i];
    }

    // Tìm số nhỏ nhất 
    float so_nho_nhat = list[0];
    for (int i = 1; i < 3; i ++) {
        if ( list[i] < so_nho_nhat) {
            so_nho_nhat = list[i];
        }
    }

    // In kết quả
    cout << "So nho nhat la: " << so_nho_nhat << endl;

    return 0;
}