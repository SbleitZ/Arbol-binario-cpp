#include "binaryADT.hpp"
#include <cstdio>
#include <cstdlib>

ADTbinarytree::ADTbinarytree(){
    _size = 0;
    _height = 0;
}


void ADTbinarytree::create(element_t dato){
    Arbol *aux;
    aux = (Arbol *)malloc(sizeof(Arbol));
    aux->dato = dato;
    aux->root = NULL;
    aux->left = NULL;
    aux->right = NULL;
    _root = aux;
    _size++;
}

void ADTbinarytree::insert(element_t dato){
    if(_size == 0){
        create(dato);
    }else if(_size == 1){//tiene un dato, es decir solo tiene a la raiz
        Arbol *aux = (Arbol *)malloc(sizeof(Arbol));
        _root->left = aux;
        _root->right = NULL;
        aux->dato = dato;
        aux->root = _root;
        aux->left = NULL;
        aux->right = NULL;
    }
    _size++;
    //a
}

bool ADTbinarytree::isempty(){
    if(_size!=0){//ver si tiene nodos
        return true;
    }else{
        return false;
    }
}
//devuelve el dato de la raiz principal
element_t ADTbinarytree::root(){
    return _root->dato;
}

//left
//right
void ADTbinarytree::remove(element_t n){
    Arbol *aux;
    aux = _root;
    int contador= 0;
    while(aux != NULL){
        if(aux->dato == n){//lo encuentra y lo elimina
            printf("\ndato eliminado : %d\n" ,aux->dato);
            if(_root->dato == n){
                _root = _root->left;
            }
            free(aux);
            _size--;
        }
        aux = aux->left;
        contador++;
    }
    if(contador == _size){
        printf("Dato no existe");
    }
}
bool ADTbinarytree::contains(element_t e){
    for(int i=1;i<=M;i++){
        if(*_container[i] == e){
            return true;
        }
    }

    return false;//significa quer no lo encontro
}
int ADTbinarytree::height(){
    //return the height of the binary tree
    return _height;
}
unsigned int ADTbinarytree::size(){
    return _size;
}

void ADTbinarytree::deleteTree(){
    for(int i=1;i<=M;i++){
        _container[i] = nullptr;
    }
}
