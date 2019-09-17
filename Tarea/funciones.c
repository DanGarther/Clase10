#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

eAlumno cargarAlumnos(void){

eAlumno alumnoNuevo;

printf("Ingrese nombre: \n");
fflush(stdin);
scanf("%[^\n]", alumnoNuevo.nombre);

printf("Ingrese legajo: \n");
scanf("%d", &alumnoNuevo.legajo);

printf("Ingrese promedio: \n");
scanf("%f", &alumnoNuevo.promedio);

alumnoNuevo.estado = OCUPADO;


}

int buscarLibre(eAlumno listadoDeAlumnos[], int T){
    int indice = -1;
    int i;

    for(i=0;i<T;i++)
    {
        if(listadoDeAlumnos[i].estado!=OCUPADO)
        {
            indice = i;
            break;
        }
    }
    return indice;

}

void cargarListadoDeAlumnos(eAlumno listadoDeAlumnos[], int T){

 int indice;

    indice = buscarLibre(listadoDeAlumnos, T);
    printf("Indice: %d\n", indice);
    if(indice!=-1)
    {
        //hay lugar
        listadoDeAlumnos[indice] = cargarAlumnos();
    }
    else
    {
        printf("No hay espacio disponible");
    }


}


void mostrarUnAlumno(eAlumno miAlumno)
{
    printf("\n%s\t\t",miAlumno.nombre);
    printf("\t\t%d\t\t",miAlumno.legajo);
    printf("\t\t%f",miAlumno.promedio);
}

void mostrarListadoAlumnos(eAlumno listadoDeAlumnos[], int T)
{
    int i;

    for(i=0; i<T; i++)
    {
        if(listadoDeAlumnos[i].estado==OCUPADO)
        {
            mostrarUnAlumno(listadoDeAlumnos[i]);
        }

    }
}
