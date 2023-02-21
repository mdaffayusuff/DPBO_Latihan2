/*Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 2
dalam mata kuliah Design Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

//Include untuk penggunaan string dan list
#include <iostream>
#include <string>
#include <bits/stdc++.h>

//Include untuk menggunaan class SivitasAkademik
#include "SivitasAkademik.cpp"

//Deklarasi std agar tidak perlu menulisnya kembali pada code
using namespace std;

int main(){

    //Deklarasi atribut yang akan digunakan
    string NIK;
    string nama;
    char jenis_kelamin;
    string NIM;
    string prodi;
    string fakultas;
    string asal_universitas;
    string emai_edu;

    //List penampun data
    list<SivitasAkademik> the_list;

    //Data pertama
    NIK = "3122210983";
    nama = "Bambang_Sudiono";
    jenis_kelamin = 'L';
    NIM = "2100689";
    prodi = "Pendidikan_Kimia";
    fakultas = "FPMIPA";
    asal_universitas = "UPI_Bandung";
    emai_edu = "BambangS@UPI.edu";

    //Memasukan data pertama kedalam list
    the_list.push_back(SivitasAkademik(NIK, nama, jenis_kelamin, NIM, prodi, fakultas, asal_universitas, emai_edu));

    //Data kedua
    NIK = "3122210456";
    nama = "Juliana_Septianti";
    jenis_kelamin = 'P';
    NIM = "2109987";
    prodi = "Ilmu_Komputer";
    fakultas = "FPMIPA";
    asal_universitas = "UPI_Bandung";
    emai_edu = "JSeptianti@UPI.edu";

    //Memasukan data kedua kedalam list
    the_list.push_back(SivitasAkademik(NIK, nama, jenis_kelamin, NIM, prodi, fakultas, asal_universitas, emai_edu));
    

    //Mencetak hasil keluaran
    int i = 0;
    for (list<SivitasAkademik>::iterator it = the_list.begin(); it != the_list.end(); it++)
    {
        cout << (i + 1) << ". " << it->get_NIK() << " | " 
        << it->get_NIM() << " | " << it->get_nama() << ", " 
        << it->get_jenis_kelamin() << ", " << it->get_prodi() 
        << ", " << it->get_fakultas() << ", " << it->get_asal_universitas() 
        << ", " << it->get_email_edu() << ", " << '\n';
        i++;
    }
    
    return 0;
}