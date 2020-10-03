#pragma once
#include "Cartas.h" //>referncia a la clase
class Listas 
{
public: 

	Cartas* joker; //parámetros 
	Cartas* ultimacarta; 

	int cant;

	Listas();
	void agregarCarta(Cartas&);
	void eliminarCarta(int pos);
	Cartas* obtenerCarta(int pos);
	void eliminarinicio();
	void eliminarfinal(); 
	void eliminarposicion(int pos); 
};

