#ifndef POZIOMZAKRES_H
#define POZIOMZAKRES_H


class PoziomZakres
{
public:
    PoziomZakres();
    int get_poziom_od() const;
    int get_poziom_do() const;
    void set_poziom_od(int value);
    void set_poziom_do(int value);
    int get_roznica() const;

private:
    int poziom_od;
    int poziom_do;
    static constexpr int roznica = 4;
};

#endif // POZIOMZAKRES_H
