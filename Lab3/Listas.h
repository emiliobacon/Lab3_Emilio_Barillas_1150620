#pragma once
#include "Cartas.h" //>referncia a la clase
class Listas 
{
public: 
	Cartas* joker; //par�metros 
	int cant;

	Listas();
	void agregarCarta(int numero, char pigmento);
	void eliminarCarta(int pos);
	Cartas obtenerCarta(int pos);
};

