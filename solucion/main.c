#include <stdio.h>
#include <stdlib.h>
#include "trie.h"

char string[1024];

int main(void) {
	// trie* t = trie_crear();
	// trie_agregar_palabra(t,"casa");
	// trie_agregar_palabra(t,"casco");
	// trie_agregar_palabra(t,"ala");
	// trie_agregar_palabra(t,"cama");
	trie *t = trie_construir("trie.in");
	trie_imprimir(t,"trie.out");

	printf("%f", trie_pesar(t,(*peso_palabra)));

	// prefijo[0] = 'a';
	// prefijo[1] = 'l';
	// prefijo[2] = '\0';
	// listaP* l = palabras_con_prefijo(t, prefijo);
	// lista_imprimir(l);
	// lista_borrar(l);
	trie_borrar(t);

    return 0;
}

