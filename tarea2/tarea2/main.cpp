//
//  main.cpp
//  tarea2
//
//  Created by Alejandro Herce on 8/18/16.
//  Copyright © 2016 Alejandro Herce. All rights reserved.
//

#include <iostream>
#include "fabrica.h"
#include "computadora.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Creador* cliente = Fabrica::GetInstance();
    Computadora* lala = cliente->crear(1);
    
    return 0;
}
