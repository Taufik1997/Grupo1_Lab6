#ifndef ENTRENADOR_H
#define  ENTRENADOR_H
#include <string>
#include "Persona.h"

using std::string;

class Entrenador : public Persona {
    private:
    	string tactica;
    public:
        Entrenador(string,string,int,string);
        Entrenador();
        void setTactica(string);
		string getTactica();
		string toString();
};

#endif