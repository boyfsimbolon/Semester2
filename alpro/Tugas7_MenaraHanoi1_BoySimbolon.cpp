#include<iostream>
using namespace std;

void Hanoi(int n,char asal,char bantu,char tujuan){
    if(n==0)
    return;
    Hanoi(n-1,asal,tujuan,bantu);
    cout<<"Pindahkan piringan ke-"<<n<<" dari "<<asal<<" ke "<<tujuan<<endl;
    Hanoi(n-1,bantu,asal,tujuan);
}

int main()
{int n;
char a,b,c;
cout<<"Masukan jumlah piringan: ";
cin>>n;
Hanoi(n,'a','b','c');
    return 0;
}