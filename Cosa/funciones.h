#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define LIBRE 0
#define OCUPADO 1

typedef struct{

char nombre[50];
int legajo;
int nota1;
int nota2;
float promedio;
int estaVacio;

}datoAlumno;

void cargarListadoDeAlumnos(datoAlumno[], int);
datoAlumno cargarAlumno(void);

void mostarUnAlumno(datoAlumno);
void mostrarAlumnos(datoAlumno[], int);


#endif // FUNCIONES_H_INCLUDED
