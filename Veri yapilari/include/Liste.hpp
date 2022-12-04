#ifndef Liste_hpp
#define Liste_hpp
#include<iostream>
#include"Dugum.hpp"
#include<exception>
#include"math.h"
using namespace std;

class Liste
{
    public:
    Dugum*ilk;
    Liste();
    ~Liste();
    void ekle(int veri);
    void satirYazdir();
    float ortalamaD();
    void cikar();
    void altinaekle(int sira,int veri);
    Dugum*dugumGetir(int sira);
    
    
    

    private:
    int sayac;
    float ortalama;
    int toplam;
    string line;
};



#endif