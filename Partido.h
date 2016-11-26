#ifndef PARTIDO_H
#define PARTIDO_H 
#include <string>
#include "Equipo.h"

using std::string;

class Partido{
private:
	Equipo* equipo1;
	Equipo* equipo2;
	string marcador;
	Equipo* ganador;
	Equipo* local;
public:
	Partido(Equipo*,Equipo*, string,Equipo*,Equipo*);
	Partido();
	virtual ~Partido();
	Equipo* getEquipo1();
	void setEquipo1(Equipo*);
	Equipo* getEquipo2();
	void setEquipo2(Equipo*);
	string getMarcador();
	void setMarcador(string);
	Equipo* getGanador();
	void setGanador(Equipo*);
	Equipo* getLocal();
	void setLocal(Equipo*);
	string toString();
};

#endif