#ifndef JUGADOR_H
#define  JUGADOR_H
#include <string>
#include "Persona.h"

using std::string;

class Jugador : public Persona {
    private:
    	string posicion;
    public:
        Jugador(string,string,string,int,string);
        Jugador();
        void setPosicion(string);
		string getPosicion();
		string toString();
};

#endif