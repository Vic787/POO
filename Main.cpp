#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"Ingresar NIT: ";
	cin>>nit;
	cout<<"Ingresar nombres: ";
	cin>>nombres;
	cout<<"Ingresar apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar direccion: ";
	cin>>direccion;
	cout<<"Ingresar telefono: ";
	cin>>telefono;
	
	// Instancia de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	
	// cout<<"Datos del cliente: "<<obj.getNit()<<","<<obj.getNombres()<<","<<obj.getApellidos()<<","<<obj.getDireccion()<<","<<obj.getTelefono();
	
	/*Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();*/
}

