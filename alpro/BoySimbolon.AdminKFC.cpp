#include<iostream.h> //iostream library untuk input/output di terminal
#include<fstream.h> //fstream library untuk program file
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//membuat sebuah class untuk struktur Menu Admin KFC
class kfcadmin{
    public:
        void panel_admin();
        void tambahMenu();
        void lihatMenu();
        void updateMenu();
        void hapusMenu();
};
/*
Nama: Boy Full Simbolon
NIM : 2281040
*/


//mendeklarasikan fungsi untuk menampilkan panel admin
void kfcadmin::panel_admin(){
    system("cls"); //cls
    cout<<"CONTROL PANEL ADMIN KFC\n======================"<<endl;
    cout<<"1. Tambah Menu"<<endl;
    cout<<"2. Lihat Menu"<<endl;
    cout<<"3. Update Menu"<<endl;
    cout<<"4. Hapus Menu"<<endl;
    cout<<"5. Keluar"<<endl;
    cout<<"\n======================\n";
}

//fungsi untuk menambah menu
void kfcadmin::tambahMenu(){
    system("cls"); //cls
    fstream file; //deklarasi filestream
    int id, harga, stok; //deklarasi integer
    string item; //deklarasi string

    cout<<"Menambahkan Menu\n======================"<<endl;
    cout<<"ID\t: "; 
    cin>>id;
    cout<<"Item\t: ";
    cin>>item;
    cout<<"Harga\t: ";
    cin>>harga;
    cout<<"Stok\t: ";
    cin>>stok;

    /*
        - mendeklarasikan pembukaan file dengan mode Append (app) atau output menggunakan ios::out dan ios::app
        - nama dari file yang digunakan, pastikan berada di satu lokasi yang sama dengan coding
    */
   file.open("databaseKFC.txt", ios::out | ios::app); //namaFile, metode ios
   //mendeklarasikan struktur dari file yang disimpan
   file << " " << id << " " << item << " " << harga << " " << stok << "\n";
   file.close(); //untuk menutup file yang sedang dioperasikan
}

//fungsi untuk menampilkan menu
void kfcadmin::lihatMenu(){
    system("cls");
    fstream file;
    int id, harga, stok;
    string item;

    cout<<"Daftar Menu\n======================"<<endl;
    //membuka file dalam mode input => ios::in
    file.open("databaseKFC.txt", ios::in);
    //cek apakah berhasil buka file atau tidak
    if(!file)
        cout<<"Gagal membuka file!"<<endl;
    else{
        //struktur dari Menu
        cout<<" ID.\tItem\t\tHarga\tStok"<<endl;
        //menyesuaikan urutan sesuai struktur file
        while(file >> id >> item >> harga >> stok)
        {cout<< " " << id << "\t" << item << "\t\t" << harga << "\t" << stok <<endl;}

        //sebuah fungsi yang hanya jalan di MS DOS :(
        //system("pause");
        system( "pause" );

        file.close();

    }
}

