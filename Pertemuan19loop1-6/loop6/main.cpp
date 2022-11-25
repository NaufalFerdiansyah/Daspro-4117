#include <iostream>

using namespace std;

int main()
{
    int max, min, i;
    for(i = 0;;i++){
        cout << "Masukan Nilai Anda : ";
        cin >> i;
        if(i > max){
            max = i;
        }
        else if(i < min && i != -99){
            min = i;
        }
        else if(i == -99){
            cout << "Max    : " << max << endl;
            cout << "Min    : " << min << endl;
            break;
        }
    }
    return 0;
}
