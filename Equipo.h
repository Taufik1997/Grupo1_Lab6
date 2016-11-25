#ifndef EQUIPO_H
#define EQUIPO_H

#include <string>
#include <vector>

using std::string;

class Equipo{
private:
	string nombre;
	vector<Jugador*> jugadores;
	Entrenador* entrenador;
	int nivelDefensa;
	int nivelOfensiva;
	int golesFavor;
	int golesEncontra;

public:
	Equipo(string,Entrenador*,int,int,int,int);
	virtual ~Equipo();
	void setNombre(string);
	string getNombre();
	void agregarJugadores(Jugador*);
	jugador* getJugadores();
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