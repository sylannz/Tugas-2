#include <iostream>
#include <string>

int main() {
    std::string namaSiswa;
    double nilaiKeaktifan, nilaiTugas, nilaiUjian;
    double nilaiMurniKeaktifan, nilaiMurniTugas, nilaiMurniUjian, nilaiAkhir;

    // Input data siswa
    std::cout << "Masukkan nama siswa: ";
    getline(std::cin, namaSiswa);
    std::cout << "Masukkan nilai keaktifan: ";
    std::cin >> nilaiKeaktifan;
    std::cout << "Masukkan nilai tugas: ";
    std::cin >> nilaiTugas;
    std::cout << "Masukkan nilai ujian: ";
    std::cin >> nilaiUjian;

    // Proses perhitungan nilai murni
    nilaiMurniKeaktifan = nilaiKeaktifan * 0.20;
    nilaiMurniTugas = nilaiTugas * 0.50;
    nilaiMurniUjian = nilaiUjian * 0.30;

    // Menghitung nilai akhir
    nilaiAkhir = nilaiMurniKeaktifan + nilaiMurniTugas + nilaiMurniUjian;

    // Menampilkan hasil
    std::cout << "Nilai akhir untuk " << namaSiswa << " adalah: " << nilaiAkhir << std::endl;

    return 0;
}
