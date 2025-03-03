#include "./Inicio.h"
#include <time.h>

/*Inicio::struct Pos{
	int id;
	char color;
};*/

void Inicio::Revolver(int* baraja){
	baraja->RevolverT();
};

Inicio::Inicio(Pos** baraja){
	int players; //id=0;
	//char color[]={'R', 'A', 'V', 'N'}; R:rojo, A:azul, V:verde, N:negro
	cout<<"Ingrese la cantidad de jugadores (2-4)"; cin>>players;
	/*for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			baraja[i][j]=	
			
		};
	};*/
	this->baraja=baraja;
	Revolver(this->baraja);
};
