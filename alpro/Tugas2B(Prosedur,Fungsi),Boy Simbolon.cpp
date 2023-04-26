/*
Nama: Boy FUll Simbolon
NIM:2281040
*/

#include<iostream>
using namespace std;
//Cara membuat prosedur
//type(void), masa prosedur(cetak)
void setak()
{for(int i=0;i<10;i++)
	{cout<<"Saya sedang belajar komputer\n";		
	}
}
//Cara membuat fungsi
//type(type data)
//data(type x,type y)

int jumlah(int x,int y)
{int hasil;
hasil=x+y;
return hasil;	
}

int main()
{setak();
cout<<"Hasil = "<<jumlah(12,10)<<endl;
}