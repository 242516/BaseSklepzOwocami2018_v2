//
// Created by Piotr Rutkowski on 14/05/2022.
//


#include "Jablko.hpp"

std::string Jablko::toString() {
    std::ostringstream os;
    os << "Jabłko: waga " << waga << ", cena za kilogram " << cenaZaKilogram;
    return os.str();
}

Jablko::Jablko(float waga, float cenaZaKilogram):waga(waga), cenaZaKilogram(cenaZaKilogram) {

}

Jablko::~Jablko() = default;

float Jablko::getWaga() const {
    return waga;
}

float Jablko::getCenaZaKilogram() const {
    return cenaZaKilogram;
}

float Jablko::getCena() {
    return waga * cenaZaKilogram;
}
