#ifndef HASHENTRY_H
#define HASHENTRY_H
using namespace std;


template<class T>
class NodoArbol {
private:

    NodoArbol<T> * izq, * der;
    T dato;
public:
    NodoArbol(T dato);

    T getDato() const;

    void setDato(T dato);

public:

    void put(T d);

    void put(NodoArbol *nodo);

    T search(T d);

    NodoArbol<T> * remover(T d);

    void preorder();

    void inorder();

    void postorder();

//    void print(bool esDerecho, string identacion) {
//        if (der != NULL) {
//            der->print(true, identacion + (esDerecho ? "     " : "|    "));
//        }
//        cout << identacion;
//        if (esDerecho) {
//            cout << " /";
//        } else {
//            cout << " \\";
//        }
//        cout << "-- ";
//        cout << dato << endl;
//        if (izq != NULL) {
//            izq->print(false, identacion + (esDerecho ? "|    " : "     "));
//        }
//    }
};

template <class T>
void NodoArbol<T>::put(T d) {

    if(d == dato)
        throw 1;
    else if(d < dato){
        if(NULL == izq)
            izq = new NodoArbol<T>(d);
        else
            izq->put(d);
    }else{
        if(NULL == der)
            der = new NodoArbol<T>(d);
        else
            der->put(d);
    }

}

template <class T>
void NodoArbol<T>::put(NodoArbol<T> * nodo) {

    if(nodo->getDato() == dato)
        throw 1;
    else if(nodo->getDato() < dato){
        if(NULL == izq)
            izq = nodo;
        else
            izq->put(nodo);
    }else{
        if(NULL == der)
            der = nodo;
        else
            der->put(nodo);
    }

}

template <class T>
T NodoArbol<T>::search(T d) {
    if(d == dato)
        return dato;
    else if(d < dato) {
        if (NULL == izq)
            throw 2;
        else
            return izq->search(d);
    }else {
        if (NULL == der)
            throw 2;
        else
            return der->search(d);
    }

}

template <class T>
NodoArbol<T>* NodoArbol<T>::remover(T d) {

    NodoArbol<T>* aux;
    if(d == dato) {
        if(der != NULL) {
            der->put(izq);
            return der;
        }
        return izq;
    }else if(d < dato) {
        if (NULL == izq)
            throw 2;
        else {
            aux = izq;
            izq = izq->remover(d);
            if(aux != izq)
                delete aux;
        }
    }else {
        if (NULL == der)
            throw 2;
        else {
            aux = der;
            der = der->remover(d);
            if(aux != der)
                delete aux;
        }
    }
    return this;
}

template <class T>
T NodoArbol<T>::getDato() const {
    return dato;
}

template <class T>
void NodoArbol<T>::setDato(T dato) {
    NodoArbol<T>::dato = dato;
}

template <class T>
void NodoArbol<T>::preorder() {

    cout << dato << ", ";
    if(izq =! NULL)
        izq->preorder();
    if(der =! NULL)
        der->preorder();

}

template <class T>
void NodoArbol<T>::inorder() {

    if(izq =! NULL)
        izq->inorder();
    cout << dato << ", ";
    if(der =! NULL)
        der->inorder();

}

template <class T>
void NodoArbol<T>::postorder() {

    if(izq =! NULL)
        izq->postorder();
    if(der =! NULL)
        der->postorder();
    cout << dato << ", ";

}

template <class T>
NodoArbol<T>::NodoArbol(T dato) : dato(dato) {
    izq = NULL;
    der = NULL;
}


#endif //HASHENTRY_H