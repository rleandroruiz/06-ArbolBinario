#ifndef HASHMAP_H
#define HASHMAP_H

template<class K, class T>
class ArbolBinario {
private:


public:
    ArbolBinario();


    void put(K clave, T dato);

    T search(K clave);

    void remove(K clave);

    void preorder();

    void inorder();

    void postorder();

    ~ArbolBinario();

    bool esVacio();

};
/**
 * Constructor del Arbol
 * @tparam K Clave por la cual va a ordenar el árbol
 * @tparam T Valor guardado por el árbol
 */
template<class K, class T>
ArbolBinario<K, T>::ArbolBinario() {

}
/**
 * Destructor del Arbol
 */
template<class K, class T>
ArbolBinario<K, T>::~ArbolBinario() {

}

/**
 * Busca un dato en el árbol. Si no esta el dato en el árbol
 * tira una excepción
 * @param clave Valor a buscar
 * @return el valor buscado
 */
template<class K, class T>
T ArbolBinario<K, T>::search(K clave) {
    T temp;
    return temp;
}

/**
 * Agrega un dato al árbol
 * @param clave Clave para agregar el dato
 * @param dato Dato a agregar
 */
template<class K, class T>
void ArbolBinario<K, T>::put(K clave, T dato) {

}

/**
 * Elimina un dato del árbol
 * @param clave Clave para identificar el nodo a borrar
 */
template<class K, class T>
void ArbolBinario<K, T>::remove(K clave) {

}

/**
 * Informa si un árbol esta vacío
 * @return
 */
template<class K, class T>
bool ArbolBinario<K, T>::esVacio() {
    return false;
}

/**
 * Recorre un árbol en preorden
 */
template<class K, class T>
void ArbolBinario<K, T>::preorder() {

}


/**
 * Recorre un árbol en orden
 */
template<class K, class T>
void ArbolBinario<K, T>::inorder() {

}


/**
 * Recorre un árbol en postorden
 */
template<class K, class T>
void ArbolBinario<K, T>::postorder() {

}

#endif //HASHMAP_H