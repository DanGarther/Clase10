#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void cargarListadoDeAlumnos(datoAlumno listadoDeAlumnos[], int T){

int indice;

indice = buscarLibre(listadoDeAlumnos, T);
    printf("Indice: %d\n", indice);
    if(indice!=-1)
    {
        listadoDeAlumnos[indice] = cargarAlumno();
    }
    else
    {
        printf("No hay espacio disponible");
    }


}



datoAlumno cargarAlumno(void){
    datoAlumno alumnoNuevo;

printf("Ingrese nombre del alumno: \n");
fflush(stdin);
scanf("%[^\n]", alumnoNuevo.nombre);

printf("Ingrese legajo del alumno: \n");
scanf("%d", &alumnoNuevo.legajo);

printf("Ingrese primera nota del alumno: \n");
scanf("%d", &alumnoNuevo.nota1);

printf("Ingrese segunda nota del alumno: \n");
scanf("%d", &alumnoNuevo.nota2);

printf("Ingrese promedio del alumno: \n");
scanf("%f", &alumnoNuevo.promedio);

}



int buscarLibre(datoAlumno listadoDeAlumnos[], int T)
{
    int indice = -1;
    int i;

    for(i=0;i<T;i++)
    {
        if(listadoDeAlumnos[i].estaVacio!=OCUPADO)
        {
            indice = i;
            break;
        }
    }
    return indice;

}


void mostarUnAlumno(datoAlumno unAlumno){

    printf("%s\t\t", unAlumno.nombre);
    printf("\t\t%d\t\t", unAlumno.legajo);
    printf("\t\t%d\t\t", unAlumno.nota1);
    printf("\t\t%d\t\t", unAlumno.nota2);
    printf("\t\t%f\t\t", unAlumno.promedio);


}


void mostrarAlumnos(datoAlumno listaDeAlumnos[], int T){

int i;


    for(i=0; i<T; i++)
    {
        if(listaDeAlumnos[i].estaVacio==OCUPADO)
        {
            mostarUnAlumno(listaDeAlumnos[i]);
        }

    }


}




