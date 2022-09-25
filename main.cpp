#include <iostream>

using namespace std;

int main()
{
    cout << "Mencari Luas Lingkaran" << endl;
    cout << "\nSoal" << endl;
    cout << "Diketahui lingkaran mempunyai diameter 20cm,luas dari lingakaran tersebut adalah... (n=3,14)" <<endl;
    cout << "\nRumus" << endl;
    cout << "Phi x r x r" << endl;
    cout << "\nMencari jari-jari" << endl;
    cout << "\nJari-jari(r)\t: 1/2 x 20cm" << endl;
    float a, b, c, hasil;
    a=1;
    b=2;
    c=20;
    hasil = a / b * c;
    cout << "Jari-jari(r)\t: " << hasil << endl;
    cout << "\nJawaban" << endl;
    cout << "Luas lingkaran\t\t: 3,14 x 10 x 10" << endl;
    float phi, r, jawaban;
    phi = 3.14;
    r = 10;
    jawaban = phi * r * r;
    cout << "Maka Luas Lingkaran\t: " << jawaban << endl;

    return 0;
}
