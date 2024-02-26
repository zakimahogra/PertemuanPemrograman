

#include <iostream>
using namespace std;


int main()
{
    //begin
        // numerik nJejari, nLuas
        // display 'Masukan jejari'
        // accept nJejari
        // compute nLuas = 3,14 * r * r
        // display 'Luasnya' + nLuas
    //end
    double nJejari, nLuas;
    cout << "Masukin Jejari = ";
    cin >> nJejari;
    nLuas = 3.14 * nJejari * nJejari;
    cout << "Luasnya = " << nLuas << endl;


    system("pause");
}

