#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona {
	private :
		 string nit;
		 
    //metodos (constructos y metodos crud)
    public :
    	 Cliente (){
		 }
		 Cliente (string nom,string ape,string dir,int tel,string fn, string n) : Persona(nom,ape,dir,tel,fn){
		 	nit = n;
		 }
		 //set (modificar un atributo o para enviar datos al atributo)
		 vold setNit(string n){
		 	nit = n;
		 }
		 vold setNombres(string nom){
		 	nombres = nom;
		 }
		 vold setApellidos(string ape){
		 	apellidos = ape;
		 }
		 vold setDireccion(string dir){
		 	direccion = dir;
		 }
		 vold setTelefono(int tel){
		 	telefono = tel;
		 }
		 vold setFechaNacimiento(string fn){
		 	fecha_nacimiento = fn;
		 }
		 string getNit(){
		 	return nit;
		 }
		 string getNombres(){
		 	return nombres;
		 }
		 string getApellidos(){
		 	return apellidos;
		 }
		 string getDireccion(){
		 	return direccion;
		 }
		 int getTelefono(){
		 	return telefono;
		 }
		 string getFechaNacimiento(){
		 	return fecha_nacimiento;
		 }
	     vold leer (){
	     	cout<<"Nit:"<<nit <<endl;
	     	cout<<"Nombres:"<<nombres<<endl;
	     	cout<<"Apellidos:" <<apellidos<<endl;
	     	cout<<"Direccion:"<<direccion<<endl;
	     	cout<<"Telefono:"<<telefono<<endl;
	     	cout<<"Fecha Nacimiento:"<<fecha_nacimiento<<endl;
		    }
};
