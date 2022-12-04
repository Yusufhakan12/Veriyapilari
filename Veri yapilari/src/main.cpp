
/**
* @file main.cpp
* @description Bağlı liste kullanarak dosyadaki verileri birbirine bağlamak
* @course örgün öğretim 1C
* @assignment 1
* @date Kodu 27/11/2022
* @author yusuf hakan güneş/ yusuf.gunes5@ogr.sakarya.edu.tr
*/
#include <iostream>
#include<iomanip>
using namespace std;
#include "Liste.hpp"
#include "Dosya.hpp"
#include"yoneticilistesi.hpp"



int main() 

{
    
    Dosya*dosya=new Dosya();
    
    
      
        yoneticilistesi*yonet=dosya->oku();
        yonet->yazdir();
        

   
}   