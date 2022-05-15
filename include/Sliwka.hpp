//
// Created by Piotr Rutkowski on 14/05/2022.
//

#ifndef BASESKLEPZOWOCAMI2018_V2_SLIWKA_HPP
#define BASESKLEPZOWOCAMI2018_V2_SLIWKA_HPP
#include "iostream"
#include "Owoc.hpp"
#include <sstream>

class Sliwka:public Owoc {
private:
    float waga;
    float cenaZaKilogram;
public:
    float getWaga() const override;

    float getCenaZaKilogram() const override;

    float getCena() override;

    std::string toString() override;
    Sliwka(float waga,float cenaZaKilogram);
    ~Sliwka();
};


#endif //BASESKLEPZOWOCAMI2018_V2_SLIWKA_HPP
