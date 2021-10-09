#include <iostream>
#include <conio.h>
using namespace std;

int fibo (int n) {
    int n1 = 1, n2 = 1;
    if ((n == 0) || (n == 1)) return 1;
    else {
        int result = 0;
        for (int i = 2; i <= n; i++) {
            result = n1 + n2;
            n1 = n2;
            n2 = result;
        }
        return result;
    }
}

int main() {
    int n;
    cout << "Deret Fibonacci\n";
    cout << "Masukkan angka : "; cin >> n;
    cout << "Hasil = " << fibo(n);

    getch();
    return 0;
}