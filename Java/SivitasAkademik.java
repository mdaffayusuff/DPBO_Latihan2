/*Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543mengerjakan evaluasi Latihan 
dalam mata kuliah Design Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

//Berikut class untuk 'SivitasAkademik' yang menjadi turunan dari class 'Mahasiswa'
public class SivitasAkademik extends Mahasiswa{
    private String asal_universitas;
    private String email_edu;
    
    //Empty Constructor untuk 'Mahasiswa'
    public SivitasAkademik() {
        super("", "", '-', "", "", "");
        asal_universitas = "";
        email_edu = "";
    }
    
    //Parameter Constructor untuk 'Mahasiswa'
    public SivitasAkademik(String NIK, String nama, char jenis_kelamin, String NIM, String prodi, String fakultas,
            String asal_universitas, String email_edu) {
        super(NIK, nama, jenis_kelamin, NIM, prodi, fakultas);
        this.asal_universitas = asal_universitas;
        this.email_edu = email_edu;
    }

    //Setter dan Getter dari SivitasAkademik
    public void set_asal_universitas(String asal_universitas) {
        this.asal_universitas = asal_universitas;
    }

    public void set_email_edu(String email_edu) {
        this.email_edu = email_edu;
    }

    public String get_asal_universitas() {
        return asal_universitas;
    }

    public String get_email_edu() {
        return email_edu;
    }
}
