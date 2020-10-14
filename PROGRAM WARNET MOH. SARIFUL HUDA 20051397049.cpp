/* PROGRAM BILLING WARNET */

#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main ()

{
	int total,jam,menit,detik,jam2,menit2,detik2,totaldtkmulai,totaldtkselesai,totalbayar,lamapemakaian,durasi,sisa,detikpemakaian,menitpemakaian; 
	cout <<"BILLING WARNET\n";
	cout <<"NAMA MOH. SARIFUL HUDA NIM 20051397049\n";
	cout <<"\n\n";

	cout<<"===================================SELAMAT DATANG DIWARUNG INTERNET=================================================\n";
	cout<<"=======================SILAHKAN ISI DIBAWAH UNTUK MENGETAHUI JUMLAH PEMBAYARAN ANDA :)==============================\n";	
	cout <<"MULAI\n";
	cout <<"JAM MULAI   = ";
	cin>>jam;
	cout <<"MENIT MULAI = ";
	cin>>menit;
	cout <<"DETIK MULAI = ";
	cin>>detik;
	totaldtkmulai=(jam*3600)+(menit*60)+detik;
	cout <<"\n\n";

	cout <<"SELESAI\n";
	cout <<"SELESAI JAM   = ";
	cin>>jam2;
	cout <<"SELESAI MENIT = ";
	cin>>menit2;
	cout <<"SELESAI DETIK = ";
	cin>>detik2;
	totaldtkselesai=(jam2*3600)+(menit2*60)+detik2;
	durasi=totaldtkselesai-totaldtkmulai;
	cout <<"\n\n";
	
	totalbayar=1.388889*durasi;
	lamapemakaian=durasi/3600;
	sisa=durasi%3600;
	menitpemakaian=sisa/60;
	detikpemakaian=sisa%60;
	cout <<"\n\n";
	
	cout<<"LAMA PEMAKAIAN\n";
	cout<<"jam   = " <<lamapemakaian;
	cout<<"\n";
	cout<<"menit = " <<menitpemakaian;
	cout<<"\n";
	cout<<"detik = " <<detikpemakaian;
	cout<<"\n\n";
	
	cout<<"Tarif per jam = 5000\n";
	cout<<"TOTAL BAYAR = Rp. "<<totalbayar;
	cout<<"\n\n";
	cout<<"TERIMAKASIH, SILAHKAN DATANG KEMBALI :)";	
	
}
