// Viết bằng C++
// Chuyển đổi chuỗi thành chữ HOA: Nhập một chuỗi và chuyển đổi tất cả các ký tự thành chữ HOA.

// Cách 1: Sử dụng vòng lập for.
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    // Nhập chuỗi từ người dùng
    string s;
    cout << "Nhap mot chuoi: ";
    getline(cin, s); // getline() để nhập chuỗi có chứa khoảng trắng

    // Chuyển đổi chuỗi thành chữ HOA
    for(int i = 0; i < s.length(); i++) // Duyệt qua từng ký tự trong chuỗi, s.length() trả về độ dài của chuỗi.
    {
        // Kiểm tra và chuyển ký tự thường thành chữ HOA

        if (s[i] >= 'a'  && s[i] <= 'z') //Nếu ký tự là chữ thường.
        {
            s[i] = s[i] - ('a' - 'A'); // Chuyển đổi ký tự thường thành HOA
        }
    }

    // In chuỗi đã chuyển đổi
    cout << "Chuoi chu HOA: " << s << endl;

    return 0;
}