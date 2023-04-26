/*
Nama: Boy Full Simbolon
NIM: 2281040
*/

#include<iostream>
using namespace std;
struct siswa{
int Nim;
string Nama;
int MID;
int Final;
};
int hasil=0;
int main()
{int cari;
struct siswa Siswa[4];
Siswa[0].Nim=341;
Siswa[0].Nama="Asep";
Siswa[0].MID=70;
Siswa[0].Final=80;
Siswa[1].Nim=371;
Siswa[1].Nama="Badu";
Siswa[1].MID=80;
Siswa[1].Final=90;
Siswa[2].Nim=673;
Siswa[2].Nama="Cecep";
Siswa[2].MID=90;
Siswa[2].Final=80;
Siswa[3].Nim=781;
Siswa[3].Nama="Dedi";
Siswa[3].MID=70;
Siswa[3].Final=90;
	    cout<<"masukan elemen untuk dicari: ";
    cin>>cari;
for(int i=0;i<4;i++)
{if(cari==Siswa[i].Nim)
	hasil++;
}
if(hasil==0)
	 {
 		cout<<"data tidak ditemukan"<<endl;
 	}
 	else
    for(int i=0;i<4;i++)
    {  if(cari==Siswa[i].Nim)
            {cout<<"Nama: "<<Siswa[i].Nama<<"\nNIM: "<<Siswa[i].Nim<<"\nNilai Mid: "<<Siswa[i].MID<<"\nNilai Final: "<<Siswa[i].Final<<endl;}

	 }
	 
	 return 0;}


