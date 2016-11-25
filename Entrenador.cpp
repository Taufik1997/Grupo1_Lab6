#include <string>
#include <sstream>
#include "Entrenador.h"

using std::stringstream;
using std::string;

Entrenador::Entrenador(): Persona(){
    
}


Entrenador::Entrenador(string nombre,string apellido, int nivel, string tactica) : Persona(nombre,apellido,nivel),tactica(tactica){
    
}

void Entrenador::setTactica(string tactic){
  tactica = tactic;
}

string Entrenador::getTactica(){
  return tactica;
}

string Entrenador::toString(){
	stringstream ss;
	ss<<tactica;
	return ss.str();
}