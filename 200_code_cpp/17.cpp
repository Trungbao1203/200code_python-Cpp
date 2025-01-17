// Viết bàng C++
// Tính số Fibonacci thứ n: Nhập số n và in ra số Fibonacci thứ n.

#include <iostream>
using namespace std;

// Hàm tính Fibonacci bằng cách sử dụng vòng lập
int fibonacci(int n) {
    if (n <= 0) {
        return -1; // Giá trị không hợp lệ
    } else if (n == 1 || n == 2) 
    {
        return 1;
    } else {
        int a = 1, b = 1, fib = 1;
        for (int i = 3; i <= n; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }
        return fib;
    }   
}

int main() {
    // Nhập số n từ bàn phím
    int n;
    cout << "Nhap so n: ";
    cin >> n;

    // Tính và in ra số Fibonacci thứ n
    int result = fibonacci(n);
    if (result == -1) {
        cout << "So nhap vao phai lon hon 0." << endl;
    } else {
        cout << "So Fibonacci thu " << n << " la: " << result << endl;
    }

    return 0;
}