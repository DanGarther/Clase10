#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int legajo;
    char nombre[29];
    float promedio;
    int estado;
} eAlumno;

eAlumno cargarAlumnos(void);
int buscarLibre(eAlumno[], int);
void cargarListadoDeAlumnos(eAlumno[], int);
void mostrarUnAlumno(eAlumno);
void mostrarListadoAlumnos(eAlumno[], int);


#endif // FUNCIONES_H_INCLUDED
