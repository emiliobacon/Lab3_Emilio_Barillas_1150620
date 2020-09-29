#pragma once
#include "Cartas.h" //>referncia a la clase
ref class Listas 
{
public: 

	Cartas* joker; //parámetros 
	int cant;

	Listas();
	void agregarCarta(int numero, char pigmento);
	void eliminarCarta(int pos);
	Cartas obtenerCarta(int pos);
};

