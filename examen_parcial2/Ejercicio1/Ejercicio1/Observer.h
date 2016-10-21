//
//  Observer.h
//  Ejercicio1
//
//  Created by Alejandro Herce on 10/21/16.
//  Copyright © 2016 Alejandro Herce. All rights reserved.
//

#ifndef Observer_h
#define Observer_h

#include <string>
using namespace std;

class Observer {
public:
    virtual void update(string noticia) = 0;
};

#endif /* Observer_h */
