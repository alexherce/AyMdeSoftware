//
//  fabrica.h
//  tarea2
//
//  Created by Alejandro Herce on 8/18/16.
//  Copyright © 2016 Alejandro Herce. All rights reserved.
//

#ifndef fabrica_h
#define fabrica_h

#include "computadora.h"

using namespace std;

class Creador
{
public:
    virtual Computadora* crear(int) = 0;
    
    Computadora* createComputadora(int tipo)
    {
        Computadora* miComputadora = crear(tipo);
        miComputadora->nombre();
        return miComputadora;
    }
};

class Fabrica: public Creador
{
public:
    Computadora* crear(int tipo)
    {
        if (tipo == 1)
            return new Desktop;
        else if (tipo == 2)
            return new Laptop;
        else if (tipo == 3)
            return new Netbook;
        else if (tipo == 4)
            return new Tablet;
        else
            return 0;
    }
    
    static Fabrica* GetInstance(){
        static Fabrica* instance = new Fabrica;
        return instance;
    }
private:
    Fabrica(){};
};

#endif /* fabrica_h */
