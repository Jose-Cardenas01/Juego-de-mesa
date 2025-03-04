#ifndef INICIO
#define INICIO
#include <iostream>
#include "./Cartas.h"
#include "./Tablero.h"

using namespace std;

class Inicio{
	public:
		//Cartas car;
		//struct Pos;
		Inicio(Pos* baraja, Cartas);
		ing getplayers();
	private:
		Revolver(int* baraja);
};


#endif