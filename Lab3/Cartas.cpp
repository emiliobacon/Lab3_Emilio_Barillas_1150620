#include "Cartas.h"
#include <iostream>

Cartas::Cartas(int num, char tono) {   
	numeracion = num; 
	color = tono; 
	show = false; 
	siguiente = nullptr; 


}
void Cartas::Mostrar() {
	show = true; 
}
