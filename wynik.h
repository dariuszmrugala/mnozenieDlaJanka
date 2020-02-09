#ifndef WYNIK_H
#define WYNIK_H
#include "dzialanie.h"

class Wynik
{
public:
    Wynik();
    void add_point();
    void add_point(Dzialanie dzialanie);
    int get_wynik() const;
    void subtract_point();

private:
    int wynik{0};
};

#endif // WYNIK_H
