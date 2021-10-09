#include <iostream>
#include <conio.h>
using namespace std;

void cetak_array(int A[], int n) {
    for (int i=0; i<n; i++)
        cout << "Nilai indeks ke-[" << i << "] adalah " << A[i] << endl;
    getch();  
}

int main() {
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    cout << "Nilai array asal : ";
    cetak_array(A, n);
    cout << "Setelah dikurangi 1 menjadi : " << endl;
    for (int i=0; i<n; i++)
        cout << "Nilai indeks ke-[" << i << "] adalah " << A[i]-1 << endl;        
    getch();
    cout << "Nilai array dicetak kembali" << endl;
    cetak_array(A, n);
    cout << "Ternyata tidak berubah. Perhatikan perbedaannya " << endl;    
    for (int i=0; i<n; i++)
        cout << "Nilai indeks ke-[" << i << "] adalah " << A[i]-- << endl;        
    cout << "Nilai array dicetak kembali" << endl;
    cetak_array(A, n);
}
