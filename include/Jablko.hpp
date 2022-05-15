//
// Created by Piotr Rutkowski on 14/05/2022.
//

#ifndef BASESKLEPZOWOCAMI2018_V2_JABLKO_HPP
#define BASESKLEPZOWOCAMI2018_V2_JABLKO_HPP
#include "iostream"
#include <sstream>
#include "Owoc.hpp"
class Jablko:public Owoc {
private:
    float waga;
public:
    float getWaga() const override;

    float getCenaZaKilogram() const override;

    float getCena() override;
private:
    float cenaZaKilogram;
public:
    std::string toString() override;
    Jablko(float waga,float cenaZaKilogram);
    ~Jablko();
};


#endif //BASESKLEPZOWOCAMI2018_V2_JABLKO_HPP
