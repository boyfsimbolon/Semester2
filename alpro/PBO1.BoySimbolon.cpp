//data member dan member fungsi pbo
#include<iostream>
using namespace std;
class dataSiswa{
public:
int umur;
int NIM;
string nama;
//fungsi 
void credit()
{cout<<"Nama: Boy Full Simbolon\nNIM: 2281040\n---------------------\n";
}
string Harus(){
return "Teknik Informatika";}
string Harus1(){
return "biar pintar";}
};

int main()
{dataSiswa siswa;
siswa.credit();
cout<<"Masukan nama: ";
cin>>siswa.nama;
cout<<"Masukan NIM: ";
cin>>siswa.NIM;
cout<<"Masukan Umur: ";
cin>>siswa.umur;
//output
cout<<"Masukan nama: "<<siswa.nama;
cout<<"\nMasukan NIM: "<<siswa.NIM;
cout<<"\nMasukan Umur: "<<siswa.umur;
cout<<"\nJurusan: "<<siswa.Harus()<<"\n"<<siswa.Harus1()<<endl;
	return 0;
}