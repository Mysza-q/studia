

#include <iostream>
#include "Paczka.h"

using namespace std;



int main()
{
    Paczka p1("2022-06-25", "ul. Sucharskiego 2, Rzeszow", 15), p2("2022-06-25", "ul. Sucharskiego 2, Rzeszow");
    p1.zmienAdresNadania("ul. Strzyzowska 12, Rzeszow");
    cout << " Koszt nadania paczki wynosi: " << p1.podaj_koszt_nadania();
    p2.piszDane();
    Paczka p3;
    cin >> p3;
    if (p1 == p2)
        cout << "Paczki maja taki sam adres nadania i wage";
    else
        cout << "Paczki sa rozne";
}

