#include <iostream>

using namespace std;

int main()
{
    //no5

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << " PROGRAM INI AKAN BERHENTI JIKA ANDA MENGINPUTKAN ANGKA : -99" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    int x;
    for(int x = 0; ;x++){
        cout << "Masukan Nilai Anda : ";
        cin >> x;
        if(x == -99){
            cout << "keluar karena angka input anda -99 (break)";
            break;
        }
    }
    return 0;
}
