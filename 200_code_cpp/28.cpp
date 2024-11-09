// Viết bằng C++
// tạo chuỗi từ danh sách: Nhập danh sách các từ và tạo chuỗi từ danh sách đó.

#include <iostream>
#include <sstream> // Thư viện sử dụng stringstream
using namespace std;

int main()
{
    // Nhập danh sách các từ từ bàn phím
    string input;
    cout << "Nhap danh sach cac tu (cach nhau boi dau cach): ";
    getline(cin, input);

    // Sử dụng stringstream để tách từ
    stringstream ss(input); // Tạo Tạo một  stringstream từ chối input
    string tu; // Biến lưu từng từ
    string chuoi = ""; // Chuỗi kết quả

    // Đọc từng từ và ghép vào chuỗi chuoi
    bool first = true; // Để xử lý việc thêm dấu cách 
    while (ss >> tu)
    {
        if (!first) // Nếu không phải từ đầu tiên
        {
            chuoi += " "; // Chỉ thêm dấu cách sau từ đầu tiên
        }
        chuoi += tu; // Thêm từ vào chuỗi
        first = false; // Đã qua từ đầu tiên
    }

    // In chuỗi đã tạo
    cout << "Chuoi duoc tao la: " << chuoi << endl;

    return 0;
}