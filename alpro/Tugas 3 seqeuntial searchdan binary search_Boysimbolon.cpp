/*
Nama: Boy Full Simbolon
NIM: 2281040
*/

#include<iostream>
using namespace std;
int main()
{int data1[]={10,20,40,60,80,10,30,25,15};
	int cari,hasil=0,index[9];
    int awal=0,akhir=9,tengah,b_flag=0;
    int data2[9]={10,10,15,20,25,30,40,60,80};
    cout<<"masukan elemen untuk dicari: ";
    cin>>cari;
    cout<<"\n\nmenggunakan sequential search: "<<endl;
	for(int i=0;i<9;i++)
	if(cari==data1[i])
	{index[i]=i;
	hasil++;}
	if(hasil==0)
	cout<<"Data tidak ditemukan ";
	else
	{cout<<"data ditemukan sebanyak "<<hasil<<" di index ";
	}
	for(int i=0;i<9;i++)
	{if(data1[i]==cari)
	if(cari>1)
	{cout<<i<<" ";}
	else
	cout<<i;
	}
	cout<<endl; 
    
    while(b_flag == 0 && awal<=akhir)
    {tengah=(awal+akhir)/2;
        if(data2[tengah]==cari)
          { b_flag= 1;
            break;}
        else if(data2[tengah]<cari)
        awal=tengah+1;
        else
        akhir = tengah-1;
       
    }
    cout<<"\n\nmenggunakan binary search: "<<endl;
    if(b_flag==1)
    cout<<"data ditemukan pada index ke-"<<tengah<<endl;
    else
    cout<<"data tidak ditemukan! ";
    return 0;
}