#include "Cartas.h"
#include <iostream>

Cartas::Cartas(int num, char tono) {   
	numeracion = num; 
	color = tono; 
	show = false; 
	siguiente = nullptr; 
	//pruebagit

}
void Cartas::Mostrar() {
	show = true; 
}
