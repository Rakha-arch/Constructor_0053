#include <iostream>
#include <string>
using namespace std;

class Mahasiswa; // Forward declaration

class Dosen {
private:
    string nama;
    string NIDN;
    string pangkat;
    float gaji;

    friend class Staff;
    friend float lihatGajiStaff(class Staff* s); // Fungsi friend eksternal
public:
    Dosen(string n, string idn, string p, float g)
        : nama(n), NIDN(idn), pangkat(p), gaji(g) {}

    void beriNilai(Mahasiswa* m, float nilai); // Dapat mengakses atribut Mahasiswa
    void tampil();
};

class Mahasiswa {
 {}

    void tampil() {
       
    }
};

void Dosen::beriNilai(Mahasiswa* m, float nilai) {
 
}

void Dosen::tampil() {
   
}

class Staff {

};

float lihatGajiStaff(Staff* s) {
    
}

int main() {
   
}
