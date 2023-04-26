#include <fstream>
#include <iostream>

using namespace std;

typedef struct Siswa {
    int NIM;
    char Nama[50];
    int NilaiMID;
    int NilaiFinal;
} biodataSiswa;

void data(biodataSiswa Unai[]) {
    ifstream Students("gono.txt");
    for (int i = 0; i < 7; i++) {
        Students >> Unai[i].NIM >> Unai[i].Nama >> Unai[i].NilaiMID >> Unai[i].NilaiFinal;
    }

    for (int i = 0; i < 7; i++) {
        cout << "\nNim: " << Unai[i].NIM;
        cout << "\nNama: " << Unai[i].Nama;
        cout << "\nNilai Mid: " << Unai[i].NilaiMID;
        cout << "\nNilai Final:" << Unai[i].NilaiFinal;
        cout << "\n";
    }
}

void bubblesort(biodataSiswa Unai[]) {
    int i, j, tmp, tempmid, tempfinal;
    char tempNama[50];
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 6; j++) {
            if (Unai[j].NIM > Unai[j + 1].NIM) {
                tmp = Unai[j].NIM;
                strcpy(tempNama, Unai[j].Nama);
                tempmid = Unai[j].NilaiMID;
                tempfinal = Unai[j].NilaiFinal;
                Unai[j].NIM = Unai[j + 1].NIM;
                strcpy(Unai[j].Nama, Unai[j + 1].Nama);
                Unai[j].NilaiMID = Unai[j + 1].NilaiMID;
                Unai[j].NilaiFinal = Unai[j + 1].NilaiFinal;
                Unai[j + 1].NIM = tmp;
                strcpy(Unai[j + 1].Nama, tempNama);
                Unai[j + 1].NilaiMID = tempmid;
                Unai[j + 1].NilaiFinal = tempfinal;
            }
        }
    }
}

void tampilan(biodataSiswa Unai[]) {
    bubblesort(Unai);
    for (int i = 0; i < 7; i++) {
        cout << "\nNim: " << Unai[i].NIM;
        cout << "\nNama: " << Unai[i].Nama;
        cout << "\nNilai Mid: " << Unai[i].NilaiMID;
        cout << "\nNilai Final:" << Unai[i].NilaiFinal;
        cout << "\n";
    }
}

void cari(biodataSiswa Unai[], int n) {
for(int i = 0; i < 7; i++) {
if(n == Unai[i].NIM) {
cout << "NIM: " << Unai[i].NIM << "\nNama: " << Unai[i].Nama << "\nMID: " << Unai[i].NilaiMID << "\nFinal: " << Unai[i].NilaiFinal << endl;
return;
}
}
cout << "Data tidak ditemukan" << endl;
}
int main() {
int n;
biodataSiswa Unai[7];
data(Unai);
bubblesort(Unai);
cout << "Tampilan data setelah diurutkan: " << endl;
tampilan(Unai);
cout << "Masukan NIM yang mau dicari: ";
cin >> n;
cari(Unai, n);
return 0;
}