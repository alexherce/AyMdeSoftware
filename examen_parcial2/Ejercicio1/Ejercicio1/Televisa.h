//
//  Televisa.h
//  Ejercicio1
//
//  Created by Alejandro Herce on 10/21/16.
//  Copyright © 2016 Alejandro Herce. All rights reserved.
//

#ifndef Televisa_h
#define Televisa_h

#include <iostream>
#include "Observer.h"

class TelevisaObserver : public Observer {
public:
    virtual void update(string noticia);
};

void TelevisaObserver::update(string noticia) {
    std::cout << "-------------------------------------------" << endl;
    std::cout << "Nueva noticia de Televisa: " << endl;
    std::cout << noticia << endl;
}


#endif /* Televisa_h */
