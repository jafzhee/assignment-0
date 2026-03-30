# Laporan Assignment 0 - Hello World
Pada assignment ini, saya melakukan pembuatan dan modifikasi program sederhana dalam bahasa C++. Program awal diubah agar dapat menerima input nama dari pengguna dan menampilkan kata sapaan sesuai dengan nama yang dimasukkan. 

### Yang saya lakukan untuk membuat program ini adalah:
- Menambahkan variabel bertipe string untuk menyimpan input nama pengguna
- Menggunakan fungsi getline () agar dapat menerima input dengan spasi. Jika hanya menggunakan cin nanti nama yang keinput di program hanya satu kata saja.
- Mengubah output agar dapat menampilkan nama pengguna

### Kode Program
``` C++
#include <iostream>

using namespace std;

int main(int argc, char ** argv) {
    string nama;

    cout << "Masukkan nama anda: ";
    getline(cin, nama);

    cout << "Hello " << nama << endl;

    return 0;
}
```
Program saya kompilasi menggunakan perintah `g++ main.cpp -o MyApp` dan menjalankannya dengan `./MyApp`

### Hasil Program
Contoh output dari program ini: <br>
``` 
Masukkan nama anda: Jauza Hafizhoh
Hello Jauza Hafizhoh
```

