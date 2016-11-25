main:	main.o Persona.o Equipo.o Partido.o Jugador.o Entrenador.o 
	g++ main.o Persona.o Equipo.o Partido.o Jugador.o Entrenador.o -o main

main.o:	main.cpp Persona.h Equipo.h Partido.h Jugador.h Entrenador.h
	g++ -c main.cpp

Persona.o:	Persona.h Persona.cpp
	g++ -c Persona.cpp

Equipo.o:	Equipo.h Equipo.cpp
	g++ -c Equipo.cpp

Partido.o:	Partido.h Partido.cpp
	g++ -c Partido.cpp

Jugador.o:	Persona.h Jugador.h Jugador.cpp
	g++ -c Jugador.cpp

Entrenador.o:	Persona.h Entrenador.h Entrenador.cpp
	g++ -c Entrenador.cpp
	