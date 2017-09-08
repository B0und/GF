#include <iostream>
//#include <D:\C++\GF_CLASS\GF_test\GF.h>
#include <GF.h>
using namespace std;

int main()
{
    GF<4> var; // default ctor

    GF<7> var1(6); // ctor with argument
    GF<7> var2(8); // checks bounds

    cout << "Order of current Galois Field = ";
    var1.show_order();

    cout << "var1 + var 2 = ";
    (var1 + var2).show();

    cout << "var1 - var 2 = ";
    (var1 - var2).show();

    cout << "var1 * var 1 = ";
    (var1 * var1).show();

    cout << "var1 / var 2 = ";
    (var1 / var2).show();


    return 0;
}
