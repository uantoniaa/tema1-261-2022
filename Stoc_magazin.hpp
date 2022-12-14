//
// Created by Asus on 02/01/2023.
//

#ifndef OOP_STOC_MAGAZIN_HPP
#define OOP_STOC_MAGAZIN_HPP
#include <iostream>
#include <string>
#include "Comanda.hpp"
#include "Pix.hpp"
#include "Caiet.hpp"
#include "Ghiozdan.hpp"
class Stoc_magazin{
    int nrPixuri_stoc;
    int nrGhiozdane_stoc;
    int nrCaiete_stoc;
    double sumaInitiala; // banii care sunt in magazin inainte de comanda
    Pix p;
    Caiet c;
    Ghiozdan g;
    Comanda cmd;
public:

    Stoc_magazin(int nrPixuriStoc, int nrGhiozdaneStoc, int nrCaieteStoc, double sumaInitiala, Pix p,
                 Caiet c, Ghiozdan g, Comanda cmd);
    Stoc_magazin(const Stoc_magazin &other);
    Stoc_magazin &operator=(const Stoc_magazin &other);
    //functie care calculeaza nr de pixuri, acuarele, caiete si ghiozdane ramase dupa comanda
    void stoc_ramas();
    //functie care calculeaza suma de bani din magazin, de dupa comanda si
    //cu cat la suta a crescut suma de bani din magazin fata de ziua precedenta
    double sumaDupaVanzari();
    friend std::ostream& operator<<(std::ostream& COUT,const Stoc_magazin &Stoc_magazin1);

    int getNrPixuriStoc() const;

    int getNrGhiozdaneStoc() const;

    int getNrCaieteStoc() const;

};

#endif //UNTITLED6_STOC_MAGAZIN_HPP
