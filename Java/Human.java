/*Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 
dalam mata kuliah Design Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

//Berikut class untuk 'Human' yang menjadi base class
public class Human {

    //Atribut dari 'Human'
    private String NIK;
    private String nama;
    private char jenis_kelamin;

    //Empty Construtor untuk 'Human'
    public Human() {
        NIK = "";
        nama = "";
        jenis_kelamin = '-';
    }
    
    //Parameter Construtor untuk 'Human'
    public Human(String NIK, String nama, char jenis_kelamin) {
        this.NIK = NIK;
        this.nama = nama;
        this.jenis_kelamin = jenis_kelamin;
    }


    //Setter dan Getter pada class 'Human'
    public void set_NIK(String NIK){
        this.NIK = NIK;
    }

    public void set_nama(String nama){
        this.nama = nama;
    }

    public void set_jenis_kelamin(char jenis_kelamin){
        this.jenis_kelamin = jenis_kelamin;
    }

    public String get_NIK(){
        return this.NIK;
    }

    public String get_nama(){
        return this.nama;
    }

    public char get_jenis_kelamin(){
        return this.jenis_kelamin;
    }
}
