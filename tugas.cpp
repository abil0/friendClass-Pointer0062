#include <iostream>
using namespace std;

class LayangLayang; 


class BelahKetupat {
    private:
    double d1, d2, sisi;

public:
    void input() {
        cout << "\n--- Input Data Belah Ketupat ---" << endl;
        cout << "Masukkan panjang diagonal 1 : "; cin >> d1;
        cout << "Masukkan panjang diagonal 2 : "; cin >> d2;
        cout << "Masukkan panjang sisi       : "; cin >> sisi;
    }
      
    double luas() {
        return 0.5 * d1 * d2;
    }
    
    double keliling() {
        return 4 * sisi;
    }
    void output() {
        cout << "\n--- Hasil Belah Ketupat ---" << endl;
        cout << "Luas     : " << luas() << endl;
        cout << "Keliling : " << keliling() << endl;
    }
    
    double hitungKelilingLayangLayang(LayangLayang& L);
};

class LayangLayang {
private:
    double d1, d2, sisiPendek, sisiPanjang;









 



