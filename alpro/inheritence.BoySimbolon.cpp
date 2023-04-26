#include<iostream>
using namespace std;
 
class Data {
protected:
    string nama = "Boy Simbolon";
    string nim = "2281040";
    string jurusan = "Teknik Informatika";
public: 
    string cekdata() {
        return "ini berasal dari kelas Data";
    }
};

class Datas : public Data {
protected:
    string pesan = "Semangat kuliahnya";
public:
    string cekpesan() {
        return "ini berasal dari kelas Datas " + pesan; 
    }
};

class Print : public Datas {
public:
    string lihat1() {
        return "Nama: " + nama + "\nNIM: " + nim + "\nJurusan: " + jurusan;
    }
    string lihat2() {
        return "ini berasal dari kelas Print";
    }
};

class Prints {
protected:
    string a = "Belajar OOP";
public:
    string cekprints() {
        return "lagi belajar OOP katanya";
    }
};

class Tugas : public Datas, public Prints { 
public:
    string lihat1() {
        return "Nama: " + nama + "\nNIM: " + nim + "\nJurusan: " + jurusan;
    }
    string lihat2() {
        return "ini berasal dari kelas Tugas " + pesan + a; 
    }
};

int main() {
    Print printin;
    Tugas tugasku;

    cout << printin.lihat1() << endl;
    cout << printin.cekdata() << endl;
    cout << printin.cekpesan() << endl;
    cout << printin.lihat2() << endl;

    cout << tugasku.lihat1() << endl;
    cout << tugasku.cekdata() << endl;
    cout << tugasku.cekprints() << endl;
    cout << tugasku.lihat2() << endl;

    return 0;
}
