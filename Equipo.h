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
	Equipo();
	virtual ~Equipo();
	void setNombre(string);
	string getNombre();
	void agregarJugadores(Jugador*);
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