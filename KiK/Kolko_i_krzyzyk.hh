#ifndef KOLKO_I_KRZYZYK_HH_INCLUDED
#define KOLKO_I_KRZYZYK_HH_INCLUDED
#include <iostream>
#include <cmath>
#include <vector>
//#include <Windows.h>
//#include <cstdio>



struct ruch {

    int wiersz, kolumna;    //współrzędne pola (ruchu)

    ruch(){wiersz=-1; kolumna=-1;}
};
const int gracz = 2;    //2-kółko
const int komp  = 1;    //1-krzyżyk

struct KiK {

    int **plansza;  //tablica dynamiczna zawierająca całą planszę
    int wymiar;     //wymiar tablicy (domyślnie 3x3)
    int wygranko;   //2^wymiar- iloczyn elementów w rzędzie potrzebny do odnotowania zwycięstwa

    KiK();          //konstruktor bez parametru- tworzy planszę o wymiarze 3x3
    KiK(int wym);   //konstruktor z parametrem określającym rozmiar planszy
    void wypisz();
    int analiza();
    int analiza_somsiad(ruch pole);
    int analiza2();
    int analiza3(int a, int b);
    bool czykoniec();
    int wynik_an();
    ruch minimax(int **plansza, int glebokosc, ruch pole);
    int MAX(int **plansza, int glebokosc, ruch pole);
    int MIN(int **plansza, int glebokosc, ruch pole);
    void zrupruh();
    void wyzeruj();
    int minimax(int **plansza, int i, int j, int depth, bool isMax, int alpha, int beta);
    ruch searchForOption(int **plansza, ruch pole);
    void choseMove();

};


#endif // KOLKO_I_KRZYZYK_HH_INCLUDED
