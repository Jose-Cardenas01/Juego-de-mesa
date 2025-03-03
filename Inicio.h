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
	private:
		Revolver(int* baraja);
};


#endif