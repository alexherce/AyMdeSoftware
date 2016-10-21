//
//  Hillary.h
//  Ejercicio1
//
//  Created by Alejandro Herce on 10/21/16.
//  Copyright © 2016 Alejandro Herce. All rights reserved.
//

#ifndef Hillary_h
#define Hillary_h

#include "Observable.h"

class HillaryObservable : public Observable {
public:
    void registerNews(string noticia);
};

void HillaryObservable::registerNews(string noticia) {
    notifyObservers(noticia);
}

#endif /* Hillary_h */
