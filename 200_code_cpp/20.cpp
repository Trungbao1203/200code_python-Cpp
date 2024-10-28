// Viết bằng C++
// Đảo ngược chuỗi: Nhập một chuỗi và in ra chuỗi đảo ngược.

#include <iostream>
#include <string>
#include <algorithm> // Thư viện cho bàn phím reverse
using namespace std;

int main() {
    // Nhaaph chuỗi từ bàn phím
    string chuoi;
    cout << "Nhap chuoi: ";
    getline(cin, chuoi);

    // Đảo ngược chuỗi
    reverse(chuoi.begin(), chuoi.end()); // Hàm reverse để đảo ngược chuỗi

    // In chuỗi đảo ngược
    cout << "Chuoi dao nguoc la: " << chuoi << endl;

    return 0;
}