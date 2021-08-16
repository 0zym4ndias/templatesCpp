//
//
//  AG01
//  Aplicación para probar la Actividad AG02 en la parte 1
//  Estudiante: Roberto Abraham Pérez Iga
//  Autor: Ing. Luis H. González Guerra
//
//

#include <iostream>

using namespace std;

#include "ListaConTemplate.h" //  Código diseñado para probar la clase "ListaConTemplate.h"

int main(){
    ListaConTemplate<int> miLista1;
    miLista1.insert(154);
    miLista1.insert(587);
    miLista1.insert(874);
    miLista1.print();
    cout << "La lista tiene: " << miLista1.getSize() << " datos" << endl;
    miLista1.insert(999);
    miLista1.insert(888);
    cout << "La lista tiene: " << miLista1.getSize() << " datos" << endl;
    cout << "En la posición 3 esta: " << miLista1.getData(3) << endl;
    cout << "Voy a borrar el último y fue: " << endl;
    miLista1.erase();
    int cant1 = miLista1.getSize();
    cout << "La lista tiene: " << cant1 << " datos" << endl;
    for (int i=0; i<cant1; i++){
        miLista1.erase();
    }
    cout << "-----------------------------------" << endl;
    ListaConTemplate<string> miLista2;
    miLista2.insert("HOLA");
    miLista2.insert("CRAYOLA");
    miLista2.insert("COMO");
    miLista2.print();
    cout << "La lista tiene: " << miLista2.getSize() << " datos" << endl;
    miLista2.insert("TE");
    miLista2.insert("VA?");
    cout << "La lista tiene: " << miLista2.getSize() << " datos" << endl;
    cout << "En la posición 3 esta: " << miLista2.getData(3) << endl;
    cout << "Voy a borrar el último y fue: " << endl;
    miLista2.erase();
    int cant2 = miLista2.getSize();
    cout << "La lista tiene: " << cant2 << " datos" << endl;
    for (int i=0; i<cant2; i++){
        miLista2.erase();
    }
}
