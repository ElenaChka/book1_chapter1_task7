// программа для перевода километров в мили и футы
//1 миля=1,609344 км т.е. кол-во км поделить на 1,609344
//1 км=3280,8 фут т.е. кол-во км умножить на 3280,8
#include <iostream>
using namespace std;
int main ()
{
    double km;
    const double kmVmil = 1.609344;
    const double futvkm = 3280.8;
    cout << "Vvedite rasstoyanie v kilometrax: ";
    cin >> km;
    cout << "Rasstoyanie v milyax = " << km / kmVmil << endl;
    cout << "Rasstoyanie v futax = " << km * futvkm;

}
