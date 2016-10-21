//
//  RadioFormula.h
//  Ejercicio1
//
//  Created by Alejandro Herce on 10/21/16.
//  Copyright © 2016 Alejandro Herce. All rights reserved.
//

#ifndef RadioFormula_h
#define RadioFormula_h

#include <iostream>
#include "Observer.h"

class RadioFormulaObserver : public Observer {
public:
    virtual void update(string noticia);
};

void RadioFormulaObserver::update(string noticia) {
    std::cout << "-------------------------------------------" << endl;
    std::cout << "Nueva noticia de RadioFormula: " << endl;
    std::cout << noticia << endl;
}


#endif /* RadioFormula_h */
