#include <iostream>
using namespace std;

int pascal (int n, int k) {
    if (k == 0 || k == n) return 1;
    else return pascal(n-1,k-1) + pascal(n-1,k);
}

int main() {
    cout << "Bilangan Pascal\n";
    for(int i=0; i<20; i++) {
        for(int j=0; j <=i; j++) {
            cout << pascal(i,j) + " ";
        }
        cout << endl;
    }
    return 0;
}
