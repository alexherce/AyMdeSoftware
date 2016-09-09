//
//  main.cpp
//  examen_parcial1
//
//  Created by Alejandro Herce on 9/9/16.
//  Copyright © 2016 Alejandro Herce. All rights reserved.
//

#include <iostream>
#include "pasteleria.h"
#include "iterador.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    
    Creator* pasteles = ConcreteCreator::GetInstance();
    Product* miProducto = pasteles->createProduct(1);
    
    Aggregate<Product*> p;
    p.add(miProducto);
    
    
    Iterator<Product*>* i;
    for(i = p.getIterator(); i->hasNext(); )
    {
        cout << (i->next())->getNombre();
        cout << (i->next())->getSucursal();
    }
    delete i;
    
    
    return 0;
}
