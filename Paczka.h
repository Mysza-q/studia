#pragma once
#include <string>

using namespace std;
class Paczka
{
public:
	string data_nadania;
	string adres_nadawcy;
	int waga;

	Paczka(string data_nadania, string adres_nadawcy, int waga);
	Paczka(string data_nadania, string adres_nadawcy);
	Paczka();

	void zmienAdresNadania(string adres);
	int podaj_koszt_nadania();
	void piszDane();
	bool operator==(Paczka p);
	friend istream& operator>>(istream &istr, Paczka &p);
	friend ostream& operator <<(ostream& ostr, Paczka& p);
};

