

#ifndef yoneticilistesi_hpp
#define yoneticilistesi_hpp
#include<iostream>
#include "Dugumy.hpp"
#include <exception>
#include"Liste.hpp"
using namespace std;

class yoneticilistesi
{
    public:
    Dugumy*first;
    Dugumy*last;
    yoneticilistesi();
    ~yoneticilistesi();
    void yazdir();
    void Syazdir();
    void ekle(Dugum*satirlistesi);
    void onuneEkle(int sira,Dugum*satirlist);
    int sayac;
    Dugumy*dugumGetir(int sira);
    
    
};
#endif