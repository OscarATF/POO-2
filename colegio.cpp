#include <iostream>
#include <string.h>

using namespace std;

class Aula{
	private:
		string nombre;
		int nAlumnos;
	public:
		Aula(string, int);
		void mostrarAula();
};

Aula::Aula(string a,int n) {
	nombre=a;
	nAlumnos=n;
}

void Aula::mostrarAula() {
	cout<<"El aula "<<nombre<<" tiene matriculados "<<nAlumnos;
	cout<<" alumnos"<<endl;
}

class Colegio{
	private:
		string nombre;
		Aula* secciones[5]; //variable de composicion
		int nAulas;
	public:
		Colegio(string);
		void mostrarColegio();
		void leerAulas();
};

Colegio::Colegio(string c) {
	nombre=c;
	nAulas=0;
}

void Colegio::mostrarColegio() {
	if (nAulas==0) {
		cout<<"El colegio "<<nombre<<" aun no tiene aulas"<<endl;
	} else {
		cout<<"El colegio "<<nombre<<" tiene las siguientes aulas: "<<endl;
		for (int i=0;i<nAulas;i++) {
			cout<<"\t"; secciones[i] -> mostrarAula();
		}
	}
}

void Colegio::leerAulas() {
	string nom;
	int cant;
	cout<<"Ingrese cantidad de aulas: "; cin>>nAulas;
	for(int i=0;i<nAulas;i++) {
		cin.ignore();
		cout<<"Nombre de la seccion: "; getline(cin,nom);
		cout<<"Cantidad de alumnos: "; cin>>cant;
		secciones[i]=new Aula(nom,cant); //creacion de objetos del tipo Aula
	}
}

int main() {
	Colegio objCol("Santa Teresita");
	objCol.leerAulas();
	objCol.mostrarColegio();
	return 0;
}