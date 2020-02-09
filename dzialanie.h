#ifndef DZIALANIE_H
#define DZIALANIE_H

#include <QRandomGenerator>
#include "poziomzakres.h"

class Dzialanie
{
public:
    Dzialanie();
    Dzialanie(PoziomZakres poziomzakres);

    void regenerate();
    void regenerate(PoziomZakres poziomzakres);

    int get_mnozna() const;
    int get_mnoznik() const;
    int get_wynik() const;

    int get_generate_from() const;
    int get_generate_to() const;

private:
    int wynik;
    int mnoznik;
    int mnozna;

    int generate_from;
    int generate_to;
};

#endif // DZIALANIE_H
