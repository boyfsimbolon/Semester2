#include <iostream>
 
using namespace std;
 
struct input{
string a,b;
int c;	
};
 

class Pesan {
 
  private:
    string nama;
    int nim;
    string jurusan;
 
  public:
    Pesan(string var1, int var2, string var3) {
      nama = var1;
      nim = var2;
      jurusan = var3;
 
      cout << "saya " << nama << " dengan nim " << nim <<" jurusan "<<jurusan<<" \nsiap untuk mengikuti kuliah"<<endl;
    }
 
    ~Pesan() {
      cout << "data nama   : " << nama << "\ndata nim    : " << nim<<"\ndata jurusan: " << jurusan <<"\ntelah dihapus "<<endl;
    }
 
    string Motivasi() {
      return "semangaat kamu " + nama + " kuliahnya \ndi jurusan " + jurusan;
    }
 
};
 
int main()
{input inputan;
cout<<"Masukan nama    : ";
cin>>inputan.a;
cout<<"Masukan nim     : ";
cin>>inputan.c;
cout<<"Masukan jurusann: ";
cin>>inputan.b;
	
  Pesan pesan(inputan.a,inputan.c,inputan.b);
  cout << "====================================="<< endl;
  cout << pesan.Motivasi() << endl;
  cout << "====================================="<< endl;
 
  return 0;
}