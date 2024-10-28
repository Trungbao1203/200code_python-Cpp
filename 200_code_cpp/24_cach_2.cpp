// Cách 2: Sử dụng hàm transform() và toupper()
#include <iostream>
#include <string> // Thư viện này để sử dụng kiểu dữ liệu string
#include <algorithm> // Thư viện cho ham algorithm
using namespace std;

int main()
{
    // Nhập chuỗi từ người dùng
    string s;
    cout << "Nhap mot chuoi: ";
    getline(cin, s); // getline() để nhập chuỗi có chứa khoảng trống

    // chuyển đổi chuổi thành hoa
    transform(s.begin(), s.end(), s.begin(), ::toupper); //::toupper chuyển đổi ký tự thành chữ HOA (uppercase)

    // In chuỗi đã chuyển đổi
    cout <<"Chuoi chu HOA: " << s << endl;
}