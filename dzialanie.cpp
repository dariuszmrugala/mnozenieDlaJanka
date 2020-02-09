#include "dzialanie.h"
#include "dzialanie.h"

Dzialanie::Dzialanie()
    : wynik{0}, mnoznik{0}, mnozna{0}, generate_from{0}, generate_to{0}
{

    Dzialanie::regenerate();
}

Dzialanie::Dzialanie(PoziomZakres poziomzakres) : generate_from{poziomzakres.get_poziom_od()}, generate_to{poziomzakres.get_poziom_do()}
{
    Dzialanie::regenerate();
}

void Dzialanie::regenerate()
{
    mnozna = QRandomGenerator::global()->bounded(generate_from,generate_to);
    mnoznik = QRandomGenerator::global()->bounded(generate_from,generate_to);
    wynik=mnozna*mnoznik;

}

void Dzialanie::regenerate(PoziomZakres poziomzakres)
{
    mnozna = QRandomGenerator::global()->bounded(poziomzakres.get_poziom_od(),poziomzakres.get_poziom_do()+1);
    mnoznik = QRandomGenerator::global()->bounded(poziomzakres.get_poziom_od(),poziomzakres.get_poziom_do()+1);
    wynik=mnozna*mnoznik;
}

int Dzialanie::get_mnozna() const
{
    return mnozna;
}

int Dzialanie::get_mnoznik() const
{
    return mnoznik;
}

int Dzialanie::get_wynik() const
{
    return wynik;
}

int Dzialanie::get_generate_from() const
{
    return generate_from;
}

int Dzialanie::get_generate_to() const
{
    return generate_to;
}
