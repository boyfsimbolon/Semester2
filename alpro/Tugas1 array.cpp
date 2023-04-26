/* 
Nama: Boy Full Simbolon
NIM: 2281040
*/


#include <iostream>
using namespace std;

int main() {
    int data [10]={10,30,40,10,20,30,10,20,30,40};
    int data1 [2][2]={{10,12},{13,14}};
    int data2 [2][2]={{30,40},{10,12}};
   for(int i=0;i<9;i++)
{cout<<data[i]<<", ";}
cout<<data[9];

cout<<endl<<endl<<endl;
for(int i=0;i<2;i++)
{for( int j=0;j<2;j++)
{cout<<data1[i][j]<<" ";}cout<<endl;}
cout<<endl<<endl;
for(int i=0;i<2;i++)
{for( int j=0;j<2;j++)
{cout<<data2[i][j]<<" ";}cout<<endl;}
cout<<endl<<"hasil penjumlahan matriks: \n";
for(int i=0;i<2;i++)
{for(int j=0;j<2;j++)
{cout<<data1[i][j]+data2[i][j]<<" ";}cout<<endl;}
    return 0;
}
