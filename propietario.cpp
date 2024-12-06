#include <iostream>
#include <string.h>

using namespace std;

class Casa{
	private:
		string direccion;
		int cantHab;
	public:
		Casa(string,int);
		void mostrarCasa();
};

Casa::Casa(string d,int c) {
	direccion=d;
	cantHab=c;
}

void Casa::mostrarCasa() {
	cout<<"Casa ubicada en "<<direccion<<" y tiene ";
	cout<<cantHab<<" habitaciones. "<<endl;
}

class Propietario{
	private:
		string nombre;
		int nCasas;
		Casa* propiedades[5]; //variable de agregacion
	public:
		Propietario(string);
		void mostrarPropietario();
		void asignarCasa(Casa *);
};

Propietario::Propietario(string d) {
	nombre=d;
	nCasas=0;
}

void Propietario::mostrarPropietario() {
	if (nCasas==0) {
		cout<<nombre<<" no tiene propiedades aun. "<<endl;
	} else {
		cout<<nombre<<" tiene las siguientes propiedades: "<<endl;
		for (int i=0;i<nCasas;i++) {
			cout<<"\t"; propiedades[i] -> mostrarCasa();
		}
	}
}

void Propietario::asignarCasa(Casa *p) {
	propiedades[nCasas]=p; //asignacion de referencia a objetos de tipo Casa
	nCasas++;
}

int main() {
	Propietario jose("Jose Mamani");
	Casa casa1("Av. 1 No. 100",4);
	Casa casa2("Av. 2 No. 200",2);
	jose.asignarCasa(&casa1);
	jose.asignarCasa(&casa2);
	jose.mostrarPropietario();
	return 0;
}