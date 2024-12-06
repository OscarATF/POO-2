#include<iostream>
#include "persona.h"

using namespace std;
//constructor
Persona::Persona(string _nombre,int _edad,string _genero) {
	nombre=_nombre;
	edad=_edad;
	genero=_genero;
}

void Persona::mostrarPersona() {
	cout<<"nombre: "<<nombre<<endl
		<<"edad: "<<edad<<endl
		<<"genero: "<<genero<<endl;
}


