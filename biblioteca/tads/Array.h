//
// Created by neur0tik on 4/10/21.
//

#ifndef ALGORITMOS1_ARRAY_H
#define ALGORITMOS1_ARRAY_H

#include <iostream>
#include <stdlib.h>
#include "../funciones/arrays.hpp"

using namespace std;

template<typename T>
struct Array
{
};

template<typename T>
Array<T> array(int cap)
{
    Array<T> a;
    return a;
}

template<typename T>
Array<T> array()
{
    Array<T> a;
    return a;
}

template<typename T>
int arrayAdd(Array<T>& a,T t)
{
    return 0;
}

template<typename T>
T* arrayGet(Array<T> a,int p)
{
    return NULL;
}

template<typename T>
void arraySet(Array<T>& a,int p,T t)
{
}

template<typename T>
void arrayInsert(Array<T>& a,T t,int p)
{
}

template<typename T>
int arraySize(Array<T> a)
{
    return 0;
}

template<typename T>
T arrayRemove(Array<T>& a,int p)
{
    T t;
    return t;
}

template<typename T>
void arrayRemoveAll(Array<T>& a)
{
}

template<typename T,typename K>
int arrayFind(Array<T> a,K k,int cmpTK(T,K))
{
    return 0;
}

template<typename T>
int arrayOrderedInsert(Array<T>& a,T t,int cmpTT(T,T))
{
    return 0;
}

template<typename T>
void arraySort(Array<T>& a,int cmpTT(T,T))
{
}

#endif //ALGORITMOS1_ARRAY_H
