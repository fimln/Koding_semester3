#include <iostream>
#include <conio.h>
using namespace std;

class MyArray {
public:
    MyArray();
    void kurang_satu();
    void cetak_array();    
private:
    int n;
    int A[10];    
};

MyArray::MyArray() {
    n = 10;
    for (int i=0; i<n; i++)
        A[i] = i+1;
}        

void MyArray::kurang_satu() {
    for (int i=0; i<n; i++)
        A[i]--;    
}

void MyArray::cetak_array() {
    for (int i=0; i<n; i++)
        cout << "Nilai indeks ke-[" << i << "] adalah " << A[i] << endl;
    getch();  
}

int main() {
    MyArray X;
    cout << "Nilai array asal : " << endl;
    X.cetak_array();
    X.kurang_satu();
    cout << "Setelah dikurangi 1 menjadi : " << endl;
    X.cetak_array();
}
