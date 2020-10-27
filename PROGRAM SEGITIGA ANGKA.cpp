/*MOH. SARIFUL HUDA 20051397049 2020A MANAJEMEN INFORMATIKA*/
/*PROGRAM MEMBUAT SEGITIGA ANGKA*/
#include <iostream>
  
using namespace std;
  
int main() {
    int i,j,n,a;
 
    cout << "Masukkan Segitiga Angka : ";
    cin >> n;
 
    for (i=1;i<=n;i++) {
        for (j=1;j<=i;j++) {
            cout <<j;
        }
        cout << endl;
    }
    a=n-1;
    for (i=a;i>=1;i--) {
        for (j=1;j<=i;j++) {
            cout <<j;
        }
        cout << endl;
    }
  
    return 0;
}
