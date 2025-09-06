#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int pilihan;
    do {
        cout << "Menu Bangun Datar:\n";
        cout << "1. Persegi\n";
        cout << "2. Persegi Panjang\n";
        cout << "3. Lingkaran\n";
        cout << "0. Keluar\n";
        cout << "Pilih bangun datar (0-3): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                // Persegi
                double sisi;
                cout << "Masukkan panjang sisi persegi: ";
                cin >> sisi;
                double keliling = 4 * sisi;
                double luas = sisi * sisi;
                cout << "Keliling Persegi = " << keliling << endl;
                cout << "Luas Persegi = " << luas << endl;
                break;
            }
            case 2: {
                // Persegi Panjang
                double panjang, lebar;
                cout << "Masukkan panjang persegi panjang: ";
                cin >> panjang;
                cout << "Masukkan lebar persegi panjang: ";
                cin >> lebar;
                double keliling = 2 * (panjang + lebar);
                double luas = panjang * lebar;
                cout << "Keliling Persegi Panjang = " << keliling << endl;
                cout << "Luas Persegi Panjang = " << luas << endl;
                break;
            }
            case 3: {
                // Lingkaran
                double jari;
                cout << "Masukkan jari-jari lingkaran: ";
                cin >> jari;
                double keliling = 2 * M_PI * jari;
                double luas = M_PI * pow(jari, 2);
                cout << "Keliling Lingkaran = " << keliling << endl;
                cout << "Luas Lingkaran = " << luas << endl;
                break;
            }
            case 0:
                cout << "Program selesai. Terima kasih!\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
        cout << endl;
    } while (pilihan != 0);

    return 0;
}