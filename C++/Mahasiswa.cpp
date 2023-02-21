/*Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 2
dalam mata kuliah Design Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

//Include untuk penggunaan string dan class Human
#include <iostream>
#include <string>
#include "Human.cpp"

//Deklarasi std agar tidak perlu menulisnya kembali pada code
using namespace std;

//Membuat class Mahasiswa dengan parent Human
class Mahasiswa : public Human
{
protected:

    //Membuat atribut yang dibutuhkan/ditambahkan dari parent
    string NIM;
    string prodi;
    string fakultas;

public:
    
    //Fungsi construct kosong
    Mahasiswa(){
        this->NIK = "";
        this->nama = "";
        this->jenis_kelmain = '-';
        this->NIM = "";
        this->prodi = "";
        this->fakultas = "";
    }

    //Fungsi construct dengan parameter
    Mahasiswa(string NIK, string nama, char jenis_kelamin, string NIM, string prodi, string fakultas){
        this->NIK = NIK;
        this->nama = nama;
        this->jenis_kelmain =  jenis_kelamin;
        this->NIM = NIM;
        this->prodi = prodi;
        this->fakultas = fakultas;
    }


    //Setter dan getter tiap atribut yang ada di class ini
    void set_NIM(string NIM)
    {
        this->NIM = NIM;
    }

    void set_prodi(string prodi){
        this->prodi = prodi;
    }

    void set_fakultas(string fakultas){
        this->fakultas = fakultas;
    }

    string get_NIM(){
        return this->NIM;
    }

    string get_prodi(){
        return this->prodi;
    }

    string get_fakultas(){
        return this->fakultas;
    }

    ~Mahasiswa(){

    }
};