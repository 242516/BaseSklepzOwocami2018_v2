#include <boost/test/unit_test.hpp>

#include "Jablko.hpp"
#include "Sliwka.hpp"
#include "Skrzynka.hpp"

//Test 1 - Dodawanie owoców do Skrzynki
//        Utwórz skrzynkę o ładowności 2kg
//Utwórz 2 jabłka po 1kg każde i jedną 100g śliwkę
//        Wkładaj je do skrzynki w kolejności jabłko, śliwka, jabłko i sprawdź poprawność wykonania operacji
//        Porównaj czy oczekiwana cena i masa owoców w skrzynce jest zgodna z aktualną
//
//Test 2 - Usuwanie owoców ze Skrzynki
//Utwórz skrzynkę o dowolnej ładowności
//        Utwórz trzy owoce i włóż je do skrzynki (mają się w niej zmieścić)
//Sprawdź czy cena i masa owoców jest prawidłowa
//Usuń drugi z włożonych owoców
//        Sprawdź czy udało się usunąć owoc ze skrzynki i porównaj czy oczekiwana łączna cena i masa owoców w skrzynce jest zgodna z aktualną

BOOST_AUTO_TEST_SUITE(SkrzynkaTest)

    BOOST_AUTO_TEST_CASE(DodajOwocDoSkrzynkiTest, *boost::unit_test::tolerance(0.00001)) {
        auto *sliwka = new Sliwka(24.7,23.4);
        auto *skrzynka = new Skrzynka(2);
        BOOST_REQUIRE(skrzynka->wlozOwoc(sliwka));
        BOOST_REQUIRE(skrzynka->wlozOwoc(sliwka));
    }

    BOOST_AUTO_TEST_CASE(UsunOwocZeSkrzynkiTest) {

    }

BOOST_AUTO_TEST_SUITE_END()
