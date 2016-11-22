//
//  main.cpp
//  CadenaResponsabilidad
//
//  Created by Alejandro Herce on 11/20/16.
//  Copyright © 2016 Alejandro Herce. All rights reserved.
//

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

class Base
{
    Base *next;
public:
    Base()
    {
        next = 0;
    }
    void setNext(Base *n)
    {
        next = n;
    }
    void add(Base *n)
    {
        if (next)
            next->add(n);
        else
            next = n;
    }
    virtual void handle(string chain)
    {
        next->handle(chain);
    }
};

class Handler1: public Base
{
public:
    void handle(string chain)
    {
        if (chain != "com")
        {
            cout << "H1 passed " << chain << "  ";
            Base::handle(chain);
        }
        else
            cout << "H1 handled " << chain << "  ";
    }
};

class Handler2: public Base
{
public:
    /*virtual*/void handle(string chain)
    {
        //if (rand() % 3)
        if (chain != "mx")
        {
            cout << "H2 passed " << chain << "  ";
            Base::handle(chain);
        }
        else
            cout << "H2 handled " << chain << "  ";
    }
};

class Handler3: public Base
{
public:
    /*virtual*/void handle(string chain)
    {
        if (chain != "org")
        {
            cout << "H3 passed " << chain << "  ";
            Base::handle(chain);
        }
        else
            cout << "H3 handled " << chain << "  ";
    }
};

int main()
{
    srand(time(0));
    Handler1 root;
    Handler2 two;
    Handler3 thr;
    root.add(&two);
    root.add(&thr);
    thr.setNext(&root);
    string chain;
    string ext;
    cout << "Enter chain: " << endl;
    cin >> chain;
    for(int i=chain.length()-1;i>0;i--){
        if(chain[i] == '.'){
            ext = chain.substr(i+1,chain.length());
            break;
        }
    }
    root.handle(ext);
    cout << '\n';
}
