/*Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 
dalam mata kuliah Design Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

//Import fungsi Array list
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        //Data-data yang akan dimasukan
        String NIK;
        String nama;
        char jenis_kelamin;
        String NIM;
        String prodi;
        String fakultas;
        String asal_universitas;
        String emai_edu;

        //Membuat list yang berisi object class 'SivitasAkademik'
        ArrayList<SivitasAkademik> TheList = new ArrayList<>();
        
        //Pengisian data
        NIK = "3122210983";
        nama = "Bambang_Sudiono";
        jenis_kelamin = 'L';
        NIM = "2100689";
        prodi = "Pendidikan_Kimia";
        fakultas = "FPMIPA";
        asal_universitas = "UPI_Bandung";
        emai_edu = "BambangS@UPI.edu";

        //Penambahan object kedalam list
        TheList.add(new SivitasAkademik(NIK, nama, jenis_kelamin, NIM, prodi, fakultas, asal_universitas, emai_edu));
        
        //Pengisian data ke-2
        NIK = "3122210456";
        nama = "Juliana_Septianti";
        jenis_kelamin = 'P';
        NIM = "2109987";
        prodi = "Ilmu_Komputer";
        fakultas = "FPMIPA";
        asal_universitas = "UPI_Bandung";
        emai_edu = "JSeptianti@UPI.edu";
        
        //Penambahan object kedalam list
        TheList.add(new SivitasAkademik(NIK, nama, jenis_kelamin, NIM, prodi, fakultas, asal_universitas, emai_edu));
        
        //Output
        System.out.println("vv Berikut list data yang sudah dimasukan vv");

        for (int i = 0; i < TheList.size(); i++) {
            System.out.println(
                    Integer.toString(i + 1) + ". " + TheList.get(i).get_NIK() + " | "
                            + TheList.get(i).get_NIM() + " | "
                            + TheList.get(i).get_nama() + " ("
                            + TheList.get(i).get_jenis_kelamin() + "), "
                            + TheList.get(i).get_prodi() + ", "
                            + TheList.get(i).get_fakultas() + ", "
                            + TheList.get(i).get_asal_universitas() + ", "
                            + TheList.get(i).get_email_edu());
        }
    }
}
