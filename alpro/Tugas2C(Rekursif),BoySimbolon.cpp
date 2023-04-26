/*
Nama: Boy FUll Simbolon
NIM:2281040
*/

#include<iostream>
using namespace std;

int faktorial (int A)
{if(A==1)
{return (A);
}
else
{return (A*faktorial(A-1));
}
}

int main()
{cout<<"Faktorial 13= "<<faktorial(12)<<endl;
	return 0;
}