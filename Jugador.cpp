#include <string>
#include <sstream>
#include "Jugador.h"

using std::stringstream;
using std::string;

Jugador::Jugador(): Persona(){
    
}


Jugador::Jugador(string nombre,string apellido,string sobrenombre, int nivel, string posicion) : Persona(nombre,apellido,sobrenombre,nivel),posicion(posicion){
    
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