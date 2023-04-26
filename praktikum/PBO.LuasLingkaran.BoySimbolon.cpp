#include <iostream>

using namespace std;

struct Input{
    float R;
    float D;
    int n;
};

class LuasLingkaran {
    private:
        float r;
        float d;
        float luas;
        #define phi 3.14
        
    public:
        LuasLingkaran(float var1, float var2) {
            r = var1;
            d = var2;
            if (r != 0) {
                luas = r * r * phi;
                cout<<"Jawab:\nr="<<r<<"cm^2"<<"\nPhi= "<<phi<<"\nLuas= r * r * phi"<<"\nLuas= "<<r<<" * "<<r<<" * "<<phi<<"\nLuas= "<<r*r<<" * "<<phi<<endl;
                cout << "\nLuas Lingkaran dengan jari-jari " << r <<" cm^2"<< " adalah: " << luas <<" cm^2"<< endl;    
            }
            else if (d != 0) {
                
                luas =  (d * d * phi)/4;
                cout<<"Jawab:\nr="<<d<<"cm^2"<<"\nPhi= "<<phi<<"\nLuas= 1/4* d * d * phi"<<"\nLuas= 1/4 *"<<d<<" * "<<d<<" * "<<phi<<"\nLuas= "<<(d*d)/4<<" * "<<phi<<endl;
                cout << "Luas Lingkaran dengan diameter " << d <<" cm^2"<< " adalah: " << luas <<" cm^2"<< endl;    
            }
            else {
                cout << "Input tidak valid." << endl;
            }
        }
};

int main() {
    Input inputan;
    cout << "Selamat datang di program Luas Lingkaran" << endl;
    cout << "Pilih inputan yang akan dimasukkan: " << endl;
    cout << "1. Jari-jari" << endl;
    cout << "2. Diameter" << endl;
    cout << "Masukkan pilihan anda: ";
    cin >> inputan.n;
    switch (inputan.n) {
        case 1:
            {
                cout << "Masukkan jari-jari lingkaran: ";
                cin >> inputan.R;
                LuasLingkaran luasan(inputan.R, 0);    
            }
            break;
        case 2:
            {
                cout << "Masukkan diameter lingkaran: ";
                cin >> inputan.D;
                LuasLingkaran luasan(0, inputan.D);
            }
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
    }
   return 0;
}
