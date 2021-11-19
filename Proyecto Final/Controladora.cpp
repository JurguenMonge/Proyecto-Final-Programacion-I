/*
	Name: Proyecto final de programacion I
	Author: Jurguen Monge Rojas
	Date: 03/11/21 11:25
	Description: Este proyecto es de mi autoria, consiste en un pequeño sistema de registro
	y de un juego que se llama 4 en linea.
*/
#include "Controladora.h"
//Constructor
Controladora::Controladora()
{
}
//Inicia el llamado de clases y ejecuta el programa
void Controladora::inicializar()
{
	//Instanciamiento de clases
	Interfaz in;
	Profesor pr;
	Curso cu;
	Estudiante es;
	Archivo ar;
	Juego ju;
	Administrador ad;
	Abono ab;
	
	//Inicializacion de variables
	int menuPrincipal=0,menuInterno=0,pos=0,dato=0,jugarNuevamente=0,jugar=0;
	std::string user=" ",pass=" ",jugador1=" ",jugador2=" ",cedulaEstudiante=" ",codigo=" ",codigoVer=" ",nombreProfe=" ";
	
	in.mostrarBienvenida();
	
	do{
		menuPrincipal=in.mostrarMenuPrincipal();
		switch(menuPrincipal){
			case 1:
				//Validar Acceso
				in.mostrarTXT("\nInicio de sesion: ");
				user=in.solicitarUsuario();
				pass=in.solicitarPassword();
				if((user.compare("adminSanPablo")==0) && (pass.compare("UsanP25")==0) || (ar.validarAcceso(user,pass)==1)){
				menuInterno=in.mostrarMenuInterno();
				switch(menuInterno){
					case 1:
						//Registrar Profesores
						in.mostrarTXT("\nA continuacion se le pediran los datos del profesor que desea registrar!");
						pr.setNombreCompleto(in.solicitarValoresString("\nIngrese el nombre: "));
						pr.setFechaNacimiento(in.solicitarValoresString("Ingrese la fecha de nacimiento (dd/mm/aa): "));
						pr.setCorreo(in.solicitarValoresString("Ingrese el correo electronico: "));
						pr.setDireccion(in.solicitarValoresString("Ingrese la direccion:"));
						pr.setTelefono(in.solicitarValoresString("Ingrese el numero telefonico: "));
						pr.setGrado(in.solicitarValoresString("Ingrese el grado academico: "));
						pr.setContrasena(in.solicitarValoresString("Ingrese la contrasena: "));
						ar.escribirProfesor(pr.toString());
						if(in.solicitarValoresInt("Ingrese:\n1-Para ver los profesores registrados\n2-Si no quiere ver los profesores registrados")==1){
							in.mostrarDatos(ar.leerProfesor());
						}
						break;
					case 2:
						//Registrar Cursos
						in.mostrarTXT("\nA continuacion se le pediran los datos del curso que desea registrar!");
						cu.setCarrera(in.solicitarValoresString("Ingrese la carrera a la que desea ligar el curso: "));
						cu.setNombre(in.solicitarValoresString("Ingrese el nombre del curso: "));
						cu.setCupo(in.solicitarValoresInt("Ingrese los cupos del curso: "));
						cu.setDia(in.solicitarValoresString("Ingrese el dia en que se imparte el curso: "));
						cu.setHora(in.solicitarValoresString("Ingrese la hora en que se imparte el curso: "));
						cu.setPrecio(in.solicitarValoresInt("Ingrese el precio del curso: "));
						cu.setFechaInicio(in.solicitarValoresString("Ingrese la fecha de inicio del curso: "));
						cu.setFechaFinalizacion(in.solicitarValoresString("Ingrese la fecha de finalizacion del curso: "));
						cu.setCodigo(in.solicitarValoresString("Ingrese el codigo del curso: "));
						ar.escribirCurso(cu.toString());
						if(in.solicitarValoresInt("Ingrese:\n1-Para ver los cursos registrados\n2-Si no quiere ver los cursos registrados")==1){
							in.mostrarDatos(ar.leerCurso());
						}
						break;
					case 3:
						//Registrar Estudiantes
						in.mostrarTXT("\nA continuacion se le pediran los datos del estudiante que desea registrar!");
						es.setNombreCompleto(in.solicitarValoresString("\nIngrese el nombre: "));
						es.setCedula(in.solicitarValoresInt("Ingrese el numero de cedula: "));
						es.setDireccion(in.solicitarValoresString("Ingrese la direccion: "));
						es.setTelefono(in.solicitarValoresString("Ingrese el numero telefonico: "));
						es.setOcupacion(in.solicitarValoresString("Ingrese la ocupacion: "));
						es.setCorreo(in.solicitarValoresString("Ingrese el correo electronico: "));
						es.setEstadoCivil(in.solicitarValoresString("Ingrese el estado civil: "));
						es.setGrado(in.solicitarValoresString("Ingrese el nivel educativo: "));
						ar.escribirEstudiante(es.toString());
						if(in.solicitarValoresInt("Ingrese:\n1-Para ver los estudiantes registrados\n2-Si no quiere ver los estudiantes registrados")==1){
							in.mostrarDatos(ar.leerEstudiante());
						}
						break;
					case 4:
						//Ligar profesor a curso
						in.mostrarDatos(ar.leerProfesor());
						nombreProfe=in.solicitarValoresString("Ingrese el nombre del profesor al que desea ligar: ");
						in.mostrarDatos(ar.leerCurso());
						codigo=in.solicitarValoresString("Ingrese el codigo del curso al que quiere ligar el profesor: ");
						if((ar.validarCodigo(codigo)==1)&&(ar.validarProfesor(nombreProfe)==1)){
							ar.escribirProfesoraCurso(codigo,nombreProfe);
						}else{
							in.mostrarTXT("NO SE PUDO LIGAR, el codigo no existe o el nombre");
						}
						if(in.solicitarValoresInt("Ingrese:\n1-Para ver los profesores ligados\n2-Si no quiere ver los profesores registrados")==1){
							codigoVer=in.solicitarValoresString("Ingrese el codigo del curso que desea ver: ");
							in.mostrarDatos(ar.leerProfesoraCurso(codigoVer));
					 	}
						break;
					case 5:
						//Ligar estudiante a curso
						in.mostrarDatos(ar.leerEstudiante());
						cedulaEstudiante=in.solicitarValoresString("Ingrese el numero de cedula del estudiante que desea ligar: ");
						in.mostrarDatos(ar.leerCurso());
						codigo=in.solicitarValoresString("Ingrese el codigo del curso al que quiere ligar al estudiante: ");
						if((ar.validarCodigo(codigo)==1)&&(ar.validarEstudiante(cedulaEstudiante)==1)){
							ar.escribirEstudianteaCurso(codigo,cedulaEstudiante);
						}else{
							in.mostrarTXT("NO SE PUDO LIGAR, el codigo no existe o la cedula");
						}
						if(in.solicitarValoresInt("Ingrese:\n1-Para ver los estudiantes ligados\n2-Si no quiere ver los estudiantes registrados")==1){
							codigoVer=in.solicitarValoresString("Ingrese el codigo del curso que desea ver: ");
							in.mostrarDatos(ar.leerEstudianteaCurso(codigoVer));
					 	}
						break;
					case 6:
						//Registrar abonos estudiantiles
						ab.setMonto(in.solicitarValoresInt("Ingrese el monto que abona: "));
						ab.setCedula(in.solicitarValoresInt("Ingrese la cedula del estudiante: "));		
						ar.registrarAbono(ab.toString());
						break;
					case 7:
						//mostrar estado financiero
						in.mostrarDatos(ar.mostrarEstado());
						break;
					case 8:
						//Registrar Admins
						in.mostrarTXT("\nA continuacion se le pediran los datos del administrados que desea registrar!");
						ad.setNombre(in.solicitarValoresString("Ingrese el nombre: "));
						ad.setPuesto(in.solicitarValoresString("Ingrese el puesto que desempena: "));
						ad.setJornada(in.solicitarValoresString("Ingrese la jornada laboral (medio tiempo, tiempo completo): "));
						ad.setContrasena(in.solicitarValoresString("Ingrese la contrasena (Debe ser sin espacios, sin caracteres especiales y debe contener al menos un número o una letra, no menor a 6 letras): "));
						ar.escribirAdmin(ad.toString());
						if(in.solicitarValoresInt("Ingrese:\n1-Para ver los administradores registrados\n2-Si no quiere ver los administradores registrados")==1){
							in.mostrarDatos(ar.leerAdmin());
						} 
						break;
					}
				}else{
					in.mostrarTXT("Acceso denegado");
				}
			break;
			case 2:
				//Juego
				jugar = in.solicitarValoresInt("Ingrese:\n1-Jugar vs Maquina\n2-Jugar Jugador vs Jugador");
				switch(jugar){
					case 1:
						//Jugar contra la maquina
						while(jugarNuevamente != 2){
							ju.jugarMaquina();
							jugarNuevamente=in.solicitarValoresInt("Desea jugar de nuevo? 1-si,2-no");
						}
					break;
					case 2:
						//Jugar contra otro jugador
						jugador1 = in.solicitarValoresString("Ingrese su nombre Jugador 1: ");
						jugador2 = in.solicitarValoresString("Ingrese su nombre Jugador 2: ");
						while(jugarNuevamente != 2){
							ju.jugarJvJ(jugador1,jugador2);
							jugarNuevamente = in.solicitarValoresInt("Desea jugar de nuevo? 1-si,2-no");
						}
					break;
				}		
		}
	}while(menuPrincipal != 3);	
}

