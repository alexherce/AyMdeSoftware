//
//  pasteleria.h
//  examen_parcial1
//
//  Created by Alejandro Herce on 9/9/16.
//  Copyright © 2016 Alejandro Herce. All rights reserved.
//

#ifndef pasteleria_h
#define pasteleria_h

#include <iostream>
#include <string>

using namespace std;

class Product
{
    
public:
    
    string nombre;
    string sucursal;
    string ingredientes;
    virtual void crear() = 0;
    
    string getSucursal()
    {
        return sucursal;
    }
    string getIngredientes()
    {
        return ingredientes;
    }
    string getNombre()
    {
        return nombre;
    }
    
};


class tresLeches : public Product
{
    
    friend class ConcreteCreator;
    
    string getSucursal()
    {
        return sucursal;
    }
    string getIngredientes()
    {
        return ingredientes;
    }
    string getNombre()
    {
        return nombre;
    }
    
    void crear()
    {
        cout << "Creando Tres Leches: Batiendo... Amasando... Horneando... Decorando... Empacando..." << endl;
        nombre = "Tres Leches";
    }
    
private:
    tresLeches()
    {
        sucursal = "Aguascalientes";
        ingredientes = "Leche, huevo, mantequilla";
    }
};


class sacher : public Product
{
    friend class ConcreteCreator;
    
    string getSucursal()
    {
        return sucursal;
    }
    string getIngredientes()
    {
        return ingredientes;
    }
    string getNombre()
    {
        return nombre;
    }

    void crear()
    {
        cout << "Creando Sacher: Batiendo... Amasando... Horneando... Decorando... Empacando..." << endl;
        nombre = "Sacher";
    }
    
private:
    sacher()
    {
        sucursal = "CDMX";
        ingredientes = "Chocolate, frutas, merengue";
    }
    
};


class imposible : public Product
{
    friend class ConcreteCreator;
    
    string getSucursal()
    {
        return sucursal;
    }
    string getIngredientes()
    {
        return ingredientes;
    }
    string getNombre()
    {
        return nombre;
    }
    
    void crear()
    {
        cout << "Creando Imposible: Batiendo... Amasando... Horneando... Decorando... Empacando..." << endl;
        nombre = "Imposible";
    }
    
private:
    imposible()
    {
        sucursal = "CDMX";
        ingredientes = "Chocolate, frutas, merengue";
    }
};


class Creator
{
    
public:
    
    virtual Product* factoryMethod(int) = 0;
    
    Product* createProduct(int tipo)
    {
        Product* myProduct = factoryMethod(tipo);
        myProduct->crear();
        return myProduct;
    }
};

class ConcreteCreator : public Creator
{
    
public:
    
    
    Product* factoryMethod(int tipo){
        if (tipo == 1)
            return new tresLeches;
        else if (tipo == 2)
            return new sacher;
        else if (tipo == 3)
            return new imposible;
        else
            std::cout << "Opción no disponible." << endl;
        return nullptr;
        
    }
    
    static ConcreteCreator* GetInstance(){
        static ConcreteCreator* instance = new ConcreteCreator;
        return instance;
        
    }
    
private:
    
    ConcreteCreator(){};
};


#endif /* pasteleria_h */
