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

using namespace std;

int main(){
	vector<Equipo*>equipos;
	vector<Partido*>partidos;
	Equipo* team = new Equipo();
	int opc = 0;
	do{
		//nombre del Equipo, Entrenador, nivelDef, nivelOfensiva, golesAfa,golesContra
		cout<<"     Football\n1)Agregar un nuevo Equipo\n2)Sobre el Juego\n7)Salir";
		cin>>opc;
		if(opc==1){
			string nombreEquipo, nombreEntrenador, apellidoEntrenador, nombreJugador,sobrenombre, tactica;
			string nombreJugador, apellidoJugador, sobreNombreJugador, posicion;
			int nivel, nivelJugador;
			cout<<""<<endl;//Explicación aquí
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
			cout<<"Ingrese la táctica del entrenador";
			cin>>tactica;
			cout<<""<<endl;//explicación de jugadores
			team->setEntrenador(nombreEntrenador,apellidoEntrenador,sobrenombre,nivel,tactica);
			for (int i = 0; i < 11; ++i)
			{
				cout<<"Ingrese el nombre del Jugador: ";
				cin>>nombreJugador;
				cout<<"Ingrese el apellido del Jugador: ";
				cin>>apellidoJugador;
				cout<<"Ingrese el sobrenombre del Jugador: ";
				cin>>sobreNombreJugador;
				do{
					cout<<"Ingrese el nivel de este Jugador (1-10): ";
					cin>>nivelJugador;
					if(nivelJugador<0 && nivelJugador>10){
						cout<<"El nivel tiene que estar en el rango 1-10"<<endl;
					}
				}while(nivelJugador<0 && nivelJugador>10);
				cout<<"Ingrese la posicion del este jugador: ";
				cin>>posicion;
				team->setJugador(new Jugador(nombreJugador, apellidoJugador, sobreNombreJugador, nivelJugador, posicion));
			}//fin de la creación de los jugadores.
			equipos.push_back(team);
		}//crea nuevo equipo
		if(opc==2){//crear nuevo torneo
			int team1=-1, team2=-2, team3=-3, team4,-4;
			for (int i = 0; i < vector.size(); ++i)
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
			int atkL,atkV, defL, defV, random1, random2, goal1=0, goal2=0, local, visitante, ganador;
			string marcador;
			for (int i = 0; i < 6; ++i)
			{
				random1 = rand()%10+1;
				if(i==0){//1v2
					if(random1%2==0){
						team->setLocal(vector.at(team1));
						local=team1;
						visitante=team2;
						if(atkL>defV){
								goal1++;
						}
					} else {
						team->setLocal(vector.at(team2));
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
					marcador = goal1<<"-"<<goal2;
					partidos.push_back(equipos.at(local)->getNombre(), equipos.at(visitante)->getNombre(), marcador, equipos.at(ganador)->getNombre(), equipos.at(local)->getNombre());
				}//fin 1v2
				if(i==1){//1v3
					if(random1%2==0){
						team->setLocal(vector.at(team1));
						local=team1;
						visitante=team3;
					} else {
						team->setLocal(vector.at(team3));
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
				if(i==0){//1v4
					if(random1%2==0){
						team->setLocal(vector.at(team1));
						local=team1;
						visitante=team2;
					} else {
						team->setLocal(vector.at(team2));
						local=team2;
						visitante=team1;
					}
					for (int m = 0; m < 10; ++m)
					{
						random2 = rand()%10+1;
						random3 = rand()%10+1;
						if(m%2==0){
							atkL = equipos.at(local)->getNivelOfensiva()*random2;
							defV = equipos.at(visitante)->getNivelDefensa()*random3;
							defV += defV*0.9 
						} else {
							atkV = equipos.at(visitante)->getNivelOfensiva()*random3;
							defL = equipos.at(local)->getNivelDefensa()*random2;
							atkV += atkV*0.9;
						}
					}
				}//fin 1v4
			}

		}
		//visita -90%
	}while(opc!=5);
	return 0;	
}