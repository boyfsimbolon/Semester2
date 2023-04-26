/*
Nama: Boy Full Simbolon
NIM: 2281040
*/

#include<iostream>
using namespace std;
int main()
{int data1[2][2];
int data2[2][2];
int hasil[2][2];
int jumlah=0;
//inputan nilai matriks
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{cout<<"Masukan nilai data 1"<<"("<<i<<","<<j<<")"<<": ";
	cin>>data1[i][j];
}}
cout<<endl<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{cout<<"Masukan nilai data 2"<<"("<<i<<","<<j<<")"<<": ";
	cin>>data2[i][j];
}}
cout<<endl<<endl;
//menampilkan matriks yang diinput
cout<<"matriks 1: "<<endl;
for(int i=0;i<2;i++)
{for( int j=0;j<2;j++)
{cout<<data1[i][j]<<" ";}cout<<endl;}
cout<<endl<<endl;
cout<<"matriks 2: "<<endl;
for(int i=0;i<2;i++)
{for( int j=0;j<2;j++)
{cout<<data2[i][j]<<" ";}cout<<endl;}
//operasi perkalian matriksnya

    for(int i = 0;i<2;i++){
      for(int j = 0;j<2;j++){
        for(int k = 0;k<2;k++){
          jumlah = jumlah + data1[i][k] * data2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
  cout<<endl;
  //outputan perkalian 2 matriks
  cout<<"--------------------------------";
  cout << "\n\nHasil Perkalian antara Matriks 1 dan 2: \n\n";
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                cout <<" "<<hasil[i][j]; 
            }
            cout << endl;
        }
      return 0; }
 
