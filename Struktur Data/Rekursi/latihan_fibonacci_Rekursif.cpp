#include <iostream>
#include <conio.h>
using namespace std;

int fib(int n) {
    if (n <= 1) return 1;
    else return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    cout << "Deret Fibonacci\n";
    cout << "Masukkan angka : "; cin >> n;
    cout << "Hasil = " << fib(n);

    getch();
    return 0;
}