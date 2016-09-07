//
//  computadora.h
//  tarea2
//
//  Created by Alejandro Herce on 8/18/16.
//  Copyright © 2016 Alejandro Herce. All rights reserved.
//

#ifndef computadora_h
#define computadora_h

#include <string>
#include "fabrica.h"

using namespace std;

class Computadora
{
public:
    virtual string nombre() = 0;
};

class Desktop : public Computadora
{
    friend class Fabrica;
    
    string nombre()
    {
        return "Desktop";
    }
    
private:
    Desktop(){}
};

class Laptop : public Computadora
{
    friend class Fabrica;
    
    string nombre()
    {
        return "Laptop";
    }
    
private:
    Laptop(){};
};

class Tablet : public Computadora
{
    friend class Fabrica;
    
    string nombre()
    {
        return "Tablet";
    }
    
private:
    Tablet(){};
};

class Netbook : public Computadora
{
    friend class Fabrica;
    
    string nombre()
    {
        return "Netbook";
    }
    
private:
    Netbook(){};
};


#endif /* computadora_h */
