// Viết bằng C++
// Tính bình phương của một số: Nhập một số từ bàn phím và in ra bình phương của chúng.

#include <iostream>
using namespace std;

int main() {
    // Khai báo biến
    float a;

    // Nhập một số từ bàn phím
    cout << "Nhap a: ";
    cin >> a;

    // Tính bình phương của số
    float squared_a = a*a;

    // In kết quả ra màn hình
    cout <<"Binh phuong cua so la: " << squared_a << endl;

    return 0;
}