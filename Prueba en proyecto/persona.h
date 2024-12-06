#ifndef PERSONA_H
#define PERSONA_H
using namespace std;

class Persona{
	protected:
		string nombre;
		int edad;
		string genero;
	public:
		Persona(string,int,string);
		void mostrarPersona();
};
#endif
