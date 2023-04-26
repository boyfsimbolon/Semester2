#include <iostream>
using namespace std;

class Laptop {
	//buat hak akses private
  private:
   string Nama;
   int umur; 
   //buat jembatan hak akses
  public:
    void setNama(string var1) {
      Nama = var1;
    }
    void setumur(int var2) {
     	umur = var2;
    }
    string getNama() {
      return Nama;
    }
    int getumur() {
      return umur;
    }
    
};
 
int main()
{
  Laptop Datadiri;
   Datadiri.setNama("Boy");
   Datadiri.setumur(19);
 
  cout << "Nama: "<< Datadiri.getNama() << endl;      
  cout << "Umur: "<< Datadiri.getumur() << endl; 
 
  return 0;
}