//fungsi untuk melakukan update menu
void kfcadmin::updateMenu(){
    system("cls"); //cls
    fstream file, file_t;
    int id, idx, harga, stok, n=0;
    string item;
	lihatMenu();
    cout<<"Update Menu\n======================"<<endl;
    //melakukan setting terhadap file yang akan dioperasikan di mana file databaseKFCt.txt akan menjadi tempat penyimpanan sementara dari nilai yang akan diupdate, dan nantinya akan di override ke databaseKFC.txt. Kita akan menggunakan app untuk mencari baris akhir dari file tersebut.
    file_t.open("databaseKFCt.txt", ios::app | ios::out);
    file.open("databaseKFC.txt", ios::in);

    //sekarang kita akan membuat operasi file untuk melakukan update dari data dalam file
    if(!file)
        cout<<"Gagal membuka File!"<<endl;
    else{
        //memasukan ID dari menu yang ingin dirubah
        cout<<"Masukan ID Menu yang ingin di-Update: ";
        cin>>idx;
        //melakukan operasi file
        file >> id >> item >> harga >> stok;
        //mencari idx berdasarkan dari id menu dalam file
        while(!file.eof()){
            //baris di bawah ini akan berjalan sampai di akhir dari file
            //cari parameternya yaitu idx
            if(id == idx){
                system("cls"); //cls
                cout<<"Update Menu Terpilih\n======================"<<endl;
                cout<<"Item Menu yang akan diupdate: "<<item<<", dengan Harga: "<<harga<<", dengan Stok: "<<stok<<endl;
                cout<<"Masukan Update dari Menu tersebut\n======================"<<endl;
                cout<<"Masukan Nama Item Menu: ";
                cin>>item;
                cout<<"Masukan Harga Menu: ";
                cin>>harga;
                cout<<"Masukan Stok Menu: ";
                cin>>stok;

                //commit penyimpanan file ke databaseKFCt.txt
                file_t << " " << id << " " << item << " " << harga << " " << stok << "\n";
                //counter untuk pengulangan
                n++;
            }else{
                file_t << " " << id << " " << item << " " << harga << " " << stok << "\n";
            }
            //operasi file databaseKFC.txt
            file >> id >> item >> harga >> stok;
        } if(n == 0){
            cout<<"ID Menu tidak Ditemukan!"<<endl;
        }
    }
    cout<<endl;
    //system("pause"); buat yang pakai Windows
    system( "pause" );
    //melakukan perubahan file
    file.close();
    file_t.close();
    remove("databaseKFC.txt"); //menghapus file lama
    rename("databaseKFCt.txt", "databaseKFC.txt"); //merubah file baru menjadi databaseKFC.txt

}

//fungsi untuk melakukan Hapus menu
void kfcadmin::hapusMenu(){
    system("cls"); //cls
    fstream file, file_t;
    int id, idx, harga, stok, n=0;
    string item;
    lihatMenu();
    cout<<"Hapus Menu\n======================"<<endl;
    //melakukan setting terhadap file yang akan dioperasikan di mana file databaseKFCt.txt akan menjadi tempat penyimpanan sementara dari nilai yang akan diupdate, dan nantinya akan di override ke databaseKFC.txt. Kita akan menggunakan app untuk mencari baris akhir dari file tersebut.
    file_t.open("databaseKFCt.txt", ios::app | ios::out);
    file.open("databaseKFC.txt", ios::in);

    //sekarang kita akan membuat operasi file untuk melakukan update dari data dalam file
    if(!file)
        cout<<"Gagal membuka File!"<<endl;
    else{
        //memasukan ID dari menu yang ingin dirubah
        cout<<"Masukan ID Menu yang ingin di-Hapus: ";
        cin>>idx;
        //melakukan operasi file
        file >> id >> item >> harga >> stok;
        //mencari idx berdasarkan dari id menu dalam file
        while(!file.eof()){
            //baris di bawah ini akan berjalan sampai di akhir dari file
            //cari parameternya yaitu idx
            if(id == idx){
                system("cls"); //cls
                cout<<"Menu berhasil Dihapus!";
                
                n++;
            }else{
                file_t << " " << id << " " << item << " " << harga << " " << stok << "\n";
            }
            //operasi file databaseKFC.txt
            file >> id >> item >> harga >> stok;
        } if(n == 0){
            cout<<"ID Menu tidak Ditemukan!"<<endl;
        }
    }
    cout<<endl;
    //system("pause"); buat yang pakai Windows
    system( "pause" );
    //melakukan perubahan file
    file.close();
    file_t.close();
    remove("databaseKFC.txt"); //menghapus file lama
    rename("databaseKFCt.txt", "databaseKFC.txt"); //merubah file baru menjadi databaseKFC.txt

}

//Fungsi utama, jangan dilupakan...
int main(){
    int pilihan;
    char pil;
    kfcadmin kfc;

    while(1){
        kfc.panel_admin();
        cout<<"\nMasukan pilihan Aplikasi: ";
        cin>>pilihan;
        
        switch(pilihan){
            case 1:
                do{
                    kfc.tambahMenu();
                    cout<<"Apakah anda ingin menambahkan menu lainnya? (y/n): ";
                    cin>>pil;
                }while(pil == 'y');
                break;
            case 2:
                kfc.lihatMenu();
                break;
            case 3:
                kfc.updateMenu();
                break;
            case 4:
                kfc.hapusMenu();
                break;
            case 5:
                exit(0);
                break;

            default:
                cout<<"Anda tidak memasukan Pilihan yang tepat!"<<endl;

        }
    }

    return 0;
}