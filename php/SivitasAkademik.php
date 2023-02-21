<?php

/*Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 
dalam mata kuliah Design Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

//Membutuhkan file Mahasiswa untuk dijadikan parent
require ('Mahasiswa.php');


//Pepmbuatan kelas SivitasAkdemik dengan parent Mahasiswa
class SivitasAkademik extends Mahasiswa{

    ///Membuat atribut yang dibutuhkan/ditambah dari parent
    private $asal_universitas = "";
    private $email_edu = "";

    //Fungsi construct
    public function __construct($NIK, $nama, $jenis_kelamin, $NIM, $prodi, $fakultas, $asal_universitas, $email_edu)
    {
        parent::__construct($NIK, $nama, $jenis_kelamin, $NIM, $prodi, $fakultas);
        $this->asal_universitas = $asal_universitas;
        $this->email_edu = $email_edu;
    }

    //Setter dan getter tiap attribut yang ada pada clas ini
    public function set_asal_universitas($asal_universitas){
        $this->asal_universitas = $asal_universitas;
    }

    public function set_email_edu($email_edu){
        $this->email_edu = $email_edu;
    }

    public function get_asal_universitas(){
        return $this->asal_universitas;
    }

    public function get_email_edu(){
        return $this->email_edu;
    }
}