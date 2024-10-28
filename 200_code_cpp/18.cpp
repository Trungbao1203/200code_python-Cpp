// Viết bằng C++
// Kiểm tra số nguyên tố: Nhập một số và kiểm tra xem nó có phải là số nguyên tố không.

#include <iostream>
#include <cmath>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool kiem_tra_nguyen_to (int n) {
    if (n <= 1) {
        return false;
    } 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // Nhập số từ bàn phím
    int n;
    cout << "Nhap mot so: ";
    cin >> n;

    // Kiểm tra và in kết quả
    if (kiem_tra_nguyen_to (n)) {
        cout << n << " la so nguyen to." << endl;
    } else {
        cout << n << " khong phai la so nguyen to." << endl;
    }

    return 0;
}