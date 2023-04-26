/*
Nama: Boy Simbolon
NIM: 2281040
*/

#include<iostream>
using namespace std;

void bubblesort(int nim[],int n,int mid[],int final[],string nama[])
{int i,j,tmp,tempmid,tempfinal;
string tempNama;
for(int i=0;i<n;i++)
	{for(int j=0;j<n-1;j++)
		{if(nim[j]>nim[j+1])
			{tmp=nim[j];
			tempNama=nama[j];
			tempmid=mid[j];
			tempfinal=final[j];
			nim[j]=nim[j+1];
			nama[j]=nama[j+1];
			mid[j]=mid[j+1];
			final[j]=final[j+1];
			nim[j+1]=tmp;	
			nama[j+1]=tempNama;
			mid[j+1]=tempmid;
			final[j+1]=tempfinal;
			}
		}	
	}
}

int main(){
	int nim[100],mid[100],final[100],n,i,j;
	string nama[100];
	cout<<"Masukan banyak elemen :";
	cin>>n;
	for(i=0;i<n;i++)
	{cout<<"Masukan NIM ke-"<<i+1<<" : ";
	cin>>nim[i];
	cout<<"Masukan Nama ke-"<<i+1<<" : ";
	cin>>nama[i];
	cout<<"Masukan nilai MID ke-"<<i+1<<" : ";
	cin>>mid[i];
	cout<<"Masukan nilai Final ke-"<<i+1<<" : ";
	cin>>final[i];
	}
	bubblesort(nim,n,mid,final,nama);
	cout<<"Hasil pengurutan sebagai berikut: \n";
	for(int i=0;i<n;i++)
{cout<<nim[i]<<"   "<<nama[i]<<"   "<<mid[i]<<"   "<<final[i]<<endl;}
int cari;
cout<<"Masukan NIM yang mau dicari: ";
cin>>cari;
for(int i=0;i<n;i++)
{if(cari==nim[i])
{cout<<"Nim: "<<nim[i]<<"\nNama: "<<nama[i]<<"\nMID: "<<mid[i]<<"\nFinal: "<<final[i]<<endl; 
break;
}
else
cout<<"data tidak ada"<<endl;
break;
}
return 0;}