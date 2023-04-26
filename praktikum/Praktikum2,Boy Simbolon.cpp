/*
Nama: Boy Full Simbolon
NIM: 2281040
*/

#include<iostream>
using namespace std;

int jumlah(int x,int y)
{int hasil;
hasil=x+y;
return hasil;	
}
int faktorial (int A)
{if(A==1)
{return (A);
}
else
{return (A*faktorial(A-1));
}
}
int masuk(int jawab)
{int bil1,bil2,bil;

switch(jawab)
{case 1:
cout<<"Pilihan anda adalah Bilangan faktorial.\n";
cout<<"Masukan bilangannya: ";
cin>>bil;
cout<<"Bilangan Faktorial dari "<<bil<<" = "<<faktorial(bil)<<endl;
break;
case 2:
cout<<"Pilihan anda adalah penjumlahan 2 buah bilangan.\n";
cout<<"Masukan Bilangan 1: ";
cin>>bil1;
cout<<"Masukan Bilangan 2: ";
cin>>bil2;
cout<<"Jumlah "<<bil1<<"+"<<bil2<<" = "<<jumlah(bil1,bil2)<<endl;
break;
case 3:
cout<<"Pilihan anda adalah pengulangan tulisan.\n";
for(int i=0; i<10;i++)
	{cout<<i+1<<".saya sedang belajar komputer\n";}

break;
default:
cout<<"Pilihan anda salah\n";
}
return jawab;}

int main()
{int menus;
do{cout<<"menu pilihan\n1. Bilangan faktorial\n2. menjumlahkan 2 buah bilangan\n3. pengulangan Tulisan\nMasukan pilihan anda: ";
cin>>menus;
masuk(menus);
}while(menus>=0&&menus<4);
return 0;
}