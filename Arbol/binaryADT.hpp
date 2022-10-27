#ifndef binaryADT_HPP
#define binaryADT_HPP
typedef int element_t;
struct Arbol
{
    element_t dato;
    Arbol *right;
    Arbol *left;
    Arbol *root;
    
};

#define M 6
class ADTbinarytree{
    private:
        element_t *_container[M];
        Arbol *_root;
        unsigned int _size,_height;
    public:
        ADTbinarytree();
        void create(element_t dato);
        void insert(element_t);
        bool isempty();
        element_t root();
        void remove(element_t);
        bool contains(element_t);
        int height();
        unsigned int size();
        void deleteTree();
};

#endif