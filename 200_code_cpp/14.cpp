// Viết bằng C++
// Tính gia thừa của một số: Nhập một số và tính gia thừa của nó.
#include <iostream>
using namespace std;

int main() {
    // Khai báo biến 
    int n;
    unsigned long long giai_thua = 1;

    // Nhập một số từ bàn phím 
    cout << "Nhap mot so: ";
    cin >> n;

    // Tính giai thừa
    if (n < 0 ) {
        cout << "Khong có gia thua cho so am." << endl;
    } else if ( n == 0 || n ==1 ) {
        cout << "Gia thua cua " << n << " la 1." << endl;
    } else {
        for (int i = 1; i <= n; i++){
            giai_thua *= i;
        }
        cout << "Gia thua cua " << n << " la " << giai_thua << endl;
    }

    return 0;
}