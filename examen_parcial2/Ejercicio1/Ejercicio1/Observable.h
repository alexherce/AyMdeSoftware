//
//  Observable.h
//  Ejercicio1
//
//  Created by Alejandro Herce on 10/21/16.
//  Copyright © 2016 Alejandro Herce. All rights reserved.
//

#ifndef Observable_h
#define Observable_h

#include <list>
#include "Observer.h"

class Observable {
private:
    std::list<Observer*> observers;
public:
    void registerObserver(Observer* observer);
protected:
    void removeObserver(Observer* observer);
    void notifyObservers(string noticia);
};

void Observable::registerObserver(Observer* observer) {
    observers.push_back(observer);
}

void Observable::removeObserver(Observer* observer) {
    observers.remove(observer);
}

void Observable::notifyObservers(string noticia) {
    for (Observer* observer : observers) {
        observer->update(noticia);
    }
}

#endif /* Observable_h */
