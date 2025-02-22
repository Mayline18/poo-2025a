#include "Cliente.cpp"
#include <iostream>
using namespace std;
 main(){
 	string nit,nombres,apellidos,direccion,fecha_nacimiento;
 	int telefono;
 	
 	cout<<"Ingrese Nit:";
 	cin>>nit;
 	cout<<"Ingrese Nombres:";
 	cin>>nombres;
 	cout<<"Ingrese Apellidos:";
 	cin>>apellidos;
 	cout<<"Ingrese Direccion:";
 	cin>>dirrecion;
 	cout<<"Ingrese Fecha Nacimiento:";
 	cin>>fecha_nacimiento;
 	cout<<"Ingrese Telefono:";
 	cin>>telefono;
 	Cliente objc = Cliente(nombres,apellidos,direccion,telefono,fecha_nacimiento,nit);
 	objc.leer();
 	cout<<"Ingrese Nit a Modificar";
 	cin>>nit;
 	objc.setNit(nit);
 	cout<<objc.getNit()<<","<<objc.getNombres()<<" "<<objc.getApellidos()<<endl;
 	
 }
