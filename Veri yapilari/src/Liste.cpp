
/**
* @file Liste.cpp
* @description Bağlı liste kullanarak dosyadaki verileri birbirine bağlamak
* @course örgün öğretim 1C
* @assignment 1
* @date Kodu 27/11/2022
* @author yusuf hakan güneş/ yusuf.gunes5@ogr.sakarya.edu.tr
*/

#include "Liste.hpp"
#include "iomanip"
#include<fstream>
#include <sstream>
using namespace std;

void Liste::satirYazdir()
{
    Dugum*gec=ilk;
    while (gec!=0)

    {    
        cout<<gec->sonraki<<" ";
        gec=gec->sonraki;
    }
    
    
}
Liste::Liste()
{
    ilk=0;
    sayac=0;
    ortalama=0;
    toplam=0;
    
}
Liste::~Liste()
{
    Dugum*gec=ilk;
    while (gec!=0)
    {   Dugum*silinecek=gec;
        gec=gec->sonraki;
        delete silinecek;
    }
    
}
void Liste::ekle(int veri)
{  
    Dugum*yeniDugum=new Dugum(veri);
    if(ilk==0)
    {
        ilk=yeniDugum;

    }
    else
    {
        Dugum*gec= ilk;
        
        while (gec->sonraki!=0)
        {
            
           gec=gec->sonraki;
           
        }
         
        gec->sonraki=yeniDugum; 
        yeniDugum->onceki=gec;
 
        
    }
    
}
float Liste::ortalamaD()

{   
    Dugum*gec=ilk;

    while (gec!=0)
    {   
        sayac++;
        toplam+=gec->veri;
        gec=gec->sonraki;
        
        
    }
   
    ortalama=(float)toplam/(float)sayac;
    
   return ortalama;
    
}


void Liste::cikar()
{
    if(ilk==0)
    {
        return;
    }
    if(ilk->sonraki==0)
    {
        delete ilk;
        ilk=0;

    }
    else
    {
        Dugum*gec=ilk;
        while (gec->sonraki->sonraki!=0)
        {
            gec=gec->sonraki;
        }
        delete gec->sonraki;
        gec->sonraki=0;
    }
}

Dugum*Liste::dugumGetir(int sira)
{
     Dugum*gec=ilk;
    int Dugumsayac=0;
    while (gec!=0)
    {
        if(Dugumsayac==sira)
        return gec;
        gec=gec->sonraki;
        Dugumsayac++;
    }
}

void Liste::altinaekle(int sira,int veri)
{
    Dugum*aktifDugum=dugumGetir(sira);
    if(aktifDugum)
    {
        Dugum*aktifOnceki=aktifDugum->onceki;
        Dugum*yeniDugum=new Dugum(veri);
        aktifDugum->onceki=yeniDugum;
        yeniDugum->sonraki=aktifDugum;
        yeniDugum->onceki=aktifOnceki;
        if(aktifOnceki)
            aktifOnceki->sonraki=yeniDugum;
        else
            ilk=yeniDugum;
    }
}




