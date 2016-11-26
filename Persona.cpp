#include "Persona.h"
#include <string>
#include <sstream>
using std::stringstream;
using std::string;

Persona::Persona(){

}

Persona::~Persona() {

}

Persona::Persona(string nombre, string apellido,string sobrenombre, int nivel){
	this->nombre = nombre;
	this->apellido = apellido;
	this->nivel = nivel;
	this->sobrenombre = sobrenombre;
}

void Persona::setNombre(string nombre2){
  nombre = nombre2;
}

string Persona::getNombre(){
  return nombre;
}

void Persona::setApellido(string apellido2){
  apellido = apellido2;
}

string Persona::getApellido(){
  return apellido;
}

void Persona::setNivel(int niv){
  nivel = niv;
}

int Persona::getNivel(){
  return nivel;
}

string Persona::toString(){
	stringstream ss;
	ss<<"Nombre: "<<nombre<<" Apellido: "<<apellido<<" Nivel: "<<nivel;
	return ss.str();
}