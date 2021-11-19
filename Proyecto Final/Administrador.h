/*
	Name: Proyecto final de programacion I
	Author: Jurguen Monge Rojas
	Date: 03/11/21 11:25
	Description: Este proyecto es de mi autoria, consiste en un pequeño sistema de registro
	y de un juego que se llama 4 en linea.
*/
#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
#include <iostream>
#include <sstream>
/*
	La clase administrador no tiene atributos que comparte con otra clase, por lo tanto no tiene ninguna herencia
	ademas esta clase almacena datos de administradores para luego registrarlos en un txt.
*/

class Administrador
{
	public:
		Administrador();
		
		void setNombre(std::string nNombre);
		void setPuesto(std::string nPuesto);
		void setJornada(std::string nJornada);
		void setContrasena(std::string nContrasena);
		
		std::string getNombre();
		std::string getPuesto();
		std::string getJornada();
		std::string getContrasena();
		
		std::string toString();
		
		~Administrador();
	private:
		std::string nombre;
		std::string puesto;
		std::string jornada;
		std::string contrasena;
};

#endif
