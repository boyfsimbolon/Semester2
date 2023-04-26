#include<iostream>
#include<fstream>
#include <stdio.h>
#include <string.h>
using namespace std;
typedef struct Siswa {
    int NIM;
    char Nama[50];
    int nilaiMID;
    int nilaiFinal;
} biodataSiswa;
void input(biodataSiswa siswa[])
{for(int i=0;i<2;i++)
    {	cout<<"Masukan NIM ke-"<<i+1<<" : ";
    	cin>>siswa[i].NIM;
    	cout<<"Masukan Nama ke-"<<i+1<<" : ";
    	cin.ignore();
      cin.getline(siswa[i].Nama, 50);
    	cout<<"Masukan Nilai MID ke-"<<i+1<<" : ";
    	cin>>siswa[i].nilaiMID;
    	cout<<"Masukan Nilai Final ke-"<<i+1<<" : ";
    	cin>>siswa[i].nilaiFinal;
    }}
void input1(biodataSiswa siswa2[])
{	for(int i=0;i<2;i++)
    {	cout<<"Masukan NIM ke-"<<i+1<<" : ";
    	cin>>siswa2[i].NIM;
    	cout<<"Masukan Nama ke-"<<i+1<<" : ";
    cin.ignore();
      cin.getline(siswa2[i].Nama, 50);
    	cout<<"Masukan Nilai MID ke-"<<i+1<<" : ";
    	cin>>siswa2[i].nilaiMID;
    	cout<<"Masukan Nilai Final ke-"<<i+1<<" : ";
    	cin>>siswa2[i].nilaiFinal;
    }
}
int main()
{
biodataSiswa siswa [2],siswa2[2],gabung[4];
cout<<"Masukan data Tabel 1\n";
input(siswa);
	 cout<<"Masukan data Tabel 2\n";
input1(siswa2);
ofstream MyFile("tabel1.txt");
    for( int i=0; i<2; i++)
    {MyFile<<siswa[i].NIM<<"\t"<<siswa[i].Nama<<"\t"<< siswa[i].nilaiMID<<"\t"<<siswa[i].nilaiFinal<<"\n";}
ofstream MyFilek("tabel2.txt");
    for( int i=0; i<2; i++)
    {MyFilek<<siswa2[i].NIM<<"\t"<<siswa2[i].Nama<<"\t"<< siswa2[i].nilaiMID<<"\t"<<siswa2[i].nilaiFinal<<"\n";}
   MyFile.close(); 
	MyFilek.close();
	return 0;
}