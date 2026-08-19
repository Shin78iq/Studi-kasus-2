#include <iostream>
using namespace std;

int main()  {

    float nilai_teori, nilai_praktik, rata_rata;
    int kehadiran;
    bool status_lulus;

    cout << "=== SISTEM PENILAIAN SISWA ===" << endl;
    
    
    cout << "Masukkan Nilai Teori (0-100)      :";
    cin >> nilai_teori;
    
    cout << "Masukkan Nilai Praktik (0-100) : ";
    cin >> nilai_praktik;
    
    cout << "Masukkan Persentase Kehadiran (%) : ";
    cin >> kehadiran;

   
    rata_rata = (nilai_teori + nilai_praktik) / 2.0;

    
    status_lulus = (rata_rata >= 75) && (kehadiran >= 80);

    
    cout << "\n--- HASIL EVALUASI ---" << endl;
    cout << "Nilai Rata-rata : " << rata_rata << endl;
    cout << "Kehadiran       : " << kehadiran << " %" << endl;
    
    
    cout << "Status Kelulusan (1=Lulus, 0=Gagal) : " << status_lulus << endl;

    return 0;
}