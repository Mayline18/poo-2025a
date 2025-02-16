#include <iostream>
using namespace std;
class Persona {
	//atributos
	protected : 
	string nombres, apellidos, direccion, fecha_nacimiento;
	int telefono;
}
	//metodos
	// constructor 
	Persona () 
	{
	Persona (string nom, string ape, string dir, int tel, string fn)
          nombres= nom;
          apellidos = ape;
          direccin = dir;
          telefono = tel;
          fecha_nacimiento = fn;
}
	// crud
	vold crear ();
	vold leer ();
	vold actualizar ();
	vold borrar();	
};
