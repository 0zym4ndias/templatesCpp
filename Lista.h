#include <iostream>
#define MAX 100

using namespace std;

class Lista{
    public:
        Lista();
        void insert(int d);
        void erase();
        int getData(int pos);
        int getSize();
        void print();
    private:
        int data[MAX];
        int size;
};

Lista::Lista(){
    size = 0;
}

void Lista::insert(int d){
    if (size < MAX){
        data[size++] = d;
    }
}

void Lista::erase(){
    if (size > 0){
        size--;
        cout << "[" << size << "] - " << data[size] << endl;
    }
    else{
        cout << "NO HAY ELEMENTOS" << endl;
    }
}

int Lista::getSize(){
    return size;
}

int Lista::getData(int pos){
    return data[pos];
}

void Lista::print(){
    for (int i=0; i<size; i++){
        cout << "[" << i << "] - " << data[i] << endl;
    }
}