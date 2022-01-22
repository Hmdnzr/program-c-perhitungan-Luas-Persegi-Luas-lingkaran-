#include <iostream>
#include <conio.h>

using namespace std;

//class dan objek

class luas
{
public:
    int sisi;
    float pi = 3.14;
    float l;
    float r;

    int hitungLuas_Persegi(){

        return sisi * sisi;
        }

    int hitungLuas_Lingkaran(){
        l = pi * r * r;

        return l;
    }
};

int main()
{
    int pil;
    luas hitung_luas;

    //object
    backturn:
    cout << "pilih perhitungan (Luas Persegi / Luas lingkaran[1/2]) : ";
    cin >> pil;

    if(pil == 1){
        cout << "Masukan besar sisi : ";
        cin >> hitung_luas.sisi;
        cout << "Sisi : " << hitung_luas.sisi << endl;
        cout << "Luas persegi :" << hitung_luas.hitungLuas_Persegi() << " cm^2" << endl;
    }else if(pil == 2){
        cout << "Masukan besar jari-jari : ";
        cin >> hitung_luas.r;
        cout << "jari-jari : " << hitung_luas.r << endl;
        cout << "Luas Lingkaran : " << hitung_luas.hitungLuas_Lingkaran()  << " cm^2"<< endl; 
    }else{
        cout << "Data yang anda inputkan salah!" << endl;
        cout << "Tekan 'ENTER' untuk melanjutkan..." << endl;
        getch();
        goto backturn;
    }
    return 0;
}

