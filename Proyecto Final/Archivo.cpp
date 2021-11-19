/*
	Name: Proyecto final de programacion I
	Author: Jurguen Monge Rojas
	Date: 03/11/21 11:25
	Description: Este proyecto es de mi autoria, consiste en un pequeño sistema de registro
	y de un juego que se llama 4 en linea.
*/
#include "Archivo.h"

//Constructor
Archivo::Archivo()
{
}

/*
	Aca se encuentran los diferentes metodos donde almaceno/registro las diferentes clases 
	ademas de que estan los metodos de leer para ver que hay dentro del archivo txt
*/
void Archivo::escribirProfesor(std::string s)
{
	std::ofstream fs("profesor.txt",std::ios::app);
	fs<<"\n"+s;
	fs.close();	
}

std::string Archivo::leerProfesor()
{
	std::ifstream fe;
	std::string textoLeido = " ", linea = " ";
	fe.open("profesor.txt", std::ios::out);
	if(fe.is_open()){
		while(!fe.eof()){
			getline(fe,linea);
 			textoLeido += "\n" + linea ;
		}
		fe.close();
	}else{
		textoLeido = "Error en la lectura del archivo!";
	}
	return textoLeido;
}

void Archivo::escribirEstudiante(std::string s)
{
	std::ofstream fs("estudiante.txt",std::ios::app);
	fs<<"\n"+s;
	fs.close();	
}

std::string Archivo::leerEstudiante()
{
	std::ifstream fe;
	std::string textoLeido = " ", linea = " ";
	fe.open("estudiante.txt", std::ios::out);
	if(fe.is_open()){
		while(!fe.eof()){
			getline(fe,linea);
 			textoLeido += "\n" + linea ;
		}
		fe.close();
	}else{
		textoLeido = "Error en la lectura del archivo!";
	}
	return textoLeido;
}

void Archivo::escribirCurso(std::string s)
{
	std::ofstream fs("registrarCursos.txt",std::ios::app);
	fs<<"\n"+s;
	fs.close();	
}

std::string Archivo::leerCurso()
{
	std::ifstream fe;
	std::string textoLeido = " ", linea = " ";
	fe.open("registrarCursos.txt", std::ios::out);
	if(fe.is_open()){
		while(!fe.eof()){
			getline(fe,linea);
 			textoLeido += "\n" + linea ;
		}
		fe.close();
	}else{
		textoLeido = "Error en la lectura del archivo!";
	}
	return textoLeido;
}

void Archivo::escribirAdmin(std::string s)
{
	std::ofstream fs("admin.txt",std::ios::app);
	fs<<"\n"+s;
	fs.close();	
}

std::string Archivo::leerAdmin()
{
	std::ifstream fe;
	std::string textoLeido = " ", linea = " ";
	fe.open("admin.txt", std::ios::out);
	if(fe.is_open()){
		while(!fe.eof()){
			getline(fe,linea);
 			textoLeido += "\n" + linea ;
		}
		fe.close();
	}else{
		textoLeido = "Error en la lectura del archivo!";
	}
	return textoLeido;
}

void Archivo::escribirEstudianteaCurso(std::string codigo,std::string s)
{
	std::ofstream fs(codigo.c_str(),std::ios::app);
	fs<<"\n"+s;
	fs.close();
}

std::string Archivo::leerEstudianteaCurso(std::string codigo)
{
	std::ifstream fe;
	std::string textoLeido = " ", linea = " ";
	fe.open(codigo.c_str(), std::ios::out);
	if(fe.is_open()){
		while(!fe.eof()){
			getline(fe,linea);
 			textoLeido += "\n" + linea ;
		}
		fe.close();
	}else{
		textoLeido = "Error en la lectura del archivo!";
	}
	return textoLeido;
}

void Archivo::escribirProfesoraCurso(std::string codigo,std::string s)
{
	std::ofstream fs(codigo.c_str(),std::ios::app);
	fs<<"\n"+s;
	fs.close();
}

std::string Archivo::leerProfesoraCurso(std::string codigo)
{
	std::ifstream fe;
	std::string textoLeido = " ", linea = " ";
	fe.open(codigo.c_str(), std::ios::out);
	if(fe.is_open()){
		while(!fe.eof()){
			getline(fe,linea);
 			textoLeido += "\n" + linea ;
		}
		fe.close();
	}else{
		textoLeido = "Error en la lectura del archivo!";
	}
	return textoLeido;
}

void Archivo::registrarAbono(std::string s)
{
	std::ofstream fs("abono.txt",std::ios::app);
	fs<<"\n"+s;
	fs.close();
}

std::string Archivo::mostrarEstado()
{
	std::ifstream fe;
	std::string textoLeido = " ", linea = " ";
	fe.open("abono.txt", std::ios::out);
	if(fe.is_open()){
		while(!fe.eof()){
			getline(fe,linea);
 			textoLeido += "\n" + linea ;
		}
		fe.close();
	}else{
		textoLeido = "Error en la lectura del archivo!";
	}
	return textoLeido;
}

int Archivo::validarAcceso(std::string usuario,std::string contra)
{
	std::ifstream fe;
	int i=0;
	std::string textoLeido = " ",linea=" ";
	fe.open("admin.txt", std::ios::out);
	if(fe.is_open()){
		while(!fe.eof()){
			getline(fe,linea);
 			textoLeido += "\n" + linea ;
		}
		fe.close();
	}else{
		textoLeido = "Error en la lectura del archivo!";
	}
	
	size_t encontrada = textoLeido.find(usuario);
	size_t encontrarPass = textoLeido.find(contra);
	if(encontrada!=std::string::npos && encontrarPass!=std::string::npos){
		i=1;
	}
	return i;
}

int Archivo::validarCodigo(std::string codigo)
{
	std::ifstream fe;
	int i=0;
	std::string textoLeido = " ",linea=" ";
	fe.open("registrarCursos.txt", std::ios::out);
	if(fe.is_open()){
		while(!fe.eof()){
			getline(fe,linea);
 			textoLeido += "\n" + linea ;
		}
		fe.close();
	}else{
		textoLeido = "Error en la lectura del archivo!";
	}
	
	size_t encontrada = textoLeido.find(codigo);
	if(encontrada!=std::string::npos){
		i=1;
	}
	return i;
}

int Archivo::validarEstudiante(std::string estudiante)
{
	std::ifstream fe;
	int i=0;
	std::string textoLeido = " ",linea=" ";
	fe.open("estudiante.txt", std::ios::out);
	if(fe.is_open()){
		while(!fe.eof()){
			getline(fe,linea);
 			textoLeido += "\n" + linea ;
		}
		fe.close();
	}else{
		textoLeido = "Error en la lectura del archivo!";
	}
	
	size_t encontrada = textoLeido.find(estudiante);
	if(encontrada!=std::string::npos){
		i=1;
	}
	return i;
}

int Archivo::validarProfesor(std::string profesor)
{
	std::ifstream fe;
	int i=0;
	std::string textoLeido = " ",linea=" ";
	fe.open("profesor.txt", std::ios::out);
	if(fe.is_open()){
		while(!fe.eof()){
			getline(fe,linea);
 			textoLeido += "\n" + linea ;
		}
		fe.close();
	}else{
		textoLeido = "Error en la lectura del archivo!";
	}
	
	size_t encontrada = textoLeido.find(profesor);
	if(encontrada!=std::string::npos){
		i=1;
	}
	return i;
}
