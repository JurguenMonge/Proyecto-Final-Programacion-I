/*
	Name: Proyecto final de programacion I
	Author: Jurguen Monge Rojas
	Date: 03/11/21 11:25
	Description: Este proyecto es de mi autoria, consiste en un pequeño sistema de registro
	y de un juego que se llama 4 en linea.
*/
#include "Profesor.h"

//Constructor sin parametros
Profesor::Profesor()
{
	std::string nombreCompleto=" ";
	std::string fechaNacimiento=" ";
	std::string correo=" ";
	std::string direccion=" ";
	std::string telefono=" ";
	std::string grado=" ";
	std::string contrasena=" ";
}

//Metodos set y get
void Profesor::setNombreCompleto(std::string nNombreCompleto)
{
	nombreCompleto = nNombreCompleto;
}

void Profesor::setFechaNacimiento(std::string nFecha)
{
	fechaNacimiento = nFecha;
}

void Profesor::setCorreo(std::string nCorreo)
{
	correo = nCorreo;
}
	
void Profesor::setDireccion(std::string nDireccion)
{
	direccion = nDireccion;
}

void Profesor::setTelefono(std::string nTelefono)
{
	telefono = nTelefono;
}
	
void Profesor::setGrado(std::string nGrado)
{
	grado = nGrado;
}

void Profesor::setContrasena(std::string nContrasena)
{
	contrasena = nContrasena;
}

std::string Profesor::getNombreCompleto()
{
	return nombreCompleto;
}

std::string Profesor::getFechaNacimiento()
{
	return fechaNacimiento;
}
std::string Profesor::getCorreo()
{
	return correo;
}
std::string Profesor::getDireccion()
{
	return direccion;
}
std::string Profesor::getTelefono()
{
	return telefono;
}
std::string Profesor::getGrado()
{
	return grado;
}
std::string Profesor::getContrasena()
{
	return contrasena;
}	
Profesor::~Profesor()
{
}

//Metodo toString, muestra los datos
std::string Profesor::toString()
{
	std::stringstream s;
	s<<"Los datos del Profesor son: "<<std::endl;
	s<<"Nombre Completo: "<<nombreCompleto<<std::endl;
	s<<"Fecha de nacimiento: "<<fechaNacimiento<<std::endl;
	s<<"Correo electronico: "<<correo<<std::endl;
	s<<"Direccion: "<<direccion<<std::endl;
	s<<"Numero telefonico: "<<telefono<<std::endl;
	s<<"Grado academico: "<<grado<<std::endl;
	s<<"Contrasena: "<<contrasena<<std::endl;
	return s.str();
}
