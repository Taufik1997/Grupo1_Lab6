#include <iostream>
using namespace std;
int main(){
	vector<Equipo*>equipos;
	int opc = 0;
	do{
		//nombre del Equipo, Entrenador, nivelDef, nivelOfensiva, golesAfa,golesContra
		cout<<"     Football\n1)Agregar un nuevo Equipo\n2)Crear nuevos Jugadores o Entrenadores\n3)Formar Equipo\n4)Simulador\n5)¿Cómo se juega?\n6)Alistar los Equipos\n 7)Salir";
		cin>>opc;
		if(opc==1){
			string nombreEquipo, nombreEntrenador, apellidoEntrenador, nombreJugador;
			int nivel;
			cout<<""<<endl;//Explicación aquí
			cout<<"¡Ingrese el nombre de su gran equipo!: ";
			cin>>nombre;
			cout<<""<<endl;//Explicación del entrenador
			cout<<"Ingrese el nombre del entrenador: ";
			cin>>nombreEntrenador;
			cout<<"Ingrese el apellido del entrenador: ";
			cin>>apellidoEntrenador;
			
		}//crea nuevo equipo
		if(opc==2){

		}
	}while(opc!=5);}
	return 0;	
}