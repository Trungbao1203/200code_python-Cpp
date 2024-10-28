// Viết bằng C++
// Tính tổng các số từ 1 đến n

#include <iostream>
using namespace std;

int main() {
    // Khai báo biến
    int n, tong = 0;

    // Nhập một số từ bàn phím
    cout << "Nhap mot so n: ";
    cin >> n;

    // Tính tổng từ 1 đến n
    for (int i = 1; i <=n; i++) {
        tong += i;
    }

    // In kết quả
    cout << "Tong cac so tu 1 den " << n << " la: " << tong << endl;

    return 0;
}