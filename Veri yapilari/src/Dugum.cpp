
/**
* @file Dugum.cpp
* @description Bağlı liste kullanarak dosyadaki verileri birbirine bağlamak
* @course örgün öğretim 1C
* @assignment 1
* @date Kodu 27/11/2022
* @author yusuf hakan güneş/ yusuf.gunes5@ogr.sakarya.edu.tr
*/

#include "Dugum.hpp"

Dugum::Dugum(int veri)
{
    this->veri=veri;
    onceki=sonraki=0;
    ortalama=0;
}
Dugum::~Dugum()
{
    cout<<this<<" adresindeki dugum silindi"<<endl;
}