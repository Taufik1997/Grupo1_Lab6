#include <iostream>
using namespace std;
int main(){
	vector<Equipo*>equipos;
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
						
		}
	}while(opc!=5);}
	return 0;	
}