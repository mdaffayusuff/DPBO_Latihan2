# Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 2
# dalam mata kuliah Design Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
# yang telah dispesifikasikan. Aamiin. 

#Menggunakan class Human untuk dijadikan parent
from Human import Human

#Membuat class Mahasiswa dengan parent Human
class Mahasiswa(Human):
    
    #Membuat atribut yang dibutuhkan/ditambahkan dari parent
    __NIM = ""
    __prodi = ""
    __fakultas = ""
    
    
    #Fungsi construct
    def __init__(self, NIK, nama, jenis_kelamin, NIM, prodi, fakultas =""):
        super().__init__(NIK, nama, jenis_kelamin)
        self.__NIM = NIM
        self.__prodi = prodi
        self.__fakultas = fakultas
        
    
    #Setter dan getter tiap atribut yang ada di class ini
    def set_NIM(self, NIM):
        self.__NIM = NIM
    
    def set_prodi(self, prodi):
        self.__prodi = prodi
        
    def set_fakultas(self, fakultas):
        self.__fakultas = fakultas
        
    def get_NIM(self):
        return self.__NIM
    
    def get_prodi(self):
        return self.__prodi
    
    def get_fakultas(self):
        return self.__fakultas