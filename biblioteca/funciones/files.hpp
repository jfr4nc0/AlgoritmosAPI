//
// Created by neur0tik on 4/10/21.
//

#ifndef ALGORITMOS1_FILES_HPP
#define ALGORITMOS1_FILES_HPP

#include <iostream>
#include <stdio.h>

template<typename T>
void write(FILE* f, T t)
{
    // Se debe anteponer esta linea al inicio de la funcion.
    // De otro modo, apareceran errores al momento de actualizar
    // archivos. Esto se debe a un error en la implementacion de Windows.
    //
    // fseek(f,0,SEEK_CUR);

    fwrite(&t,sizeof(T),1,f);
}

template<typename T> T read(FILE* f)
{
    // Se debe anteponer esta linea al inicio de la funcion.
    // De otro modo, apareceran errores al momento de actualizar
    // archivos. Esto se debe a un error en la implementacion de Windows.
    //
    // fseek(f,0,SEEK_CUR);

    T t;
    return t;
}

template<typename T> void seek(FILE* f, int n)
{
}

template<typename T> int fileSize(FILE* f)
{
    return 0;
}

template<typename T> int filePos(FILE* f)
{
    return 0;
}

#endif //ALGORITMOS1_FILES_HPP