#include "./Tablero.h"
#include "./time.h"

struct Pos{
	int id=1;
	char color[]={'R', 'V', 'A', 'N'}; //R: rojo, V: verde, A: azul, N: negro
};

void Tablero::Matriz(){
	//Celda** matriz = new Celda*[FILAS];
	Pos** baraja=new Pos*[4];//
	for (int i=0;i<4;i++{
		baraja[i]=new Pos*[4];//el 4 es el numero de columnas
	};
	Llenarm(&baraja);
};

void Tablero::Llenarm(Pos** baraja){
	int num;
	for (int i=0;i<4;i+2){
		for(int j=0;j<4;j+2){
			srand(time(NULL));
			num=0+(rand()%5);
			baraja[i][j].id=id;
			baraja[i][j].color=color[num];
			baraja[i+1][j+1].id=id++;
			baraja[i+1][j+1].color=color[num];
		};
	};
};

void Tablero::RevolverT(){
	int fila, columna;
	struct aux;
	srand(time(NULL));
	fila=0+(rand()%5);
	columna=0+(rand()%5);
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			aux=baraja[i][j];
			baraja[i][j]=*baraja[fila][columna];
			baraja[fila][columna]=aux;
		};
	};
};

void Tablero::Turnos(){
	
};












