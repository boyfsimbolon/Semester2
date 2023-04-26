#include <iostream>
using namespace std;

	class Variabel {
	protected:
		string NIM, NAMA, TANGGALLAHIR, TEMPATLAHIR;
		int USIA;
	public: 
		string Tugas(string nim, string nama, int usia, string tanggal_lahir, string tempat_lahir) {
			NIM = nim;
			NAMA = nama;
			USIA = usia;
			TANGGALLAHIR = tanggal_lahir;
			TEMPATLAHIR = tempat_lahir;
			cout<< "NIM: " << NIM << " Nama Lengkap: " << NAMA << " Umur: " << USIA << " Tanggal Lahir: " << TANGGALLAHIR << " Tempat Lahir: " << TEMPATLAHIR;
		}
};
class output : public Variabel {
	public:
		void Tugas(string nim, string nama, int usia, string tanggal_lahir, string tempat_lahir) {
			cout << Variabel::Tugas(nim, nama, usia, tanggal_lahir, tempat_lahir) << endl;
		}
};

int main() {
	output tampilan;
	cout << "======================" << endl;
	tampilan.Tugas("1981027", "Amos Charlie", 22, "14 Oktober 2001", "Bandung");
	tampilan.Tugas("1981013", "Kevin Simatupang", 22, "25 Oktober 2001", "Balikpapan");
	cout << "======================" << endl;
	return 0;
}
