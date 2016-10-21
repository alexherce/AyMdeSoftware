//
//  CNN.h
//  Ejercicio1
//
//  Created by Alejandro Herce on 10/21/16.
//  Copyright © 2016 Alejandro Herce. All rights reserved.
//

#ifndef CNN_h
#define CNN_h

#include <iostream>
#include "Observer.h"

class CNNObserver : public Observer {
public:
    virtual void update(string noticia);
};

void CNNObserver::update(string noticia) {
    std::cout << "-------------------------------------------" << endl;
    std::cout << "Nueva noticia de CNN: " << endl;
    std::cout << noticia << endl;
}


#endif /* CNN_h */
