/* 	MOH. SARIFUL HUDA 20051397049 2020A */
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int angka,alas,tinggi;
	
	cout<<"\n\n";
	cout<<"MENU SEGITIGA SIKU SIKU";
	cout<<"\n\n";
	cout<<"1. MENGHITUNG PANJANG SISI MIRING SEGITIGA" <<endl;
	cout<<"2. MENGHITUNG LUAS SEGITIGA" <<endl;
	cout<<"3. MENGHITUNG KELILING SEGITIGA" <<endl;
	cout<<"4. KELUAR" <<endl;
	cout<<"\n\n";
	
	cout<<"MASUKKAN PANJANG ALAS SEGIIGA :";
	cin>>alas;
	cout<<"MASUKKAN TINGGI SEGITIGA :";
	cin>>tinggi;
	cout<<"ANDA MAU MENGHITUNG APA [ MASUKKAN ANGKA : 1,2,3,4 ] : ";
	cin>>angka;
	cout<<"\n\n";
	
	switch (angka){
		case 1:
			cout<<"PANJANG SISI MIRING SEGITIGA = " <<sqrt(alas*alas+tinggi*tinggi) <<endl ;
			break;
		case 2:
			cout<<"LUAS SEGITIGA = " <<0.5*alas*tinggi <<endl;
			break;
		case 3 :
			cout<<"KELILING SEGITIGA = " << tinggi+alas+sqrt(alas*alas+tinggi*tinggi) <<endl;
			break;
		case 4 :
			cout<<" TERIMAKASIH " <<endl;
		
return 0;
	}
		
}

