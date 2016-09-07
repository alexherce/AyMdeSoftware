//
//  computadora.h
//  tarea1
//
//  Created by Alejandro Herce on 8/15/16.
//  Copyright © 2016 Alejandro Herce. All rights reserved.
//

#ifndef computadora_h
#define computadora_h

#include "fabrica.h"
#include <string>

using namespace std;

class Desktop: public Computadora{
public:
    Desktop(){
        cout << "Creando Desktop..." << endl;
    };
};

class Laptop: public Computadora{
public:
    Laptop(){
        cout << "Creando Laptop..." << endl;
    };
};

class Notebook: public Computadora{
public:
    Notebook(){
        cout << "Creando Notebook..." << endl;
    };
    
};

class Tablet: public Computadora{
public:
    Tablet(){
        cout << "Creando Tablet..." << endl;
    };
    
};

#endif /* computadora_h */
