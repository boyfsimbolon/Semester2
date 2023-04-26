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
int temp;
string tempnama;

void bubbleSort(struct siswa Siswa[], int n)
{for(int i=0;i<4;i++)
{for(int h=0;h<3;h++)
	if(Siswa[h].Nim>Siswa[h+1].Nim)
	{temp=Siswa[h].Nim;
	Siswa[h].Nim=Siswa[h+1].Nim;
	Siswa[h+1].Nim=temp;	
	
	tempnama=Siswa[h].Nama;
	Siswa[h].Nama=Siswa[h+1].Nama;
	Siswa[h+1].Nama=tempnama;
	
	temp=Siswa[h].MID;
	Siswa[h].MID=Siswa[h+1].MID;
	Siswa[h+1].MID=temp;	
	
	temp=Siswa[h].Final;
	Siswa[h].Final=Siswa[h+1].Final;
	Siswa[h+1].Final=temp;	
	}
}
}
int hasil=0;
int main()
{int cari;
int awal=0,akhir=4,tengah,b_flag=0;
struct siswa Siswa[4];
for(int i=0;i<4;i++)
{cout<<"Masukan NIM ke "<<i+1<<" : ";
cin>>Siswa[i].Nim;
cout<<"Masukan Nama ke "<<i+1<<" : ";
cin>>Siswa[i].Nama;
cout<<"Masukan nilai MID ke "<<i+1<<" : ";
cin>>Siswa[i].MID;
cout<<"Masukan nilai Final ke "<<i+1<<" : ";
cin>>Siswa[i].Final;
cout<<endl;}


cout<<"sebelum diurutkan : "<<endl<<"NIM\tNAMA\tMID\tFINAL"<<endl;
for(int i=0;i<4;i++)
{cout<<Siswa[i].Nim<<"\t"<<Siswa[i].Nama<<"\t"<<Siswa[i].MID<<"\t"<<Siswa[i].Final<<endl;	
}cout<<endl;

bubbleSort(Siswa, 4);

cout<<"setelah diurutkan : "<<endl<<"NIM\tNAMA\tMID\tFINAL"<<endl;
for(int i=0;i<4;i++)
{cout<<Siswa[i].Nim<<"\t"<<Siswa[i].Nama<<"\t"<<Siswa[i].MID<<"\t"<<Siswa[i].Final<<endl;	
}cout<<endl;
cout<<"masukan NIM yang mau dicari: ";
cin>>cari;
	 while(b_flag == 0 && awal<=akhir)
    {tengah=(awal+akhir)/2;
        if(Siswa[tengah].Nim==cari)
          { b_flag= 1;
          	cout<<"Data ditemukan pada urutan ke: "<<tengah+1<<endl;cout<<"Nama: "<<Siswa[tengah].Nama<<"\nNIM: "<<Siswa[tengah].Nim<<"\nNilai Mid: "<<Siswa[tengah].MID<<"\nNilai Final: "<<Siswa[tengah].Final<<endl;
            break;}
        else if(Siswa[tengah].Nim<cari)
        awal=tengah+1;
        else
        akhir = tengah-1;
       
    }
    if(b_flag!=1)
cout<<"data tidak ditemukan! "<<endl;
  

	 return 0;}


