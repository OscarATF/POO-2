#include <iostream>
#include "estudiante.h"
using namespace std;
//constructor
Estudiante::Estudiante(string _nombre,int _edad,string _genero,string _universidad,string _codigo) : Persona(_nombre,_edad,_genero) {
	universidad=_universidad;
	codigo=_codigo;
}
void Estudiante::mostrarEstudiante() {
	mostrarPersona();
	cout<<"codigo: "<<codigo<<endl
		<<"universidad: "<<universidad<<endl;
}