
/**
* @file Dosya.cpp
* @description Bağlı liste kullanarak dosyadaki verileri birbirine bağlamak
* @course örgün öğretim 1C
* @assignment 1
* @date Kodu 27/11/2022
* @author yusuf hakan güneş/ yusuf.gunes5@ogr.sakarya.edu.tr
*/

#include "Dosya.hpp"
#include "Liste.hpp"
#include"yoneticilistesi.hpp"
#include<fstream>
#include <sstream>
#include"iomanip"


using namespace std;

yoneticilistesi* Dosya::oku()

{
    ifstream Myfile("veriler.txt");
    if(Myfile.is_open())
    {
        yoneticilistesi*yonet=new yoneticilistesi();
        int say=0;
        int sayac=0;
        while (getline(Myfile,line))
        {   stringstream ss(line);
            Liste*liste=new Liste();
            
           
             while (ss>>siradaki)
            {  
                
               liste->ekle(siradaki);
              
             
            }

 
                Dugum*d=liste->ilk;
                liste->ilk->ortalama=liste->ortalamaD();
                int sira=0;
                Dugumy*gec=yonet->first;
                
                if(gec==0)
                {
                    yonet->ekle(liste->ilk);
                    
                }
                else
                {
                    while(gec!=0)
                    {   
                    
                    if((d->ortalama)>(gec->satirlist->ortalama))
                    {   
                        sira++;
                        
                    }
                    else
                    {   
                        yonet->onuneEkle(sira,liste->ilk);
                        break;

                    }
                    if(gec->next==0)
                    {
                        yonet->ekle(liste->ilk);
                        break;
                    }
                    gec=gec->next;
                    }
                    
                    
                   
                }
                
                
                
             
        }       
         return yonet;

    }
    else
    {
        cout<<"dosya bulunamadi";
    }

    Myfile.close();
    return 0;
}

