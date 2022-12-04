
/**
* @file Dugumy.cpp
* @description Bağlı liste kullanarak dosyadaki verileri birbirine bağlamak
* @course örgün öğretim 1C
* @assignment 1
* @date Kodu 27/11/2022
* @author yusuf hakan güneş/ yusuf.gunes5@ogr.sakarya.edu.tr
*/

#include "Dugumy.hpp"
#include"Liste.hpp"
Dugumy::Dugumy(Dugum* SatirList)
{
    this->satirlist=SatirList;
    next = 0;
    prev = 0;
}
Dugumy::~Dugumy()
{
    cout<<this<<endl;
}