#ifndef ENTRENADOR_H
#define  ENTRENADOR_H

using std::string;

#include <string>
#include "Persona.h"



class Entrenador : public Persona {
    private:
    	string tactica;
    public:
        Entrenador(string,string,string,int,string);
        Entrenador();
        void setTactica(string);
		string getTactica();
		string toString();
};

#endif