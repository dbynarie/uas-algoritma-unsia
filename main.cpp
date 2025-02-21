
// Prodi	: PJJ Informatika
// Nama Mahasiswa	: Deni Rismanto
// NIM	: 230401010301


#include <iostream> // Library standar untuk input dan output
using namespace std;

int main() {
    // Deklarasi variabel untuk menyimpan dua bilangan dan pilihan operasi
    int numb1, numb2, choice;
    
    // Meminta input dari pengguna untuk bilangan pertama
    cout << "Bilangan 1: ";
    cin >> numb1; // Menyimpan input ke dalam variabel numb1
    
    // Meminta input dari pengguna untuk bilangan kedua
    cout << "Bilangan 2: ";
    cin >> numb2; // Menyimpan input ke dalam variabel numb2
    
    // Menampilkan daftar pilihan operasi yang tersedia
    cout << "\n(Pilihan : 1=Tambah, 2=Kurang, 3=Kali)\n";
    cout << "Masukan pilihan : ";
    cin >> choice; // Menyimpan input pilihan operasi dari pengguna
    
    // Menampilkan hasil perhitungan berdasarkan pilihan pengguna
    cout << "\nHasilnya adalah : ";
    switch (choice) {
        case 1:
            // Jika pengguna memilih 1, lakukan operasi penjumlahan
            cout << numb1 << " + " << numb2 << " = " << numb1 + numb2 << endl;
            break; // Menghentikan eksekusi switch setelah operasi selesai
        case 2:
            // Jika pengguna memilih 2, lakukan operasi pengurangan
            cout << numb1 << " - " << numb2 << " = " << numb1 - numb2 << endl;
            break; // Menghentikan eksekusi switch setelah operasi selesai
        case 3:
            // Jika pengguna memilih 3, lakukan operasi perkalian
            cout << numb1 << " * " << numb2 << " = " << numb1 * numb2 << endl;
            break; // Menghentikan eksekusi switch setelah operasi selesai
        default:
            // Jika pengguna memasukkan angka selain 1, 2, atau 3, tampilkan pesan kesalahan
            cout << "Pilihan tidak valid! Harap pilih 1, 2, atau 3." << endl;
    }
    
    return 0; // Mengembalikan nilai 0 sebagai tanda bahwa program berjalan dengan sukses
}
