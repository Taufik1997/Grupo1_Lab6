#include "Partido.h"
#include <string>
#include <sstream>
using std::stringstream;
using std::string;

Partido::Partido(){

}

Partido::~Partido() {

}

Partido::Partido(Equipo* equipo1,Equipo* equipo2, string marcador,Equipo* ganador,Equipo* local){
	this->equipo1 = equipo1;
	this->equipo2 = equipo2;
	this->marcador = marcador;
	this->local = local;
	this->ganador = ganador;
}

void Partido::setEquipo1(Equipo* team){
  equipo1 = team;
}

Equipo* Partido::getEquipo1(){
  return equipo1;
}

void Partido::setEquipo2(Equipo* team){
  equipo2 = team;
}

Equipo* Partido::getEquipo2(){
  return equipo2;
}

void Partido::setMarcador(string score){
  marcador = score;
}

string Partido::getMarcador(){
  return marcador;
}

void Partido::setGanador(Equipo* team){
  ganador = team;
}

Equipo* Partido::getGanador(){
  return ganador;
}

void Partido::setLocal(Equipo* team){
  local = team;
}

Equipo* Partido::getLocal(){
  return local;
}


string Partido::toString(){
	stringstream ss;
	ss<<"Equipo 1: "<<equipo1<<", Equipo 2: "<<equipo2<<", Marcador: "<<marcador<<", Ganador: "<<ganador<<", Local: "<<local<<endl;
	return ss.str();
}