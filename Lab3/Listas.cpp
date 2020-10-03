#include "Listas.h"
#include "Cartas.h"
 

Listas::Listas(){
	joker = nullptr;
	cant = 0; 
	ultimacarta = nullptr;

}

void Listas::eliminarinicio() {
	Cartas* temp = joker; 
	if (cant > 0) {
		joker = temp->siguiente;

		if (cant == 1) {
			ultimacarta = joker;
			
		}
		cant--; 
	}
}

void Listas::eliminarfinal() {
	Cartas* temp = joker; 
	if (cant > 0) {
		if (cant == 1) {

			ultimacarta = ultimacarta->siguiente;
			joker = ultimacarta;

		}
		else {
			Cartas* pretemp = joker; 
			temp = pretemp->siguiente;

			while (temp!=ultimacarta)
			{
				pretemp = temp; 
				temp = pretemp->siguiente; 
			}

			pretemp->siguiente = temp->siguiente;
			ultimacarta = pretemp;
		}
		cant--;
	}

	
}

void Listas::eliminarposicion(int pos) {

	Cartas* temp = joker; 
	if (cant > 0) {

		if (cant == 1 || pos == 0) {

			eliminarinicio();
		}
		else {
			if (pos >= cant) {

				eliminarfinal(); 
			}
			else {
			
				Cartas* pretemp = joker; 
				temp = pretemp->siguiente;
				int contador = 1; 
				
				while ((temp) && contador < pos) {

					pretemp = temp; 
					temp = pretemp->siguiente; 
					contador++; 

				}
				pretemp->siguiente = temp->siguiente;
				cant--;
			
			}

				
		}
	}
}

void Listas::agregarCarta(Cartas&x) {



	if (cant == 0) {
		joker = &x;
		ultimacarta = &x; 
	}
	else {
		Cartas* temp = ultimacarta;
		 
		temp->siguiente = &x;
		ultimacarta = &x;
	}
	cant++;

}
void Listas::eliminarCarta(int pos) {
	if (pos == 0) {
		joker = nullptr;
		ultimacarta = nullptr;
	
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
		ultimacarta = temp; 
		cant = contador + 1; 
	}
	
	
}

Cartas* Listas::obtenerCarta(int pos) {

	if (pos == 0) {
		return joker;
	}
	else {
		Cartas* temp = joker;
		int contador = 0; 

		while (temp->siguiente != nullptr && contador < (pos))
		{
			temp = temp->siguiente;
			contador++;
		}
		return temp;

	}
	
}
