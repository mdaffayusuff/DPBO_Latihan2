<?php

/*Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 2
dalam mata kuliah Design Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

//Menggunakan class SivitasAkademik untuk objek
require ('SivitasAkademik.php');

//List penampun data
$the_list = array();

//Data pertama
$NIK = "3122210983";
$nama = "Bambang_Sudiono";
$jenis_kelamin = 'L';
$NIM = "2100689";
$prodi = "Pendidikan_Kimia";
$fakultas = "FPMIPA";
$asal_universitas = "UPI_Bandung";
$email_edu = "BambangS@UPI.edu";

//Memasukan data pertama kedalam list
array_push($the_list, new SivitasAkademik($NIK, $nama, $jenis_kelamin, $NIM, $prodi, $fakultas, $asal_universitas, $email_edu));

//Data kedua
$NIK = "3122210456";
$nama = "Juliana_Septianti";
$jenis_kelamin = 'P';
$NIM = "2109987";
$prodi = "Ilmu_Komputer";
$fakultas = "FPMIPA";
$asal_universitas = "UPI_Bandung";
$email_edu = "JSeptianti@UPI.edu";

//Memasukan data kedua kedalam list
array_push($the_list, new SivitasAkademik($NIK, $nama, $jenis_kelamin, $NIM, $prodi, $fakultas, $asal_universitas, $email_edu));

//Membuat table untuk output
$i = 1;
echo "<table border = '2'>";
echo "<tr>";
echo "<th>No.</th>";
echo "<th>NIK</th>";
echo "<th>NIM</th>";
echo "<th>Nama</th>";
echo "<th>Jenis Kelamin</th>";
echo "<th>Prodi</th>";
echo "<th>Fakultas</th>";
echo "<th>Asal Universitas</th>";
echo "<th>Email .edu</th>";
echo "</tr>";

foreach($the_list as $data){
    echo "<tr>";
    echo "<td>". $i ."</td>";
    echo "<td>". $data->get_NIK() ."</td>";
    echo "<td>". $data->get_NIM() ."</td>";
    echo "<td>". $data->get_nama() ."</td>";
    echo "<td>". $data->get_jenis_kelamin() ."</td>";
    echo "<td>". $data->get_prodi() ."</td>";
    echo "<td>". $data->get_fakultas() ."</td>";
    echo "<td>". $data->get_asal_universitas() ."</td>";
    echo "<td>". $data->get_email_edu() ."</td>";
    echo "</tr>";
    ++$i;
}
echo "</table>";
