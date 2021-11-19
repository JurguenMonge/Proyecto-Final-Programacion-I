/*
	Name: Proyecto final de programacion I
	Author: Jurguen Monge Rojas
	Date: 03/11/21 11:25
	Description: Este proyecto es de mi autoria, consiste en un pequeño sistema de registro
	y de un juego que se llama 4 en linea.
*/
#include <iostream>

struct Interfaz{
	//Constructor
	Interfaz();
	
	//Metodos 
	void mostrarBienvenida();
	std::string solicitarUsuario();
	std::string solicitarPassword();
	int solicitarValoresInt(std::string s);
	float solicitarValoresFloat(std::string s);
	std::string solicitarValoresString(std::string s);
	int mostrarMenuPrincipal();
	int mostrarMenuInterno();
	void mostrarDatos(std::string dato);
	void mostrarTXT(std::string texto);
	void limpiarScreen();


};
