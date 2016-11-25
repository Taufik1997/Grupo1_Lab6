#include "Equipo.h"
#include <string>
#include <sstream>
using std::stringstream;
using std::string;

Equipo::Equipo(){

}

Equipo::Equipo(string nombre,Entrenador* entrenador,int golesFavor, int golesEncontra) {
	this->nombre = nombre;
	this->entrenador = entrenador;
	this->golesFavor = golesFavor;
	this->golesEncontra = golesEncontra;
	this-> nivelOfensiva+=entrenador->getNivel()*1.10;
	this-> nivelDefensa+=entrenador->getNivel();
}

Equipo::~Equipo(){

}

void Equipo::setNombre(string nombre2){
  nombre = nombre2;
}

string Equipo::getNombre(){
  return nombre;
}

void Equipo::agregarJugadores(Jugador* jugador){
	if(jugadores.size<11){
		jugadores.push_back(jugador);
		nivelDefensa+=jugador->getNivel();
		nivelOfensiva+=jugador->getNivel()*1.10;
	}else{
		cout<<"El equipo solo puede tener un 11."<<endl;
	}
}

Jugador* Equipo::getJugadores(){
	return jugadores;
}

Entrenador* Equipo::getEntrenador(){
	return entrenador;
}

void Equipo::setEntrenador(Entrenador* entre){
	entrenador = entre;
	nivelDefensa+=entrenador->getNivel();
	nivelOfensiva+=entrenador->getNivel()*1.10;
}

void Equipo::setNivelDefensa(int nivel){
  nivelDefensa = nivel;
}

int Equipo::getNivelDefensa(){
  return nivelDefensa;
}

void Equipo::setNivelOfensiva(int nivel){
  nivelOfensiva = nivel;
}

int Equipo::getNivelOfensiva(){
  return nivelOfensiva;
}

void Equipo::setGolesFavor(int goles){
  golesFavor = goles;
}

int Equipo::getGolesEncontra(){
  return golesEncontra;
}

void Equipo::setGolesEncontra(int goles){
  golesEncontra = goles;
}

int Equipo::getGolesFavor(){
  return golesFavor;
}


string Equipo::toString(){
	stringstream ss;
	ss<<"Nombre: "<<nombre<<" Entrenador: "<<entrenador<<", Nivel de Defensa: "<<nivelDefensa<<", Nivel de Ofensiva: "<<nivelOfensiva<<", Goles a favor: "<<golesFavor<<", Goles en contra: "<<golesEncontra;
	return ss.str();
}

