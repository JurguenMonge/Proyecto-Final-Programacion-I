/*
	Name: Proyecto final de programacion I
	Author: Jurguen Monge Rojas
	Date: 03/11/21 11:25
	Description: Este proyecto es de mi autoria, consiste en un pequeño sistema de registro
	y de un juego que se llama 4 en linea.
*/
#include "Interfaz.h"

Interfaz::Interfaz()
{
}
//Bienvenida al usuario
void Interfaz::mostrarBienvenida()
{
	std::cout<<"-------------Bienvenidos al sistema de la Universidad San Pablo----------------"<<std::endl;
	std::cout<<"----------------------------Juego 4 en linea-----------------------------------"<<std::endl;
	
}
//Muestra el menu principal
int Interfaz::mostrarMenuPrincipal()
{
	int opcion=0;
	std::cout<<"\n1- Sistema Universidad San Pablo"<<std::endl<<
	"2- Juego 4 en linea"<<std::endl<<
	"3- Salir"<<std::endl;
	std::cin>>opcion;
	return opcion;
}
//Muestra el menu interno
int Interfaz::mostrarMenuInterno()
{
	int opcion=0;
	std::cout<<"\n1- Registrar Profesor"<<std::endl<<
	"2- Registrar curso"<<std::endl<<
	"3- Registrar estudiante"<<std::endl<<
	"4- Ligar profesor a curso"<<std::endl<<
	"5- Ligar estudiante a curso"<<std::endl<<
	"6- Registrar abonos estudiantes"<<std::endl<<
	"7- Estado financiero"<<std::endl<<
	"8- Registrar administradores"<<std::endl<<
	"9- Devolver al menu principal"<<std::endl;
	std::cin>>opcion;
	return opcion;
}
//Solicita valores enteros
int Interfaz::solicitarValoresInt(std::string s)
{
	int valor=0;
	std::cout<<s<<std::endl;
	std::cin>>valor;
	return valor;
}
//Solicita valores flotantes
float Interfaz::solicitarValoresFloat(std::string s)
{
	float valor=0;
	std::cout<<s<<std::endl;
	std::cin>>valor;
	return valor;
}
//Solicita cadenas 
std::string Interfaz::solicitarValoresString(std::string s)
{
	std::cin.ignore();
	std::string valor=" ";
	std::cout<<s<<std::endl;
	getline(std::cin,valor);
	return valor;
}
//Solicita el usuario para iniciar sesion
std::string Interfaz::solicitarUsuario()
{
	std::string user=" ";
	std::cout<<"Ingrese su nombre de usuario: "<<std::endl;
	std::cin>>user;
	return user;
}
//Solicita la contrasena para iniciar sesion
std::string Interfaz::solicitarPassword()
{
	std::string pass=" ";
	std::cout<<"Ingrese su contrasena: "<<std::endl;
	std::cin>>pass;
	return pass;
}
//Muestra datos
void Interfaz::mostrarDatos(std::string dato)
{
	std::cout<<dato<<std::endl;
}
//Mostrar texto en pantalla
void Interfaz::mostrarTXT(std::string texto)
{
	std::cout<<texto<<std::endl;
}
//Limpia la pantalla
void Interfaz::limpiarScreen()
{
	system ("cls");
}



