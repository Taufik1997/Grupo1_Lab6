#ifndef PERSONA_H
#define PERSONA_H 
#include <string>

using std::string;

class Persona{
private:
	string nombre;
	string apellido;
	string sobrenombre;
	int nivel;
public:
	Persona(string,string,string,int);
	Persona();
	virtual ~Persona();
	void setNombre(string);
	string getNombre();
	void setApellido(string);
	string getApellido();
	void setNivel(int);
	int getNivel();
	string toString();
};
#endif