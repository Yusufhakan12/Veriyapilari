


#ifndef Dugumy_hpp
#define Dugumy_hpp
#include<iostream>
#include "Liste.hpp"
using namespace std;
class Dugumy
{
    public:
    Dugumy(Dugum* SatirList);
    ~Dugumy();
    Dugumy*next;
    Dugumy*prev;
    Dugum* satirlist;
    
    

};
#endif