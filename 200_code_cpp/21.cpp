// Viết bằng C++
// Tính số lượng ký tự 'a' trong chuỗi: Nhập một chuỗi và đếm số lượng ký tự 'a'.

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Nhập chuỗi từ bàn phím
    string chuoi;
    cout << "Nhap mot chuoi: ";
    getline(cin, chuoi);

    // Đếm số lượng ký tự 'a' trong chuoi
    int so_luong_a = 0;
    for (char ky_tu : chuoi) {
        if (ky_tu == 'a') {
            so_luong_a ++;
        }
    }

    // In kết quả
    cout<< "So luong ky tu 'a' trong chuoi la: " << so_luong_a << endl;

    return 0;
}
//* NOTE: so_luong_a = chuoi.count('a') # Hàm count() trả về số lần xuất hiện của một ký tự trong chuỗi