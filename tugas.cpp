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
    public:
    void input() {
        cout << "\n--- Input Data Layang-Layang ---" << endl;
        cout << "Masukkan panjang diagonal 1 : "; cin >> d1;
        cout << "Masukkan panjang diagonal 2 : "; cin >> d2;
        cout << "Masukkan panjang sisi pendek: "; cin >> sisiPendek;
        cout << "Masukkan panjang sisi pnjng : "; cin >> sisiPanjang;
    }

    
    double luas() {
        return 0.5 * d1 * d2;
    }
 
    double keliling() {
        return 2 * (sisiPendek + sisiPanjang);
    }
       
    void output() {
        cout << "\n--- Hasil Layang-Layang ---" << endl;
        cout << "Luas     : " << luas() << endl;
        cout << "Keliling : " << keliling() << endl;
    }

   
    friend double BelahKetupat::hitungKelilingLayangLayang(LayangLayang& L);
};

double BelahKetupat::hitungKelilingLayangLayang(LayangLayang& L) {
    
    return 2 * (L.sisiPendek + L.sisiPanjang);
}

int main() {

    BelahKetupat objBelahKetupat;
    LayangLayang objLayangLayang;

    objBelahKetupat.input();
    objBelahKetupat.output();

    objLayangLayang.input();
    objLayangLayang.output();

    cout << "\n--- Uji Coba Friend Method ---" << endl;
    cout << "Menghitung keliling Layang-Layang menggunakan method milik Belah Ketupat: " << endl;
    
    double kelilingFriend = objBelahKetupat.hitungKelilingLayangLayang(objLayangLayang);
    
    cout << "Hasil Keliling (via Friend) : " << kelilingFriend << endl;

    return 0;
}
















 



