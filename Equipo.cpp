#include "Equipo.h"
#include <string>
#include <sstream>
using std::stringstream;
using std::string;

Equipo::Equipo(){

}

Equipo::Equipo(string nombre,Entrenador* entrenador,int nivelDefensa, int nivelOfensiva,int golesFavor, int golesEncontra) {
	this->nombre;
	this->entrenador = entrenador;
	this->nivelDefensa = nivelDefensa;
	this->nivelOfensiva = nivelOfensiva;
	this->golesFavor = golesFavor;
	this->golesEncontra = golesEncontra;

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
	jugadores.push_back(jugador);
}

Jugador* Equipo::getJugadores(){
	return jugadores;
}

Entrenador* Equipo::getEntrenador(){
	return entrenador;
}

void Equipo::setEntrenador(Entrenador* entre){
	entrenador = entre;
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

