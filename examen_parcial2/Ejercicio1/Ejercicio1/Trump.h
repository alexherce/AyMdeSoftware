//
//  Trump.h
//  Ejercicio1
//
//  Created by Alejandro Herce on 10/21/16.
//  Copyright © 2016 Alejandro Herce. All rights reserved.
//

#ifndef Trump_h
#define Trump_h

#include "Observable.h"

class TrumpObservable : public Observable {
public:
    void registerNews(string noticia);
};

void TrumpObservable::registerNews(string noticia) {
    notifyObservers(noticia);
}

#endif /* Trump_h */
