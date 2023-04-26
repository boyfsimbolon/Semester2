/*
NAMA: Boy Full Simbolon
NIM: 2281040
*/

#include<iostream>
using namespace std;

int main()
{int x1[]={5,2,1,4,6,4,5};
int x[]={3,4,6,5,2};
int j1= sizeof(x1)/sizeof(*x1);
int j= sizeof(x)/sizeof(*x);
int temp,pos;

cout<<"Menggunakan Bubble sort: "<<endl;
cout<<"x : ";
for(int i=0;i<j1;i++)
{cout<<x1[i]<<" ";}
cout<<endl;
for(int i=0;i<j1;i++)
{int acak=0;
    for(int h=0;h<j1-1;h++)
{if(x1[h]>x1[h+1])
{temp=x1[h];
x1[h]=x1[h+1];
x1[h+1]=temp;
acak++;
}
}
if(acak==0)
{break;}
cout<<endl;
cout<<" tahap "<<i+1<<" : ";
for(int a=0;a<j1;a++)
{cout<<x1[a]<<" ";}
}
cout<<endl<<endl;
cout<<"hasil : ";
for(int a=0;a<j1;a++)
{cout<<x1[a]<<" ";}

cout<<endl<<endl<<"menggunakan selection sort: "<<endl;
cout<<"y : ";
for(int i=0;i<j;i++)
{cout<<x[i]<<" ";}
cout<<endl;
for(int a=0;a<j;a++)
{temp=x[a];
pos=a;
for(int b=a;b<j;b++)
{if(x[b]<temp)
{temp=x[b];
pos=b;}
}
x[pos]=x[a];
x[a]=temp;
cout<<endl;
cout<<a+1<<" : ";
for(int c=0;c<j;c++)
{cout<<x[c]<<" ";}
}
cout<<endl<<endl;
cout<<"hasil : ";
for(int d=0;d<j;d++)
{cout<<x[d]<<" ";}
    return 0;
}