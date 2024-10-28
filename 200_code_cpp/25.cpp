// Viết bằng C++
// Tìm chữ cái đầu tiên và cuối cùng của chuỗi: Nhập một chuỗi và tìm chữ cái đầu tiên và cuối cùng.

#include <iostream>
#include <string> // Thư viện này để sử dụng kiểu dữ liệu string
using namespace std;

int main()
{
    // Nhập chuỗi từ bàn phím
    string s;
    cout << "Nhap mot chuoi: ";
    getline(cin, s); //getline() để nhập chuỗi có chưa khoảng trắng

    // Tìm chữ cái đầu và cuối
    if (!s.empty()) // Kiểm tra chuỗi có rỗng không, (emty() trả về true nếu chuỗi rỗng)
    {
        char chu_cai_dau = s[0]; // s[0] trả về ký tự đầu của chuỗi
        char chu_cai_cuoi = s[s.length() -1]; // s.length() trả về độ dài của chuỗi
        cout << "Chu cai dau tien la: " << chu_cai_dau << endl;
        cout << "Chu cai cuoi la: " << chu_cai_cuoi << endl;
    } 
    else
    {
        cout << "Chuỗi rỗng, không có ký tự để hiển thị." << endl;
    }

    return 0;
}