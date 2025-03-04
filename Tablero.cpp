#include "./Tablero.h"
#include "./time.h"
#include <string>

struct Pos{
	int id=1;
	char color[]={'R', 'V', 'A', 'N'}; //R: rojo, V: verde, A: azul, N: negro
	string est[]={"📖", "📕"};
};

void Tablero::Matriz(){
	//Celda** matriz = new Celda*[FILAS];
	Pos** baraja=new Pos*[4];
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
			baraja[i][j].est=est[1];
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
	int players, cta1, cta2, opc;
	Inicio init;
	Jugadores jdor;
	players=init.getplayers;
	for (int i=0;i<players;i++){
		for (int j=0;j<2;j++){
			cout<<"Eliga una posicion"
			cout<<"------CARTAS------";
			cout<<"1:"<<baraja[0][0].est<<" 2:"<<baraja[0][1].est<<" 3:"<<baraja[0][2].est; cin>>opc;
			if (j==0){
				switch (opc){
					case 1:
						if (baraja[0][0].est==est[0]){
							cout<<"La carta ya se quito";
						} else{
							cta1=baraja[0][0].id;
						};
						break;
					case 2:
						//cta1=baraja[0][1].id;
						if (baraja[0][0].est==est[0]){
							cout<<"La carta ya se quito";
						} else{
							cta1=baraja[0][0].id;
						};
						break;
					case 3:
						if (baraja[0][0].est==est[0]){
							cout<<"La carta ya se quito";
						} else{
							cta1=baraja[0][0].id;
						};
						break;
					default:
						cout<<"El numero ingresado no es valido";
						break;
				};//fin switch
			} else {
				switch (opc){
					case 1:
						if (baraja[0][0].est==est[0]){
							cout<<"La carta ya se quito";
							return;
						} else{
							cta1=baraja[0][0].id;
						};
						break;
					case 2:
						if (baraja[0][0].est==est[0]){
							cout<<"La carta ya se quito";
							return;
						} else{
							cta1=baraja[0][0].id;
						};
						break;
					case 3:
						if (baraja[0][0].est==est[0]){
							cout<<"La carta ya se quito";
							return;
						} else{
							cta1=baraja[0][0].id;
						};
						break;
					default:
						cout<<"El numero ingresado no es valido";
						break;
				};//fin switch
			};//fin if
		};//fin para j
		if (cta1==cta2){
			jdor.puntos;
			switch (opc){
				case 1:
					baraja[0][0].est=est[0];
					break;
				case 2:
					baraja[0][1].est=est[0];
					break;
				case 3:
					baraja[0][2].est=est[0];
					break;
				default:
					cout<<"El numero ingresado no es valido";
					break;
				};//fin switch
			i=i-1; 
		};
	};//fin para i
};//fin turnos














