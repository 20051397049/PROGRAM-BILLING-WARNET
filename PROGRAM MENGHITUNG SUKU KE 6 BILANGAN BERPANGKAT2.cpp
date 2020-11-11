#include<iostream>
#include<conio.h>
#include<math.h> 
using namespace std;
main() {
int i,kuadrat,n,Jumlah;

cout<<"Masukkan Angka =";
cin>>n;
for (i=1;i<=n;i++) {
kuadrat=i*i*i;

cout << i<<" "<<kuadrat<<endl;
}

Jumlah=1+8+27+64+125+216;

cout<<"Jumlah dari suku ke1 - ke6 = " <<Jumlah;
getch();
}
