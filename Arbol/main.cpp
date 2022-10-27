#include <iostream>
#include "binarytree.cpp"
int main(){
    ADTbinarytree *miArbol = new ADTbinarytree();
    miArbol->create(10);
    miArbol->insert(3);
    std::cout<<miArbol->size();
    delete miArbol;
    return 0;
}