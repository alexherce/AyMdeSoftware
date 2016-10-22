//
//  main.cpp
//  Command
//
//  Created by Alejandro Herce on 10/18/16.
//  Copyright © 2016 Alejandro Herce. All rights reserved.
//

#include<map>
#include<string>
#include<iostream>

using namespace std;

class Command
{
public:
    template<class T, class Func>
    T execute(T* arr , int size, Func fun)
    {
        return fun(arr, size);
    }
};


template<class T>
T sum(T* arr, int size)
{
    T acum = 0;
    for(int i=0; i<size; i++)
        acum+= arr[i];
    return acum;
}

typedef int(*signature)(int*, int);

int main(int argc, char const *argv[]) {
    double* doubles = new double[5]{1.1,2.2, 3.3,4.4,5.5};
    char* chars = new char[5]{'H','O','L','A','!'};
    int* integers = new int[2]{10, 20};
    Command c;
    
    cout << c.execute<double, double(*)(double*,int)>(doubles, 5, sum) << endl;
    
    cout << c.execute<char, char(*)(char*, int)>(chars, 5, sum)<< endl;
    
    cout << c.execute<int, signature>(integers, 2, sum)<< endl;
    
    
    signature f = &sum<int>;
    
    cout << f(integers, 2) << endl;
    
    return 0;
}
