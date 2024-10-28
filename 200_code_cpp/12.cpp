// Viết bằng C++
// Chuyển đổi nhiệt độ Celsius sang độ Fahrenheit

#include <iostream>
using namespace std;

int main() {
    // Khai báo biến
    float C, F;

    // Nhập nhiệt độ từ bàn phím
    cout << "Nhap nhiet do (°C): ";
    cin >> C;

    // Công thức chuyển đổi Celsius sang Fahreheit
    F = (C * 9.0 / 5.0) + 32;

    // In kết quả
    cout << "Nhiet do " << C << "°C = " << F << "°F" << endl;

    return 0;
}