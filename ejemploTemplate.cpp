//  Este es un ejemplo de como usar el Template en funciones 
//
//  Código hecho por Roberto Abraham Pérez Iga
//  Fecha: Sat 14 Aug 2021
//  
//  Este programa va a regresar e imprimir en la consola el numero mas pequeño entre (a1 y a2) y (b1 y b2)
//
// 

#include <iostream>

using namespace std;

//  Funciones sin template que no son efectivas al repetirse mucho 
int menorInt(int a1, int a2){
    if(a1 < a2){
        return a1;
    }
    else{
        return a2;
    }
}

float menorFloat(float b1, float b2){
        if(b1 < b2){
        return b1;
    }
    else{
        return b2;
    }
}

//  Funcion utilizando el template 
template <typename T>
T menor(T c1, T c2){
    if (c1 < c2){
        return c1;
    }
    else{
        return c2;
    }
}

int main(){
    int a1, a2;
    float b1, b2;
    cin >> a1 >> a2;
    cout << menor(a1, a2) << endl; //  Los parametros a1 y a2 van dirigidos a la funcion con el Template menor(T c1, T c2)
    cin >> b1 >> b2;
    cout << menor(b1, b2) << endl; //  Los parametros b1 y b2 van dirigidos a la funcion con el Template menor(T c1, T c2)
    
}