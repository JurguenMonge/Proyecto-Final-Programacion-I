/*
	Name: Proyecto final de programacion I
	Author: Jurguen Monge Rojas
	Date: 03/11/21 11:25
	Description: Este proyecto es de mi autoria, consiste en un pequeño sistema de registro
	y de un juego que se llama 4 en linea.
*/

#ifndef PROFESOR_H
#define PROFESOR_H
#include <iostream>
#include <sstream>
/*
	La clase profesor almacena todos los datos de un profesor que se desea registrar
	y luego el toString se le pasa a los archivos txt.
*/
class Profesor
{
	public:
		//Constructores
		Profesor();
		
		//Metodos set y get
		void setNombreCompleto(std::string nNombreCompleto); 
		void setFechaNacimiento(std::string nFecha);
		void setCorreo(std::string nCorreo);
		void setDireccion(std::string nDireccion);
		void setTelefono(std::string nTelefono);
		void setGrado(std::string nGrado);
		void setContrasena(std::string nContra);
		
		std::string getNombreCompleto();
		std::string getFechaNacimiento();
		std::string getCorreo();
		std::string getDireccion();
		std::string getTelefono();
		std::string getGrado();
		std::string getContrasena();
		
		//Metodo toString
		std::string toString();
		
		//Destructor
		~Profesor();
	protected:
		//Atributos
		std::string nombreCompleto;
		std::string fechaNacimiento;
		std::string correo;
		std::string direccion;
		std::string telefono;
		std::string grado;
		std::string contrasena;
};

#endif
