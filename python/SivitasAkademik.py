# Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 2
# dalam mata kuliah Design Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
# yang telah dispesifikasikan. Aamiin. 

#Menggunakan class Mahasiswa untuk dijadikan parent
from Mahasiswa import Mahasiswa

#Pepmbuatan kelas SivitasAkdemik dengan parent Mahasiswa
class SivitasAkademik(Mahasiswa):
    
    #Membuat atribut yang dibutuhkan/ditambah dari parent
    __asal_universitas = ""
    __email_edu = ""
    
    #Fungsi construct
    def __init__ (self, NIK, nama, jenis_kelamin, NIM, prodi, fakultas, asal_universitas, email_edu):
        super().__init__(NIK, nama, jenis_kelamin, NIM, prodi, fakultas)
        self.__asal_universitas = asal_universitas
        self.__email_edu = email_edu
             
    #Setter dan getter tiap attribut yang ada pada clas ini
    def set_asal_universitas(self, asal_universitas):
        self.__asal_universitas = asal_universitas
    
    def set_email_edu(self, email_edu):
        self.__email_edu = email_edu;
        
    def get_asal_universitas(self):
        return self.__asal_universitas
    
    def get_email_edu(self):
        return self.__email_edu