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
void data(biodataSiswa siswa[],biodataSiswa siswa2[])
{ifstream MyFile("tabel1.txt"); 
ifstream MyFilek("tabel2.txt");
	for(int i=0;i<2;i++){MyFile>>siswa[i].NIM>>siswa[i].Nama>>siswa[i].nilaiMID>>siswa[i].nilaiFinal;}
	for(int i=0;i<2;i++){MyFilek>>siswa2[i].NIM>>siswa2[i].Nama>>siswa2[i].nilaiMID>>siswa2[i].nilaiFinal;}
    cout<<"\nini tabel 1\nNIM\tNama\tMID\tFinal\n";
	 for( int i=0; i<2; i++)
    {cout<<siswa[i].NIM<<"\t"<<siswa[i].Nama<<"\t"<< siswa[i].nilaiMID<<"\t"<<siswa[i].nilaiFinal<<"\n";}
    cout<<"\nini tabel 2\nNIM\tNama\tMID\tFinal\n";
	 for( int i=0; i<2; i++)
    {cout<<siswa2[i].NIM<<"\t"<<siswa2[i].Nama<<"\t"<< siswa2[i].nilaiMID<<"\t"<<siswa2[i].nilaiFinal<<"\n";}
}
int main(){

    biodataSiswa siswa [2],siswa2[2],gabung[4];
    data(siswa,siswa2);
    for(int i=0; i<2; i++){
    gabung[i].NIM = siswa[i].NIM;
    strcpy(gabung[i].Nama , siswa[i].Nama);
    gabung[i].nilaiMID = siswa[i].nilaiMID;
    gabung[i].nilaiFinal = siswa[i].nilaiFinal;}
    for(int i=0; i<2; i++){
    gabung[i+2].NIM = siswa2[i].NIM;
    strcpy(gabung[i+2].Nama , siswa2[i].Nama);
    gabung[i+2].nilaiMID = siswa2[i].nilaiMID;
    gabung[i+2].nilaiFinal = siswa2[i].nilaiFinal;} 
	 ofstream Myfile("Tabel_Simpan.txt");
    Myfile<<"\nini tabel gabungan before sort\nNIM\tNama\tMID\tFinal\n";
    for( int i=0; i<4; i++)
    {Myfile<<gabung[i].NIM<<"\t"<<gabung[i].Nama<<"\t"<< gabung[i].nilaiMID<<"\t"<<gabung[i].nilaiFinal<<"\n";}
      Myfile.close(); 
return 0;
}