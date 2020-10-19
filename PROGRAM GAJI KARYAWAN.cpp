/* MOH. SARIFUL HUDA 20051397049 2020A */
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
   string nama[10];
   int jum,upah[10], gol[10],jkerja[10],jlembur[10];
   int gapok[10],glembur[10],gajibersih[10];
	
   cout<<"Masukan Jumlah Karyawan  : ";
   cin>>jum;
   cout<<endl;
	
   for (int i=1;i<=jum;i++){
        cout<<"KARYAWAN "<<i<<endl;
	cout<<"Masukan Nama					: ";
	cin>>nama[i];
	cout<<"Masukan Golongan [1,2,3,4]	: ";
	cin>>gol[i];
	cout<<"Masukan Jumlah Jam Kerja		: ";
	cin>>jkerja[i];
	
	switch (gol[i]){
		case 1 : 
			upah[i]=5000;
			break;
		case 2 :
			upah[i]=7000;
			break;
		case 3 :
			upah[i]=8000;
			break;
		case 4 :
			upah[i]=10000;
			break;
		default :
			upah[i]=0;
				
	}
	
	if (jkerja[i]>48){
	    jlembur[i]=jkerja[i]-48;    
			
	}else{
	     jlembur[i]=0;
	}
	
	glembur[i]=jlembur[i]*4000;
	gapok[i]=jkerja[i]*upah[i];
	gajibersih[i]=((gapok[i]+glembur[i]));
	cout<<endl;
	}
	
	cout<<"PROGRAM MENGHITUNG GAJI KARYAWAN"<<endl;
		cout<<endl;
	for (int i=1;i<=jum;i++){
		
		cout<<"     KARYAWAN "<<i<<endl;
		cout<<"Nama                 : "<<nama[i]<<endl;
		cout<<"Gaji Pokok           : "<<gapok[i]<<endl;		
		cout<<"Gaji Lembur          : "<<glembur[i]<<endl;
		cout<<"Gaji Diterima        : "<<gajibersih[i]<<endl;
		cout<<endl<<endl;	
	}	

getch();
}

















