/* NOTE CHO ĐOẠN CODE VIẾT BẰNG C++:
getline(cin, chuoi); // Sử dụng getline để nhập chuỗi có chứa khoảng trắng
set<char> ky_tu_rieng_biet; // Lớp set giúp lưu trữ các phần tử không trùng lặp
for (char ky_tu : chuoi) // Duyệt qua từng ký tự trong chuỗi
{
ky_tu_rieng_biet.insert(ky_tu); // Nếu ký tự đã tồn tại thì không thêm vào
}
for (char ky_tu : ky_tu_rieng_biet) // Duyệt qua từng ký tự trong tập hợp */
// Viết bằng C++
// In các ký tự riêng biệt của chuỗi: Nhập một chuỗi và in các ký tự riêng biệt.

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    // Nhập chuỗi từ bàng phím
    string chuoi;
    cout << "Nhap mot chuoi: ";
    getline(cin, chuoi);

    // Tạo một tập hợp để lưu các ký tự riêng biệt
    set<char> ky_tu_rieng_biet;

    // Thêm các ký tự vào tập hợp
    for (char ky_tu : chuoi) {
        ky_tu_rieng_biet.insert(ky_tu);
    }

    // In các ký tự riêng biệt
    cout << "Cac ky tu rieng biet trong chuoi la: " << endl;
    for (char ky_tu : ky_tu_rieng_biet)
    {
        cout << ky_tu << " ";
    }
    cout << endl;

    return 0;
    
}