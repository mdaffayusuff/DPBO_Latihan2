<?php

/*Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 2
dalam mata kuliah Design Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

//Membutuhkan file Human untuk dijadikan parent
require ('Human.php');

//Membuat class Mahasiswa dengan parent Human
class Mahasiswa extends Human{

    //Membuat atribut yang dibutuhkan/ditambahkan dari parent
    private $NIM = '';
    private $prodi = '';
    private $fakultas = '';

    //Fungsi construct
    public function __construct($NIK, $nama, $jenis_kelamin, $NIM, $prodi, $fakultas)
    {
        parent::__construct($NIK, $nama, $jenis_kelamin);
        $this->NIM = $NIM;
        $this->prodi = $prodi;
        $this->fakultas = $fakultas;  
    }


    //Setter dan getter tiap atribut yang ada di class ini
    public function set_NIM($NIM){
        $this->NIM = $NIM;
    }

    public function set_prodi($prodi){
        $this->prodi = $prodi;
    }

    public function set_fakultas($fakultas){
        $this->fakultas = $fakultas;
    }

    public function get_NIM(){
        return $this->NIM;
    }

    public function get_prodi(){
        return $this->prodi;
    }

    public function get_fakultas(){
        return $this->fakultas;
    }
}
