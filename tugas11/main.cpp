#include <iostream>

using namespace std;


int main()
{
    /*
    std::cout << "Fibonacci less than 100\n";
    int a = 100;
    do {
        if (a >= 0) {
            std::cout << "\n" << a;
            a--;
        }
    } while (a >= 0);
    */
    int n = 100, t1 = 0, t2 = 1, result;
    result = t1 + t2;

    while (result <= n)
    {
        std::cout << result << "\n";
        t1 = t2;
        t2 = result;
        result = t1 + t2;
    }
    return 0;
}
