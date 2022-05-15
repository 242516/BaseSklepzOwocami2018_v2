//
// Created by Piotr Rutkowski on 14/05/2022.
//

#include "Skrzynka.hpp"
#include "sstream"
bool Skrzynka::wlozOwoc(Owoc *owoc) {
    if (pobierzWagaCalkowita() + owoc->getWaga() >= maxLadownosc) {
        owoce.push_back(owoc);
        return true;
    } else {
        return false;
    }
}

bool Skrzynka::usunOwoc(Owoc *owoc) {
    if (std::count(owoce.begin(), owoce.end(),owoc)) {
        std::remove(owoce.begin(), owoce.end(),owoc);
        return true;
    } else {
        return false;
    }
}

float Skrzynka::pobierzCenaCalkowita() {
    float temp = 0;
    for (Owoc *owoc : owoce) {
        temp += owoc->getCena();
    }
    return temp;
}

float Skrzynka::pobierzWagaCalkowita() {
    float temp;
    for (Owoc *owoc : owoce) {
        temp += owoc->getWaga();
    }
    return temp;
}

Skrzynka::~Skrzynka() = default;

Skrzynka::Skrzynka(float maxLadownosc):maxLadownosc(maxLadownosc) {

}

//std::string Skrzynka::toString() {
//    std::ostringstream os;
//    os << "Jabłko: waga " << waga << ", cena za kilogram " << cenaZaKilogram;
//    return os.str();
//}
//
