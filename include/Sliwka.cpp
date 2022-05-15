//
// Created by Piotr Rutkowski on 14/05/2022.
//


//Dla klas owoców metoda toString()ma zwracać ciąg znaków z tekstowym opisem obiektu.
//Opis obiektu musi zawierać nazwę klasy oraz nazwy i wartości wszystkich pól obiektu. W przypadku skrzynki metoda toString() ma zwrócić opisy
//        wszystkich obiektów w niej znajdujących się, po jednym w każdej linii. Metoda Owoc::toString() jest abstrakcyjna.


#include "Sliwka.hpp"

std::string Sliwka::toString() {
    std::ostringstream os;
    os << "Śliwka: waga " << waga << ", cena za kilogram " << cenaZaKilogram;
    return os.str();
}

Sliwka::Sliwka(float waga, float cenaZaKilogram):waga(waga),cenaZaKilogram(cenaZaKilogram) {

}

Sliwka::~Sliwka() = default;

float Sliwka::getWaga() const {
    return waga;
}

float Sliwka::getCenaZaKilogram() const {
    return cenaZaKilogram;
}

float Sliwka::getCena() {
    return waga*cenaZaKilogram;
}
