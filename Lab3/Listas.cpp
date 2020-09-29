#include "Listas.h"
#include "Cartas.h"
 

Listas::Listas(){
	joker = nullptr;
	cant = 0; 
}

void Listas::agregarCarta(int numero, char pigmento) {

	Cartas x = Cartas(numero, pigmento);//nuevo nodo


	if (cant == 0) {
		*joker = x; 
	}
	else {
		Cartas* temp = joker;

		while (temp->siguiente != nullptr)
		{
			temp = temp->siguiente;
		}
		*temp->siguiente = x; 

	}
	cant++;

}
void Listas::eliminarCarta(int pos) {
	if (cant == 0) {
		joker = nullptr;
	
	}
	else {
		int contador = 0; 
		Cartas* temp = joker;
		
		while (temp->siguiente != nullptr && contador < (pos-1))
		{
			temp = temp->siguiente;
			contador++; 
		}
		temp->siguiente = nullptr; 
		
	}
	cant--;
}

Cartas Listas::obtenerCarta(int pos) {

	if (pos == 0) {
		return *joker;
	}
	else {
		Cartas* temp = joker;
		int contador = 0; 

		while (temp->siguiente != nullptr && contador < (pos))
		{
			temp = temp->siguiente;
			contador++;
		}
		return *temp;

	}
	
}
