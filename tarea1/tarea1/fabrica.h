//
//  fabrica.h
//  tarea1
//
//  Created by Alejandro Herce on 8/15/16.
//  Copyright © 2016 Alejandro Herce. All rights reserved.
//

#ifndef fabrica_h
#define fabrica_h

#include <stdio.h>
#include <string>

using namespace std;

class Computadora{
public:
    string tipo;
    
    Computadora(){};
    
    void crear();
};

void Computadora::crear(){
    cout << tipo << endl;
    cout << "Selección de componentes..." << endl;
    cout << "Ensamblando componentes..." << endl;
    cout << "Instalación y configuración de software y drivers..." << endl;
    cout << "Empacando la computadora..." << endl;
    cout << "Lista para envío :)" << endl;
}

#endif /* fabrica_h */
