#include "gtest/gtest.h"
#include "../ArbolBinario/ArbolBinario.h"


using namespace std;

ArbolBinario<int, string> *miArbol;

TEST(test_ArbolBinario, nuevaTablaVacia) {
    miArbol = new ArbolBinario<int, string>();
    EXPECT_EQ(miArbol->esVacio(), true);
}

TEST(test_ArbolBinario, agregoTres_noVacia) {
    miArbol->put(3,"Tres");
    miArbol->put(2,"Dos");
    miArbol->put(1,"Uno");
    EXPECT_EQ(miArbol->esVacio(), false);
}

TEST(test_ArbolBinario, obtengoDato) {
    EXPECT_EQ(miArbol->search(3), "Tres");
    EXPECT_EQ(miArbol->search(2), "Dos");
    EXPECT_EQ(miArbol->search(1), "Uno");
    EXPECT_ANY_THROW(miArbol->search(4));
}

TEST(test_ArbolBinario, borroDato) {
    EXPECT_NO_THROW(miArbol->remove(3));
    EXPECT_ANY_THROW(miArbol->remove(3)) << "Remover no tira exepción";
}
