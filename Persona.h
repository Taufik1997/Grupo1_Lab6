#ifndef PERSONA_H
#define PERSONA_H 
#include <string>

using std::string;

class Persona{
private:
	string nombre;
	string apellido;
	int nivel;
public:
	Persona(string,string,int);
	Persona();
	virtual ~Persona();
	void setNombre(string);
	string getNombre();
	void setApellido(string);
	string getApellido();
	void setNivel(int);
	int getNivel();
};
#endif