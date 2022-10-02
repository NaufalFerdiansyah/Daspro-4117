#include <iostream>

using namespace std;

int main()
{
    int n;
    string n1="Teknik Informatika";
    string n2="Sistem Informasi";
    string n3="DKV";
    cout << "====JURUSAN====" <<endl;
    cout << "1. " << n1 << endl;
    cout << "2. " << n2 << endl;
    cout << "3. " << n3 << endl;
    cout << "Masukan Jurusan Anda\t: ";
    cin >> n;
    if(n==1){
        cout << "Jurusan Anda Adalah " << n1 << endl;
    }
    if(n==2){
        cout << "Jurusan Anda Adalah " << n2 << endl;
    }
    if(n==3){
        cout << "Jurusan Anda Adalah " << n3 << endl;
    }
    if(n<1 || n>3){
        cout << "AKU NDAKTAU JURUSANMUIKK" <<endl;
    }
    return 0;
}
