#include <iostream>
#include "Jablko.hpp"
#include "Sliwka.hpp"
#include "Skrzynka.hpp"

using namespace std;

int main() {
    Sliwka *sliwka = new Sliwka(45.76,3);
    std::cout << sliwka->toString();
    std::cout << sliwka->getCena();
    return EXIT_SUCCESS;
}