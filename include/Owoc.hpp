//
// Created by Piotr Rutkowski on 14/05/2022.
//

#ifndef BASESKLEPZOWOCAMI2018_V2_OWOC_HPP
#define BASESKLEPZOWOCAMI2018_V2_OWOC_HPP
#include "iostream"

class Owoc {
public:
    virtual float getWaga() const;

    virtual float getCenaZaKilogram() const;

    virtual std::string toString();

    virtual float getCena();
};


#endif //BASESKLEPZOWOCAMI2018_V2_OWOC_HPP
