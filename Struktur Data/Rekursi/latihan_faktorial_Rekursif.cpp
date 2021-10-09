#include <iostream>
#include <conio.h>
using namespace std;

int factorial(int n) {
    int result = 1;
    if(n<=1) return 1;
    else return n*factorial(n-1);
}

int main() {
    int n;
    cout << "Faktorial Rekursif\n";
    cout << "Masukkan bilangan : "; cin >> n;
    cout << "Hasil = " << factorial(n);

    getch();
    return 0;
} 