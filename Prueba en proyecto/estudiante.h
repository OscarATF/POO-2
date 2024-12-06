#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "persona.h"
using namespace std;

class Estudiante:public Persona {
	protected:
		string universidad;
		string codigo;
	public:
		Estudiante(string,int,string,string,string);
		void mostrarEstudiante();
};

#endif