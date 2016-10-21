//
//  PenaNieto.h
//  Ejercicio1
//
//  Created by Alejandro Herce on 10/21/16.
//  Copyright © 2016 Alejandro Herce. All rights reserved.
//

#ifndef PenaNieto_h
#define PenaNieto_h

#include "Observable.h"

class PenaNietoObservable : public Observable {
public:
    void registerNews(string noticia);
};

void PenaNietoObservable::registerNews(string noticia) {
    notifyObservers(noticia);
}

#endif /* PenaNieto_h */
