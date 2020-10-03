#pragma once
class Cartas
{
public:
	int numeracion; //variables a utilizar 
	char color;
	bool show;
	Cartas* siguiente; //puntero que llama a la siguiente carta 

	Cartas(int num, char tono); //definir constructor 
	void Mostrar();//procedimiento



};

