/*
 * pila.c
 *
 *  Created on: 10 feb. 2020
 *      Author: angel
 */
#include<iostream>
#include<vector>
using namespace std;
struct nodo {
	nodo *siguiente;
	int dato;

}*pila = NULL;

void agregar(int d) {
	nodo *aux = new nodo;
	aux->dato = d;
	aux->siguiente = pila; //enlaza el nuevo nodo a la lista

	pila = aux;
//cout<<"elemento "<<d<<"agregado";

}
void pop() {

	int r;
	if (pila == NULL) {
		cout << "no se puede sacar de una pila vacia";
	}
	nodo *aux = pila;

	pila = aux->siguiente;

	r = aux->dato;
	delete aux;

}

void mostrar() {

	nodo *aux = pila;
	if (aux == NULL) {
		cout << "pila vacia" << endl;

	} else {
		while (aux != NULL) {

			cout << aux->dato << "-";
			aux = aux->siguiente;
		}
	}

}
int main() {

	agregar(1);

	agregar(2);

	agregar(3);
	pop();
	mostrar();

}

