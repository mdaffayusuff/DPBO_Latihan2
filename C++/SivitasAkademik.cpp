/*Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 2
dalam mata kuliah Design Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

//Include untuk penggunaan string dan class Mahasiswa

#include <iostream>
#include <string>
#include "Mahasiswa.cpp"

//Deklarasi std agar tidak perlu menulisnya kembali pada code
using namespace std;



class SivitasAkademik : public Mahasiswa
{
protected:

    ///Membuat atribut yang dibutuhkan/ditambah dari parent
    string asal_universitas;
    string email_edu;

public:

    //Fungsi construct
    SivitasAkademik(){
        this->NIK = "";
        this->nama = "";
        this->jenis_kelmain = '-';
        this->NIM = "";
        this->prodi = "";
        this->fakultas = "";
        this->asal_universitas = "";
        this->email_edu = "";
    }

    //Fungsi construct dengan parameter
    SivitasAkademik(string NIK, string nama, char jenis_kelamin, string NIM, string prodi, string fakultas, string asal_universitas, string email_edu){
        this->NIK = NIK;
        this->nama = nama;
        this->jenis_kelmain =  jenis_kelamin;
        this->NIM = NIM;
        this->prodi = prodi;
        this->fakultas = fakultas;
        this->asal_universitas = asal_universitas;
        this->email_edu = email_edu;
    }

    //Setter dan getter tiap attribut yang ada pada class ini
    void set_asal_universitas(string asal_universitas){
        this->asal_universitas = asal_universitas;
    }

    void set_email_edu(string email_edu){
        this->email_edu = email_edu;
    }

    string get_asal_universitas(){
        return this->asal_universitas;
    }
    
    string get_email_edu(){
        return this->email_edu;
    }

    ~SivitasAkademik(){

    }
};
