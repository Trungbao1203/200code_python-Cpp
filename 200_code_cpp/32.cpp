// Viết bằng c++
// Tìm số lớn nhất trong danh sách: Nhập một danh sách các số và tìm số lớn nhất trong danh sách

#include <iostream>
using namespace std;

int main()
{
    // Nhập số lượng phần tử trong danh sách
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    // Tạo mảng để lưu danh sách các sô
    int danh_sach[n];

    // Nhập các phần tử từ người dùng
    cout << "Nhap cac so: ";
    for (int i = 0; i < n; i++) // Duyệt qua từng phần tử
    {
        cin >> danh_sach[i]; // Nhập từng phần tử
    }

    // Tìm số lớn nhất
    int max_num = danh_sach[0]; // Giả sử số đầu tiên là số lớn nhất
    for (int i = 1; i < n; i++) // Duyệt qua từng phần tử
    {
        if (danh_sach[i] > max_num) // Nếu tìm thấy số lớn hơn
        {
            max_num = danh_sach[i]; // Cập nhật số lớn nhất
        }
    }

    // In số lớn nhất
    cout << "So lon nhat trong danh sach la: " << max_num << endl;

    return 0;
}