#include "wynik.h"

Wynik::Wynik()
{

}

void Wynik::add_point()
{
    wynik++;
}

void Wynik::add_point(Dzialanie dzialanie)
{
    wynik += abs(dzialanie.get_wynik()/10);
}



int Wynik::get_wynik() const
{
    return wynik;
}

void Wynik::subtract_point()
{
    wynik--;
}
