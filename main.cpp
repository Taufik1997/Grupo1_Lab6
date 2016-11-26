#include <iostream>
#include <string>
#include "Entrenador.h"
#include "Equipo.h"
#include "Jugador.h"
#include "Partido.h"
#include "Persona.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sstream>
#include <fstream>

using namespace std;

int main(){
	vector<Equipo*>equipos;
	vector<Partido*>partidos;
	Equipo* team = new Equipo();
	int opc = 0;
	do{
		//nombre del Equipo, Entrenador, nivelDef, nivelOfensiva, golesAfa,golesContra
		cout<<"     Football\n1)Agregar un nuevo Equipo\n2)Simulador\n3)About this game\n4)Salir\n";
		cin>>opc;
		if(opc==1){
			string nombre, nombreEntrenador, apellidoEntrenador, nombreJugador,sobrenombre, tactica;
			string apellidoJugador, sobreNombreJugador, posicion;
			int nivel, nivelJugador;
			cout<<"¡Bienvenido! Un equipo forma de once jugadores y un entrenador."<<endl;//Explicación aquí
			cout<<"¡Ingrese el nombre de su gran equipo!: ";
			cin>>nombre;
			cout<<""<<endl;//Explicación del entrenador
			cout<<"Ingrese el nombre del entrenador: ";
			cin>>nombreEntrenador;
			cout<<"Ingrese el apellido del entrenador: ";
			cin>>apellidoEntrenador;
			cout<<"Ingrese el sobrenombre del entrenador: ";
			cin>>sobrenombre;
			do{
				cout<<"Ingrese el nivel de este entrenador (1-10): ";
				cin>>nivel;
				if(nivel<0 && nivel>10){
					cout<<"El nivel tiene que estar en el rango 1-10"<<endl;
				}
			}while(nivel<0 && nivel>10);
			cout<<"Ingrese la táctica del entrenador:";
			cin>>tactica;
			cout<<"¡A continuación usted tiene que ingresar 11 jugadores con una cualidad diferente!"<<endl;//explicación de jugadores
			team->setEntrenador(new Entrenador(nombreEntrenador,apellidoEntrenador,sobrenombre,nivel,tactica));
			for (int i = 0; i < 11; ++i)
			{
				cout<<"Ingrese el nombre del Jugador "<<i<<": ";
				cin>>nombreJugador;
				cout<<"Ingrese el apellido del Jugador: "<<i<<": ";
				cin>>apellidoJugador;
				cout<<"Ingrese el sobrenombre del Jugador "<<i<<": ";
				cin>>sobreNombreJugador;
				do{
					cout<<"Ingrese el nivel de este Jugador "<<i<<"(1-10): ";
					cin>>nivelJugador;
					if(nivelJugador<0 && nivelJugador>10){
						cout<<"El nivel tiene que estar en el rango 1-10."<<endl;
					}
				}while(nivelJugador<0 && nivelJugador>10);
				cout<<"Ingrese la posicion del este jugador: ";
				cin>>posicion;
				team->agregarJugadores(new Jugador(nombreJugador, apellidoJugador, sobreNombreJugador, nivelJugador, posicion));
				team->setNombre(nombre);
				cout<<endl;
			}//fin de la creación de los jugadores.
			equipos.push_back(team);
		}//crea nuevo equipo
		if(opc==2){//crear nuevo torneo
			int team1=-1, team2=-2, team3=-3, team4=-4;
			for (int i = 0; i < equipos.size(); ++i)
			{
				cout<< i <<""<<equipos.at(i)->toString()<<endl;
			}
			cout<<"Ingrese el numero del primer equipo que quiere que juegue en el torneo: ";
			cin>>team1;
			do{
				cout<<"Ingrese el numero del segundo equipo que quiere que juegue en el torneo: ";
				cin>>team2;
			}while(team1==team2);
			do{
				cout<<"Ingrese el numero del tercer equipo que quiere que juegue en el torneo: ";
				cin>>team3;
			}while(team3==team2&&team3==team1);
			cout<<"Ingrese el numero del cuarto equipo que quiere que juegue en el torneo: ";
			cin>>team4;
			int atkL,atkV, defL, defV, random1, random2, random3, goal1=0, goal2=0, local, visitante, ganador;
			string marcador;
			for (int i = 0; i < 6; ++i)
			{
				goal1=0;
				goal2=0;
				random1 = rand()%10+1;
				if(i==0){//1v2
					if(random1%2==0){
						//team->setLocal(vector.at(team1));
						local=team1;
						visitante=team2;
						if(atkL>defV){
								goal1++;
						}
					} else {
						//team->setLocal(vector.at(team2));
						local=team2;
						visitante=team1;
						if(atkV>defL){
							goal2++;
						}
					}
					for (int m = 0; m < 10; ++m)
					{
						random2 = rand()%10+1;
						random3 = rand()%10+1;
						if(m%2==0){
							atkL = equipos.at(local)->getNivelOfensiva()*random2;
							defV = equipos.at(visitante)->getNivelDefensa()*random3;
							defV += defV*0.9;
							if(atkL>defV){
								goal1++;
							}
						} else {
							atkV = equipos.at(visitante)->getNivelOfensiva()*random3;
							defL = equipos.at(local)->getNivelDefensa()*random2;
							atkV += atkV*0.9;
							if(atkV>defL){
								goal2++;
							}
						}
					}
					if(goal1>goal2){
						ganador=local;
					}else{
						ganador=visitante;
					}
					char g1 = goal1-48;
					char g2 = goal2-48;
					marcador =  g1 + " a " + g2;
					partidos.push_back(new Partido(equipos.at(local), equipos.at(visitante), marcador, equipos.at(ganador), equipos.at(local)));
				}//fin 1v2
				if(i==1){//1v3
					if(random1%2==0){
						//team->setLocal(vector.at(team1));
						local=team1;
						visitante=team3;
					} else {
						//team->setLocal(vector.at(team3));
						local=team3;
						visitante=team1;
					}
					for (int m = 0; m < 10; ++m)
					{
						random2 = rand()%10+1;
						random3 = rand()%10+1;
						if(m%2==0){
							atkL = equipos.at(local)->getNivelOfensiva()*random2;
							defV = equipos.at(visitante)->getNivelDefensa()*random3;
							defV += defV*0.9;
							if(atkL>defV){
								goal1++;
							}
						} else {
							atkV = equipos.at(visitante)->getNivelOfensiva()*random3;
							defL = equipos.at(local)->getNivelDefensa()*random2;
							atkV += atkV*0.9;
							if(atkV>defL){
								goal2++;
							}
						}
					}
				}//fin 1v3
				if(i==2){//1v4
					if(random1%2==0){
						//team->setLocal(vector.at(team1));
						local=team1;
						visitante=team4;
						if(atkL>defV){
								goal1++;
						}
					} else {
						//team->setLocal(vector.at(team2));
						local=team4;
						visitante=team1;
						if(atkV>defL){
							goal2++;
						}
					}
					for (int m = 0; m < 10; ++m)
					{
						random2 = rand()%10+1;
						random3 = rand()%10+1;
						if(m%2==0){
							atkL = equipos.at(local)->getNivelOfensiva()*random2;
							defV = equipos.at(visitante)->getNivelDefensa()*random3;
							defV += defV*0.9;
							if(atkL>defV){
								goal1++;
							}
						} else {
							atkV = equipos.at(visitante)->getNivelOfensiva()*random3;
							defL = equipos.at(local)->getNivelDefensa()*random2;
							atkV += atkV*0.9;
							if(atkV>defL){
								goal2++;
							}
						}
					}
					if(goal1>goal2){
						ganador=local;
					}else{
						ganador=visitante;
					}
					char g1 = goal1-48;
					char g2 = goal2-48;
					marcador =  g1 + " a " + g2;
					partidos.push_back(new Partido(equipos.at(local), equipos.at(visitante), marcador, equipos.at(ganador), equipos.at(local)));
				}//fin 1v4
				if(i==3){//2v3
					if(random1%2==0){
						//team->setLocal(vector.at(team2));
						local=team2;
						visitante=team3;
						if(atkL>defV){
							goal1++;
						}
					} else {
						//team->setLocal(vector.at(team2));
						local=team3;
						visitante=team2;
						if(atkV>defL){
							goal2++;
						}
					}
					for (int m = 0; m < 10; ++m)
					{
						random2 = rand()%10+1;
						random3 = rand()%10+1;
						if(m%2==0){
							atkL = equipos.at(local)->getNivelOfensiva()*random2;
							defV = equipos.at(visitante)->getNivelDefensa()*random3;
							defV += defV*0.9;
							if(atkL>defV){
								goal1++;
							}
						} else {
							atkV = equipos.at(visitante)->getNivelOfensiva()*random3;
							defL = equipos.at(local)->getNivelDefensa()*random2;
							atkV += atkV*0.9;
							if(atkV>defL){
								goal2++;
							}
						}
					}
					if(goal1>goal2){
						ganador=local;
					}else{
						ganador=visitante;
					}
					char g1 = goal1-48;
					char g2 = goal2-48;
					marcador =  g1 + " a " + g2;
					partidos.push_back(new Partido(equipos.at(local), equipos.at(visitante), marcador, equipos.at(ganador), equipos.at(local)));
				}//fin 2v3
				if(i==4){//2v4
					if(random1%2==0){
						//team->setLocal(vector.at(team2));
						local=team2;
						visitante=team4;
						if(atkL>defV){
								goal1++;
						}
					} else {
						//team->setLocal(vector.at(team4));
						local=team4;
						visitante=team2;
						if(atkV>defL){
							goal2++;
						}
					}
					for (int m = 0; m < 10; ++m)
					{
						random2 = rand()%10+1;
						random3 = rand()%10+1;
						if(m%2==0){
							atkL = equipos.at(local)->getNivelOfensiva()*random2;
							defV = equipos.at(visitante)->getNivelDefensa()*random3;
							defV += defV*0.9;
							if(atkL>defV){
								goal1++;
							}
						} else {
							atkV = equipos.at(visitante)->getNivelOfensiva()*random3;
							defL = equipos.at(local)->getNivelDefensa()*random2;
							atkV += atkV*0.9;
							if(atkV>defL){
								goal2++;
							}
						}
					}
					if(goal1>goal2){
						ganador=local;
					}else{
						ganador=visitante;
					}
					char g1 = goal1-48;
					char g2 = goal2-48;
					marcador =  g1 + " a " + g2;
					partidos.push_back(new Partido(equipos.at(local), equipos.at(visitante), marcador, equipos.at(ganador), equipos.at(local)));
				}//fin 2v4
				if(i==5){//3v4
					if(random1%2==0){
						//team->setLocal(vector.at(team3));
						local=team3;
						visitante=team4;
						if(atkL>defV){
								goal1++;
						}
					} else {
						//team->setLocal(vector.at(team2));
						local=team3;
						visitante=team4;
						if(atkV>defL){
							goal2++;
						}
					}
					for (int m = 0; m < 10; ++m)
					{
						random2 = rand()%10+1;
						random3 = rand()%10+1;
						if(m%2==0){
							atkL = equipos.at(local)->getNivelOfensiva()*random2;
							defV = equipos.at(visitante)->getNivelDefensa()*random3;
							defV += defV*0.9;
							if(atkL>defV){
								goal1++;
							}
						} else {
							atkV = equipos.at(visitante)->getNivelOfensiva()*random3;
							defL = equipos.at(local)->getNivelDefensa()*random2;
							atkV += atkV*0.9;
							if(atkV>defL){
								goal2++;
							}
						}
					}
					if(goal1>goal2){
						ganador=local;
					}else{
						ganador=visitante;
					}
					char g1 = goal1-48;
					char g2 = goal2-48;
					marcador =  g1 + " a " + g2;
					partidos.push_back(new Partido(equipos.at(local), equipos.at(visitante), marcador, equipos.at(ganador), equipos.at(local)));
				}//fin 3v4
			}

		}
		if(opc==3){
			cout<<"¡Bienvenido a este programa! Este programa es football!\n Imagínese que sólo son penales. Cada quién tiene la posibilidad de echar  un gol pero todo esto es al azar!\n Así que.. suerte!"<<endl;
		}
		//visita -90%
	}while(opc!=4);
	ofstream file;
	file.open("Partidos.txt");
	file<<"Partidos:"<<endl;
	for (int i = 0; i < 6; ++i)
	{
		file<< i<<"-"<<partidos.at(i)->toString()<<endl;
	}

	file<<"Los finalistas son"<<endl;
	file<<partidos.at(6)->getGanador()<<endl;
	file<<partidos.at(5)->getGanador()<<endl;

	file<<endl;
	file.close();
	return 0;	
}

//1v2 1v3 1v4 2v3 2v4 3v46