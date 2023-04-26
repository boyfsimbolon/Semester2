#include <iostream>
#include <stack>
#include<math.h>

using namespace std;

int main() {
    int n, step=1; // jumlah piringan
    cout<<"Masukan banyak piringan: ";
    cin>>n;
    int Pindah = pow(2, n) - 1; // jumlah langkah yang diperlukan
    stack<int> asal, bantu, tujuan; // tumpukan batang

    // mengisi tumpukan awal
    for (int i = n; i >= 1; i--) {
        asal.push(i);
    }

    char s = 'A', a = 'C', d = 'B'; // nama batang

    if (n % 2 == 0) { // membalik urutan batang
        swap(a, d);
    }

    // menyelesaikan Menara Hanoi dengan rekursif stak
    cout<<"Semuan piringan terdapat pada tiang A"<<endl;
    for (int i = 1; i <= Pindah; i++) {
        if (i % 3 == 1) {
            if (!asal.empty() && (bantu.empty() || asal.top() < bantu.top())) {
                bantu.push(asal.top());
                asal.pop();
                cout << step++<<".pindahkan piringan " << bantu.top() << " dari tiang " << s << " ke tiang " << a << endl;
            } else {
                asal.push(bantu.top());
                bantu.pop();
                cout << step++<< ".pindahkan piringan " << asal.top() << " dari tiang " << a << " ke tiang " << s << endl;
            }
        } else if (i % 3 == 2) {
            if (!asal.empty() && (tujuan.empty() || asal.top() < tujuan.top())) {
                tujuan.push(asal.top());
                asal.pop();
                cout << step++<< ".pindahkan piringan " << tujuan.top() << " dari tiang " << s << " ke tiang " << d << endl;
            } else {
                asal.push(tujuan.top());
                tujuan.pop();
                cout << step++<< ".pindahkan piringan " << asal.top() << " dari tiang " << d << " ke tiang " << s << endl;
            }
        } else if (i % 3 == 0) {
            if (!bantu.empty() && (tujuan.empty() || bantu.top() < tujuan.top())) {
                tujuan.push(bantu.top());
                bantu.pop();
                cout << step++<< ".pindahkan piringan " << tujuan.top() << " dari tiang " << a << " ke tiang " << d << endl;
            } else {
                bantu.push(tujuan.top());
                tujuan.pop();
                cout << step++<< ".pindahkan piringan " << bantu.top() << " dari  tiang " << d << " ke tiang " << a << endl;
            }
        }
    }

    return 0;
}
