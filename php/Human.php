<?php

/*Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 
dalam mata kuliah Design Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

//Membuat class Human
class Human{

    //Menambahkan attribut yang dibutuhkan
    private $NIK = '';
    private $nama = '';
    private $jenis_kelamin = '-';

    //Fungsi construct
    public function __construct($NIK, $nama, $jenis_kelamin){
        $this->NIK = $NIK;
        $this->nama = $nama;
        $this->jenis_kelamin = $jenis_kelamin;     
    }


    //setter dan getter tiap atribut yang ada pada kelas ini
    public function set_NIK($NIK){
        $this->NIK = $NIK;
    }

    public function set_nama($nama){
        $this->nama = $nama;
    }

    public function set_jenis_kelamin($jenis_kelamin){
        $this->jenis_kelamin = $jenis_kelamin;
    }

    public function get_NIK(){
        return $this->NIK;
    }

    public function get_nama(){
        return $this->nama;
    }

    public function get_jenis_kelamin(){
        return $this->jenis_kelamin;
    }
}