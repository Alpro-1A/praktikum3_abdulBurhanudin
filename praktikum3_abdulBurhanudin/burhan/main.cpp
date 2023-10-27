#include <iostream>
// PROGRAM MENENTUKAN SKOR DENGAN OPERATOR PERBANDINGAN

// Start
#include <iostream>

using namespace std;

// Preparation
int main() {
    int skor;
    cout << "Masukkan skor Anda: ";
    cin >> skor;   // input nilai skor

    if (skor >= 90 &&  skor <= 100) { // proses1
    cout << "Selamat! Anda mendapatkan predikat A." << endl;   // Output yang akan dihasilkan jika skor lebih dari 90 akan mendapat predikat A.
    } else if (skor >= 80 && skor < 90) { //proses2
    cout << "Anda mendapatkan Predikat B." << endl;    // Output yang akan dihasilkan jika skor lebih dari atau sama dengan 80 dan kurang dari 89 akan mendapat predikat B.
    } else if (skor >= 70 && skor < 80) { //proses3
    cout << "Anda mendapatkan Predikat C." << endl;    // Output yang akan dihasilkan jika skor lebih dari atau sama dengan 70 dan kurang dari 79 akan mendapat predikat C.
    } else if (skor >= 60 && skor < 70) { //proses4
    cout << "Anda mendapatkan Predikat D." << endl;    // Output yang akan dihasilkan jika skor lebih dari atau sama dengan 60 dan kurang dari 69 akan mendapat predikat D.
    } else if (skor >= 0 && skor < 60) { //proses5
    cout << "Anda mendapatkan Predikat E." << endl;    // Output yang akan dihasilkan jika skor kurang dari 60 akan mendapat predikat E.
    } else { //proses terakhir
    cout << "Masukan skor yang benar!!"; // Output yang akan dihasilkan jika Input di luar skor yang telah ditentukan.
    }

    return 0; // End
}
