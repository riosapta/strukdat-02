/* Exercise-03
Nama : Rio Sapta Samudera
NPM	 : 140810180030
Deskripsi : Struct
*/

#include "pch.h"
#include <iostream>
#include <string.h>
using namespace std;

struct Data{
    char nip[20];
    char nama[20];
    int gol;
};

typedef Data LarikData[30];

void inputPegawai(LarikData& Pegawai, int& n){
    cout<<"Banyak Pegawai : ";cin>>n;
    for(int i = 0; i < n; i++) {
        cout<<"Masukkan data Pegawai ke-"<<i+1<<endl;
        cout<<"NIP  : "; cin>>Pegawai[i].nip;
        cout<<"Nama : "; cin>>Pegawai[i].nama;
        cout<<"Gol  : "; cin>>Pegawai[i].gol;
        cout<<endl;
    }

}

void CetakDaftar(LarikData Pegawai, int n, int gaji[]){
    for(int i = 0; i < n; i++){
        cout<<"----------Pegawai "<<i+1<<"----------"<<endl;
        cout<<"NIP  : "<<Pegawai[i].nip<<endl;
        cout<<"Nama : "<<Pegawai[i].nama<<endl;
        cout<<"Gol  : "<<Pegawai[i].gol<<endl;
        cout<<"Gaji : "<<gaji[i]<<endl;
    }
}

void CariGaji(LarikData Pegawai, int n, int gaji[]){
    for(int i=0;i<n;i++){
        if(Pegawai[i].gol==1){
            gaji[i]=2000000;
        }
        else if(Pegawai[i].gol==2){
            gaji[i]=3000000;
        }
        else if(Pegawai[i].gol==3){
            gaji[i]=5000000;
        }
        else if(Pegawai[i].gol==4){
            gaji[i]=8000000;
        }
    }
}

void RataGaji(LarikData Pegawai, int n, int gaji[]){
    int total=0;
    for(int i=0;i<n;i++){
        total+=gaji[i];
    }
    cout<<"Rata-rata : "<<total/n<<endl;
}

void GajiTerendah(LarikData Pegawai, int n, int gaji[]){
    int small=gaji[0];
    for(int i=0 ; i<n; i++){
        if(gaji[i] < small){
            small = gaji[i];
        }
    }

    cout<<"Pegawai Dengan Gaji Terendah : "<<endl;

    for(int i=0 ; i<n; i++){
        if(gaji[i] == small){
            cout<<Pegawai[i].nama<<endl;
        }
    }
}

void GajiTertinggi(LarikData Pegawai, int n, int gaji[]){
    int high=gaji[0];
    for(int i=0 ; i<n; i++){
        if(gaji[i] > high){
            high = gaji[i];
        }
    }

    cout<<"Pegawai Dengan Gaji Tertinggi : "<<endl;

    for(int i=0 ; i<n; i++){
        if(gaji[i] == high){
            cout<<Pegawai[i].nama<<endl;
        }
    }
}
main(){
    LarikData Pegawai;
    int n;
    int gaji[30];
    inputPegawai(Pegawai,n);
    CariGaji(Pegawai,n,gaji);
    CetakDaftar(Pegawai,n,gaji);
    RataGaji(Pegawai,n,gaji);
    GajiTerendah(Pegawai,n,gaji);
    GajiTertinggi(Pegawai,n,gaji);
}
