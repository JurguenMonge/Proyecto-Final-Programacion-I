/*
	Name: Proyecto final de programacion I
	Author: Jurguen Monge Rojas
	Date: 03/11/21 11:25
	Description: Este proyecto es de mi autoria, consiste en un pequeño sistema de registro
	y de un juego que se llama 4 en linea.
*/
#include "Curso.h"

Curso::Curso()
{
}

void Curso::setCarrera(std::string nCarrera)
{
	carrera = nCarrera;
}

void Curso::setNombre(std::string nNombre)
{
	nombre = nNombre;
}

void Curso::setCupo(int nCupo)
{
	cupo = nCupo;
}

void Curso::setDia(std::string nDia)
{
	dia = nDia;
}

void Curso::setHora(std::string nHora)
{
	hora = nHora;
}

void Curso::setPrecio(int nPrecio)
{
	precio = nPrecio;
}

void Curso::setFechaInicio(std::string nFechaInicio)
{
	fechaInicio = nFechaInicio;
}
void Curso::setFechaFinalizacion(std::string nFechaFinalizacion)
{
	fechaFinalizacion = nFechaFinalizacion;
}

void Curso::setCodigo(std::string nCodigo)
{
	codigo = nCodigo;
}

std::string Curso::getCodigo()
{
	return codigo;
}

std::string Curso::getCarrera()
{
	return carrera;
}
std::string Curso::getNombre()
{
	return nombre;
}
int Curso::getCupo()
{
	return cupo;
}
std::string Curso::getDia()
{
	return dia;
}
std::string Curso::getHora()
{
	return hora;
}
int Curso::getPrecio()
{
	return precio;
}
std::string Curso::getFechaInicio()
{
	return fechaInicio;
}
std::string Curso::getFechaFinalizacion()
{
	return fechaFinalizacion;
}
std::string Curso::toString()
{
	std::stringstream s;
	s<<"Los datos del curso son: "<<std::endl;
	s<<"Carrera: "<<carrera<<std::endl;
	s<<"Nombre: "<<nombre<<std::endl;
	s<<"Cupos: "<<cupo<<std::endl;
	s<<"Dia: "<<dia<<std::endl;
	s<<"Hora: "<<hora<<std::endl;
	s<<"Precio: "<<precio<<std::endl;
	s<<"Fecha de inicio: "<<fechaInicio<<std::endl;
	s<<"Fecha de finalizacion: "<<fechaFinalizacion<<std::endl;
	s<<"Codigo del curso: "<<codigo<<std::endl;
	return s.str();
}
Curso::~Curso()
{
}
