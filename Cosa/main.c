#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define T 5

int main()
{

    char resp;
    datoAlumno alumnoNuevo[T];
    int i;

    for(i=0; i<T; i++){

        alumnoNuevo[i].estaVacio = LIBRE;
    }


    printf("----------------------------------\n");
    printf("|Bienvenido al sistema de base de|\n");
    printf("|base de datos, elija una opcion.|\n");
    printf("----------------------------------\n\n");

do{    printf("------------------------------------\n");
    printf("|1)Cargar datos de un alumnos.     |\n");
    printf("|2)Mostrar datos de alumnos.       |\n");
    printf("|3)Ordenar listado.                |\n");
    printf("|4)Salir.                          |\n");
    printf("------------------------------------\n");
scanf("%c", &resp);

switch(resp){
case '1':
    cargarAlumno();
    break;

case '2':
    mostrarAlumnos(alumnoNuevo, T);
    break;

case '3':
    printf("Aca deberia ordenar.\n");
    break;

case '4':
    printf("Aca deberia salir.\n");
    break;

default:
    printf("Aca deberia dar error.\n");
    break;
}

system("pause");
system("cls");


}while(resp!='s');

    return 0;
}
