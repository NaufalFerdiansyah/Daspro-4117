#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char n[50];
    int u;
    cout << "PERTEMUAN 3" << endl;
    cout << "NAUFAL FERDIANSYAH WIRAHUTAMA \nA11.2022.14652 \nSMA N 12 SEMARANG" << endl;
    int a = 18;
    float b = 167.5;
    string c ="XL";
    string d ="Otomotif,makan,arsitektur,sejarah";
    cout << "\nUmur           : " << a;
    cout << "\nTinggi Badan   : " << b;
    cout << "\nUkuran Baju    : " << c;
    cout << "\nHobi           : " << d;
    // Menggunakan scanf
    scanf("%s", n);
    cout << endl;
    printf("Hallo %s", n);
    // Menggunakan cin
    cin >> u;
    cout << "NAMA : ";
    cout << ",";
    cout << "Umurku" << u << "Tahun" << endl;

    return 0;
}
