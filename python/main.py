# Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 2
# dalam mata kuliah Design Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
# yang telah dispesifikasikan. Aamiin. 

#Menggunakan class SivitasAkademik untuk objek
from SivitasAkademik import SivitasAkademik

#List penampun data
theList = []

#Data pertama
NIK = "3122210983"
nama = "Bambang_Sudiono"
jenis_kelamin = 'L'
NIM = "2100689"
prodi = "Pendidikan_Kimia"
fakultas = "FPMIPA"
asal_universitas = "UPI_Bandung"
email_edu = "BambangS@UPI.edu"

#Memasukan data pertama kedalam list
theList.append(SivitasAkademik(NIK, nama, jenis_kelamin, NIM, prodi, fakultas, asal_universitas, email_edu))

#Data kedua
NIK = "3122210456"
nama = "Juliana_Septianti"
jenis_kelamin = 'P'
NIM = "2109987"
prodi = "Ilmu_Komputer"
fakultas = "FPMIPA"
asal_universitas = "UPI_Bandung"
email_edu = "JSeptianti@UPI.edu"

#Memasukan data kedua kedalam list
theList.append(SivitasAkademik(NIK, nama, jenis_kelamin, NIM, prodi, fakultas, asal_universitas, email_edu))

#Pencetakan output
print("vv Berikut list data yang sudah dimasukan vv")
i = 1
for data in theList:
            print(str(i) + ".", data.get_NIK(), "|", data.get_NIM(), "|", 
                  data.get_nama(), ",", data.get_jenis_kelamin(), ",", 
                  data.get_prodi(), ",", data.get_fakultas(), ",", 
                  data.get_asal_universitas(), ",", data.get_email_edu())
            i += 1 