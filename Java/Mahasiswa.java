/*Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 
dalam mata kuliah Design Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

//Berikut class untuk 'Mahasiswa' yang menjadi turunan dari class 'Human'
public class Mahasiswa extends Human {
    private String NIM;
    private String prodi;
    private String fakultas;

    //Empty Constructor untuk 'Mahasiswa'
    public Mahasiswa() {
        super("", "", '-');
        NIM = "";
        prodi = "";
        fakultas = "";
    }
    
    //Parameter Constructor untuk 'Mahasiswa'
    public Mahasiswa(String NIK, String nama, char jenis_kelamin, String NIM, String prodi, String fakultas) {
        super(NIK, nama, jenis_kelamin);
        this.NIM = NIM;
        this.prodi = prodi;
        this.fakultas = fakultas;
    }

    //Setter dan Getter dari Mahasiswa
    public void set_NIM(String NIM) {
        this.NIM = NIM;
    }

    public void set_prodi(String prodi) {
        this.prodi = prodi;
    }

    public void set_fakultas(String fakultas) {
        this.fakultas = fakultas;
    }

    public String get_NIM() {
        return NIM;
    }
    
    public String get_prodi() {
        return prodi;
    }

    public String get_fakultas() {
        return fakultas;
    }
}
