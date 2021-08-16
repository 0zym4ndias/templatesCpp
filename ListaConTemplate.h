#include <iostream>
#define MAX 100

using namespace std;

template <class T>
class ListaConTemplate{
    public:
        ListaConTemplate();
        void insert(T d);
        void erase();
        T getData(int pos);
        int getSize();
        void print();
    private:
        T data[MAX];
        int size;
};

template <class T>
ListaConTemplate<T>::ListaConTemplate(){
    size = 0;
}

template <class T>
void ListaConTemplate<T>::insert(T d){
    if (size < MAX){
        data[size++] = d;
    }
}

template <class T>
void ListaConTemplate<T>::erase(){
    if (size > 0){
        size--;
        cout << "[" << size << "] - " << data[size] << endl;
    }
    else{
        cout << "NO HAY ELEMENTOS" << endl;
    }
}

template <class T>
int ListaConTemplate<T>::getSize(){
    return size;
}

template <class T>
T ListaConTemplate<T>::getData(int pos){
    return data[pos];
}

template <class T>
void ListaConTemplate<T>::print(){
    for (int i=0; i<size; i++){
        cout << "[" << i << "] - " << data[i] << endl;
    }
}