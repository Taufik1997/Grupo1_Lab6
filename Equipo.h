#ifndef EQUIPO_H
#define EQUIPO_H

#include <Jugador.h>
#include <Entrenador.h>
#include <string>
#include <vector>

using std::string;

class Equipo{
private:
	string nombre;
	vector<Jugador*> jugadores;
	Entrenador* entrenador;
	int nivelDefensa = 0;
	int nivelOfensiva = 0;
	int golesFavor;
	int golesEncontra;

public:
	Equipo(string,Entrenador*,int,int);
	virtual ~Equipo();
	void setNombre(string);
	string getNombre();
	void agregarJugadores(Jugador*);
	Jugador* getJugadores();
	Entrenador* getEntrenador();
	void setEntrenador(Entrenador*);
	int getNivelDefensa();
	void setNivelDefensa(int);
	int getNivelOfensiva();
	void setNivelOfensiva(int);
	int getGolesFavor();
	void setGolesFavor(int);
	int getGolesEncontra();
	void setGolesEncontra(int);
	string toString();
};

#endif