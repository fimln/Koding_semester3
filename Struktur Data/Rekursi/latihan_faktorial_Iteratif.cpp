#include <iostream>
#include <conio.h>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i=1; i<=n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cout << "Faktorial Iteratif\n";
    cout << "Masukkan bilangan : "; cin >> n;
    cout << "Hasil = " << factorial(n);

    getch();
    return 0;
}