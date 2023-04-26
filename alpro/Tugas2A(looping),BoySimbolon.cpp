/*
Nama: Boy FUll Simbolon
NIM:2281040
*/

#include<iostream>
using namespace std;

int main()
{
cout<<"Menggunakan looping for...: "<<endl;
for(int i=0; i<10;i++)
	{cout<<i+1<<".saya sedang belajar komputer\n";}
cout<<endl;
cout<<"Menggunakan looping while...: "<<endl;
int i=0;
while(i<10)
	{cout<<i+1<<".saya sedang belajar komputer\n";
		i++;
	}
i=0;
cout<<endl;
cout<<"Menggunakan looping do...while...: "<<endl;
do{
cout<<i+1<<".saya sedang belajar komputer\n";
i++;
}while(i<10);

return 0;	
}