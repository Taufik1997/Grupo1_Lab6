#include <string>
#include <sstream>
#include "Jugador.h"

using std::stringstream;
using std::string;

Jugador::Jugador(): Persona(){
    
}


Jugador::Jugador(string nombre,string apellido, int nivel, string posicion) : Persona(nombre,apellido,nivel),posicion(posicion){
    
}

void Jugador::setPosicion(string position){
  posicion = position;
}

string Jugador::getPosicion(){
  return posicion;
}

string Jugador::toString(){
	stringstream ss;
	ss<<posicion;
	return ss.str();
}