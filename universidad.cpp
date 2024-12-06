#include <iostream>
#include <string>
using namespace std;

class Rector {
	private:
		string nombres;
	public:
		Rector(string);
		void mostrarRector();
};

Rector::Rector(string n) {
	nombres=n;
}

void Rector::mostrarRector() {
	cout<<"Sr. Rector Dr. "<<nombres<<endl;
}

class Universidad {
	private:
		string denominacion;
		string ciudad;
		Rector *pRector; //variable de agregacion
	public:
		Universidad(string,string);
		void mostrarUniversidad();
		void asignarRector(Rector *);
};

Universidad::Universidad(string d,string c) {
	denominacion=d;
	ciudad=c;
	pRector=NULL; //inicializacion del puntero rector
}

void Universidad::mostrarUniversidad() {
	if (pRector==NULL) {
		cout<<"La universidad "<<denominacion<<" de la ciudad "<<ciudad;
		cout<<" aun no tiene un rector asignado. "<<endl;
	} else {
		cout<<"La Universidad "<<denominacion<<" de la ciudad "<<ciudad;
		cout<<" tiene como maxima autoridad al: "<<endl;
		cout<<"\t"; pRector -> mostrarRector();
	}
}

void Universidad::asignarRector(Rector *pR) {
	pRector=pR;
}

int main() {
	Rector alva("Jorge Elias Alva Hurtado");
	Universidad uni("Universidad Nacional de Ingenieria","Lima");
	uni.asignarRector(&alva);
	uni.mostrarUniversidad();
	return 0;
}