// Viết bằng C++
// Tính tổng các số trong danh sách: Nhập một danh sách các số và tính tổng của chúng.

#include <iostream>
using namespace std;

int main()
{
    // Nhập số lượng phần tử trong danh sách
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    // Tạo mảng để lưu danh sách các số
    int danh_sach[n];
    int tong = 0;

    // Nhập các phần tử từ bàn phím
    cout << "Nhap cac so: ";
    for (int i = 0; i < n; i++) // Duyệt qua từng phần tử
    {
        cin >> danh_sach[i];
        tong += danh_sach[i]; // Cộng dồn các giá trị
    }

    // In tổng của các số trong danh sách
    cout << "Tong cua cac so trong danh sach la: " << tong <<endl;

    return 0;
}