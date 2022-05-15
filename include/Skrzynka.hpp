//
// Created by Piotr Rutkowski on 14/05/2022.
//

#ifndef BASESKLEPZOWOCAMI2018_V2_SKRZYNKA_HPP
#define BASESKLEPZOWOCAMI2018_V2_SKRZYNKA_HPP
#include "Owoc.hpp"
#include "vector"
#include "iostream"
class Skrzynka {
private:
    float maxLadownosc;
    std::vector<Owoc*>owoce;
public:
    bool wlozOwoc(Owoc *owoc);
    bool usunOwoc(Owoc *owoc);
    float pobierzCenaCalkowita();
    float pobierzWagaCalkowita();
    std::string toString();
    Skrzynka(float maxLadownosc);
    ~Skrzynka();
};


#endif //BASESKLEPZOWOCAMI2018_V2_SKRZYNKA_HPP
