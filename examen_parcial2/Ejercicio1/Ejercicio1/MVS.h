//
//  MVS.h
//  Ejercicio1
//
//  Created by Alejandro Herce on 10/21/16.
//  Copyright © 2016 Alejandro Herce. All rights reserved.
//

#ifndef MVS_h
#define MVS_h

#include <iostream>
#include "Observer.h"

class MVSObserver : public Observer {
public:
    virtual void update(string noticia);
};

void MVSObserver::update(string noticia) {
    std::cout << "-------------------------------------------" << endl;
    std::cout << "Nueva noticia de MVS: " << endl;
    std::cout << noticia << endl;
}

#endif /* MVS_h */
