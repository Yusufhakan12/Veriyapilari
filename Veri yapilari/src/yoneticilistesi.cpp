
/**
* @file yoneticilistesi.cpp
* @description Bağlı liste kullanarak dosyadaki verileri birbirine bağlamak
* @course örgün öğretim 1C
* @assignment 1
* @date Kodu 27/11/2022
* @author yusuf hakan güneş/ yusuf.gunes5@ogr.sakarya.edu.tr
*/


#include"yoneticilistesi.hpp"
#include"iomanip"
#include"Dugumy.hpp"
#include <iostream>   
#include <string>
using namespace std;
char a;
int say=0;
 
void yoneticilistesi:: yazdir()
{   

    int index=1;
    Dugumy*gecici=first;
    
        
    while (gecici!=0)
    {    say++;
        cout<<" "<<gecici<<setw(4)<<"  ";
        gecici=gecici->next;
        
    }
    
    cout<<endl;
    for(int i=0;i<8;i++) 
    {
        cout<<"----------"<<setw(3)<<" ";

    }
    cout<<endl;
    gecici=first;
    while (gecici!=0)
    {    
        if(gecici->prev==0)
        cout<<"|000000"<<gecici->prev;
   
        cout<<gecici->prev<<"|"<<setw(4)<<" ";
        gecici=gecici->next;
        
    }
    cout<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<"----------"<<setw(3)<<" ";

    }
    cout<<endl;
    gecici=first;
   
    while (gecici!=0)
    {    
    
        cout << setprecision(3)<<"|"<<setw(8)<<gecici->satirlist->ortalama<<"|"<<setw(3)<<" ";
        gecici=gecici->next;
        
    }
      
    cout<<endl;
    for(int i=0;i<8;i++) 
    {
        cout<<"----------"<<setw(3)<<" ";

    }
    cout<<endl;
    gecici=first;
   
    while (gecici!=0)
    {    
    
        cout << setprecision(3)<<"|"<<setw(8)<<gecici->next<<"|"<<setw(3)<<" ";
     
        gecici=gecici->next;
        
    } 
    cout<<endl;
    for(int i=0;i<8;i++) 
    {
        cout<<"----------"<<setw(3)<<" ";

    }  
   cout<<endl;  

    gecici=first; 
    cout<<"^^^^^^^^^^"<<endl;
                   
          
            
        while (gecici!=0)
        {
             while(gecici->satirlist!=0)
            {   
                 
                cout << setprecision(3)<<" "<<gecici->satirlist<<setw(3)<<endl;
                cout<<"----------"<<endl;
                cout << setprecision(3)<<"|"<<setw(8)<<gecici->satirlist->onceki<<"|"<<setw(3)<<endl;
                cout<<"----------"<<endl;
                cout << setprecision(3)<<"|"<<setw(8)<<gecici->satirlist->veri<<"|"<<setw(3)<<endl;
                cout<<"----------"<<endl;
                cout << setprecision(3)<<"|"<<setw(8)<<gecici->satirlist->sonraki<<"|"<<setw(3)<<endl;
                cout<<"----------"<<endl;
            
           
            gecici->satirlist=gecici->satirlist->sonraki;
               
            }
            
              gecici=gecici->next;

              cin>>a;
             if(a=='d')
             {  
                index++;
             }
            
        }
        
           
 
}

 

yoneticilistesi::yoneticilistesi()
{    
    first=0;
    sayac=0;
}
yoneticilistesi::~yoneticilistesi()
{
    Dugumy*gecici=first;
    while (gecici!=0)
    {
        Dugumy*silinen=gecici;
        gecici=gecici->next;
        delete silinen;
    }
    
} 

void yoneticilistesi::ekle(Dugum*satirlist)
{   
    Dugumy* yeniDug=new Dugumy(satirlist);
    
    if(first==0)
    {
        first=yeniDug;
    }
    else
    {   
        Dugumy* gecici=first;
        while (gecici->next!=0)
        {   
            
            gecici=gecici->next;
            
             sayac++;
        }
        
       
        gecici->next=yeniDug;
        yeniDug->prev=gecici; 
        
    }
        
}

Dugumy*yoneticilistesi::dugumGetir(int sira)
{
    Dugumy*gecici=first;
    int Dugumsayac=0;
    while (gecici!=0)
    {
        if(Dugumsayac==sira)
        return gecici;
        gecici=gecici->next;
        Dugumsayac++;
    }
    
}

void yoneticilistesi::onuneEkle(int sira,Dugum*satirlist)
{
    Dugumy*aktifDugum=dugumGetir(sira);
    if(aktifDugum)
    {
        Dugumy*aktifOnceki=aktifDugum->prev;
        Dugumy*yeniDugum=new Dugumy(satirlist);
        aktifDugum->prev=yeniDugum;
        yeniDugum->next=aktifDugum;
        yeniDugum->prev=aktifOnceki;
        if(aktifOnceki)
            aktifOnceki->next=yeniDugum;
        else
            first=yeniDugum;
    }
}


