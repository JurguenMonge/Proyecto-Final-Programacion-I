/*
	Name: Proyecto final de programacion I
	Author: Jurguen Monge Rojas
	Date: 03/11/21 11:25
	Description: Este proyecto es de mi autoria, consiste en un pequeño sistema de registro
	y de un juego que se llama 4 en linea.
*/
#include "Administrador.h"

Administrador::Administrador()
{
}

void Administrador::setNombre(std::string nNombre)
{
	nombre = nNombre;
}
void Administrador::setPuesto(std::string nPuesto)
{
	puesto = nPuesto;
}
void Administrador::setJornada(std::string nJornada)
{
	jornada = nJornada;
}
void Administrador::setContrasena(std::string nContrasena)
{
	contrasena = nContrasena;
}
std::string Administrador::getNombre()
{
	return nombre;
}
std::string Administrador::getPuesto()
{
	return puesto;
}
std::string Administrador::getJornada()
{
	return jornada;
}
std::string Administrador::getContrasena()
{
	return contrasena;
}
std::string Administrador::toString()
{
	std::stringstream s;
	s<<"Los datos del administrador son: "<<std::endl;
	s<<"Nombre: "<<nombre<<std::endl;
	s<<"Puesto: "<<puesto<<std::endl;
	s<<"Jornada: "<<jornada<<std::endl;
	s<<"Contrasena: "<<contrasena<<std::endl;
	return s.str();
}
Administrador::~Administrador()
{
}
