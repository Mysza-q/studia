#include "Paczka.h"
#include <string>
#include <iostream>




Paczka::Paczka(string data_nadania, string adres_nadawcy, int waga)
{
	this->data_nadania = data_nadania; 
	this->adres_nadawcy = adres_nadawcy;
	this->waga = waga;
}

Paczka::Paczka(string data_nadania, string adres_nadawcy)
{
	this->data_nadania = data_nadania;
	this->adres_nadawcy = adres_nadawcy;
	this->waga = 0;
}

Paczka::Paczka()
{
	this->data_nadania = "";
	this->adres_nadawcy = "";
	this->waga = 0;
}

void Paczka::zmienAdresNadania(std::string adres_nadawcy)
{
	this->adres_nadawcy = adres_nadawcy;
}

int Paczka::podaj_koszt_nadania()
{
	if (waga < 10)
	{
		return 20;
	}
	else if (waga < 50)
	{
		return 30;
	}
	return 50;
	
}

void Paczka::piszDane()
{
	cout << "Data nadania: " << data_nadania << "\nAdres nadawcy: " << adres_nadawcy << "\nWaga: " << waga << endl;
}

bool Paczka::operator ==(const Paczka p)
{
	return this->adres_nadawcy == p.adres_nadawcy && this->waga == p.waga;
}

istream& operator>>(istream& istr, Paczka& p)
{
	cout << "Podaj date nadania: ";
	istr >> p.data_nadania;
	cout << "Podaj adres nadawcy: ";
	istr >> p.adres_nadawcy;
	cout << "Podaj wage paczki: ";
	istr >> p.waga;
	return istr;
}

ostream& operator<<(ostream& ostr, Paczka& p)
{
	ostr << "Data nadania: " << p.data_nadania << "\nAdres nadawcy: " << p.adres_nadawcy << "\nWaga paczki: " << p.waga << endl;
	return ostr;
}
