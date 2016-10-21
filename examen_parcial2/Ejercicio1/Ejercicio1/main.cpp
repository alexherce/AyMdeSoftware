//
//  main.cpp
//  Ejercicio1
//
//  Created by Alejandro Herce on 10/21/16.
//  Copyright © 2016 Alejandro Herce. All rights reserved.
//

#include <iostream>
#include "MVS.h"
#include "Televisa.h"
#include "TVAzteca.h"
#include "RadioFormula.h"
#include "CNN.h"
#include "PenaNieto.h"
#include "Hillary.h"
#include "Trump.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    // Boring class stuff
    
    PenaNietoObservable penaNieto;
    HillaryObservable hillary;
    TrumpObservable trump;
    
    MVSObserver mvs;
    TelevisaObserver televisa;
    TVAztecaObserver tvAzteca;
    RadioFormulaObserver radioFormula;
    CNNObserver cnn;
    
    // Registrar observers y observables
    
    penaNieto.registerObserver(&mvs);
    penaNieto.registerObserver(&televisa);
    penaNieto.registerObserver(&tvAzteca);
    penaNieto.registerObserver(&radioFormula);
    
    hillary.registerObserver(&mvs);
    hillary.registerObserver(&televisa);
    hillary.registerObserver(&tvAzteca);
    hillary.registerObserver(&radioFormula);
    hillary.registerObserver(&cnn);
    
    trump.registerObserver(&mvs);
    trump.registerObserver(&televisa);
    trump.registerObserver(&tvAzteca);
    trump.registerObserver(&radioFormula);
    trump.registerObserver(&cnn);
    
    // Menu
    
    int op;
    string noticia;
    
    while(op!=4)
    {
        cout << endl << endl;
        cout << "1.- Publicar como Peña Nieto" << endl;
        cout << "2.- Publicar como Hillary" << endl;
        cout << "3.- Publicar como Trump" << endl;
        cout << "4.- Salir\n" << endl;
        cout << "Indica la opcion: " << endl;
        scanf("%d", &op);
        
        cin.ignore();
        switch(op)
        {
            case 1: cout << "Escribe la noticia de Peña Nieto: " << endl;
                getline(cin, noticia);
                penaNieto.registerNews(noticia);
                break;
            case 2: cout << "Escribe la noticia de Hillary: " << endl;
                getline(cin, noticia);
                hillary.registerNews(noticia);
                break;
            case 3: cout << "Escribe la noticia de Trump: " << endl;
                getline(cin, noticia);
                trump.registerNews(noticia);
                break;
            case 4: break;
        }
    }
    
    return 0;
}
