#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

typedef struct Siswa {
    int NIM;
    char Nama[50];
    int nilaiMID;
    int nilaiFinal;
} biodataSiswa;
int temp;
char tempnama[50];
int main(void){
    biodataSiswa siswa [2],siswa2[2],gabung[4];
    
siswa[0].NIM=123;
strcpy(siswa[0].Nama,"Andi Permana");
siswa[0].nilaiMID=80;
siswa[0].nilaiFinal=100;
siswa[1].NIM=121;
strcpy(siswa[1].Nama,"Asep Permana");
siswa[1].nilaiMID=60;
siswa[1].nilaiFinal=60;
siswa2[0].NIM=145;
strcpy(siswa2[0].Nama,"Dapa julisno");
siswa2[0].nilaiMID=100;
siswa2[0].nilaiFinal=90;
siswa2[1].NIM=223;
strcpy(siswa2[1].Nama,"Badu Perisno");
siswa2[1].nilaiMID=80;
siswa2[1].nilaiFinal=90;
    
    printf("ini tabel 1\nNIM\tNama\t\tMID\tFinal\n");
    for( int i=0; i<2; i++)
    printf("%d \t%s \t%d \t%d\n", siswa[i].NIM, siswa[i].Nama, siswa[i].nilaiMID, siswa[i].nilaiFinal);
    
    cout<<endl;
    printf("ini tabel 2\nNIM\tNama\t\tMID\tFinal\n");
    for( int i=0; i<2; i++)
    printf("%d \t%s \t%d \t%d\n", siswa2[i].NIM, siswa2[i].Nama, siswa2[i].nilaiMID, siswa2[i].nilaiFinal);
    
    for(int i=0; i<2; i++){
    gabung[i].NIM = siswa[i].NIM;
    strcpy(gabung[i].Nama , siswa[i].Nama);
    gabung[i].nilaiMID = siswa[i].nilaiMID;
    gabung[i].nilaiFinal = siswa[i].nilaiFinal;}
    for(int i=0; i<2; i++){
    gabung[i+2].NIM = siswa2[i].NIM;
    strcpy(gabung[i+2].Nama , siswa2[i].Nama);
    gabung[i+2].nilaiMID = siswa2[i].nilaiMID;
    gabung[i+2].nilaiFinal = siswa2[i].nilaiFinal;}
    printf("\nTabel Gabungan before sort\nNIM\tNama\t\tMID\tFinal\n");
    for( int i=0; i<4; i++)
    printf("%d \t%s \t%d \t%d\n", gabung[i].NIM, gabung[i].Nama, gabung[i].nilaiMID, gabung[i].nilaiFinal);
    for(int i=0;i<4;i++)
{for(int h=0;h<3;h++)
	if(gabung[h].NIM>gabung[h+1].NIM)
	{temp=gabung[h].NIM;
	gabung[h].NIM=gabung[h+1].NIM;
	gabung[h+1].NIM=temp;	
	
	strcpy (tempnama, gabung[h].Nama);
	strcpy (gabung[h].Nama, gabung[h+1].Nama);
	strcpy (gabung[h+1].Nama, tempnama);
	
	temp=gabung[h].nilaiMID;
	gabung[h].nilaiMID=gabung[h+1].nilaiMID;
	gabung[h+1].nilaiMID=temp;	
	
	temp=gabung[h].nilaiFinal;
	gabung[h].nilaiFinal=gabung[h+1].nilaiFinal;
	gabung[h+1].nilaiFinal=temp;	
	}
}
   printf("\nTabel Gabungan after sort\nNIM\tNama\t\tNID\tFinal\n");
    for( int i=0; i<4; i++)
    printf("%d \t%s \t%d \t%d\n", gabung[i].NIM, gabung[i].Nama, gabung[i].nilaiMID, gabung[i].nilaiFinal);
 
    
    return 0;
}