#include "poziomzakres.h"

PoziomZakres::PoziomZakres():poziom_od{2}, poziom_do{6}
{

}

int PoziomZakres::get_poziom_od() const
{
    return poziom_od;
}

int PoziomZakres::get_poziom_do() const
{
    return poziom_do;
}

void PoziomZakres::set_poziom_od(int value)
{
    poziom_od = value;
}

void PoziomZakres::set_poziom_do(int value)
{
    poziom_do = value;
}

int PoziomZakres::get_roznica() const
{
    return roznica;
}
