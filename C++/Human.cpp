/*Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 2
dalam mata kuliah Design Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

//Include untuk penggunaan string
#include <iostream>
#include <string>

//Deklarasi std agar tidak perlu menulisnya kembali pada code
using namespace std;

//Membuat class Human
class Human
{
protected:

    //Menambahkan attribut yang dibutuhkan
    string NIK;
    string nama;
    char jenis_kelmain;

public:

    //Fungsi construct kosong
    Human(){
        this->NIK = "";
        this->nama = "";
        this->jenis_kelmain = '-';
    }

    //Fungsi construct dengan parameter
    Human(string NIK, string nama, char jenis_kelamin){
        this->NIK = NIK;
        this->nama = nama;
        this->jenis_kelmain - jenis_kelamin;
    }


    //setter dan getter tiap atribut yang ada pada kelas ini
    void set_NIK(string NIK){
        this->NIK = NIK;
    }

    void set_nama(string nama){
        this->nama = nama;
    }

    void set_jenis_kelamin(char jenis_kelamin){
        this->jenis_kelmain = jenis_kelamin;
    }

    string get_NIK(){
        return this->NIK;
    }

    string get_nama(){
        return this->nama;
    }

    char get_jenis_kelamin(){
        return this->jenis_kelmain;
    }

    ~Human(){

    }
};
