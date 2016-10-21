//
//  TVAzteca.h
//  Ejercicio1
//
//  Created by Alejandro Herce on 10/21/16.
//  Copyright © 2016 Alejandro Herce. All rights reserved.
//

#ifndef TVAzteca_h
#define TVAzteca_h

#include <iostream>
#include "Observer.h"

class TVAztecaObserver : public Observer {
public:
    virtual void update(string noticia);
};

void TVAztecaObserver::update(string noticia) {
    std::cout << "-------------------------------------------" << endl;
    std::cout << "Nueva noticia de TV Azteca: " << endl;
    std::cout << noticia << endl;
}


#endif /* TVAzteca_h */
