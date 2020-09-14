
#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <stdio.h>
struct personaje
{
    char nombre[20];
    char tipo[20];
    float fuerza;
    float salud;

}personajes[5];

unsigned int cont = 0;

void capturar_personaje(){

    if ( cont < 5 ){
        printf("Nombre: ");
        scanf("%s", &personajes[cont].nombre);
        printf("Tipo: ");
        scanf("%s", &personajes[cont].tipo);
        printf("Fuerza: ");
        scanf("%f", &personajes[cont].fuerza);
        printf("Salud: ");
        scanf("%f", &personajes[cont].salud);
        cont++;
    } else {
        printf("La lista de personajes está llena\n");
    }

}

void mostrar_personaje(){

    for ( int i = 0 ; i < cont ; i++ ){

        printf("Nombre del personaje: %s\n",personajes[i].nombre);
        printf("Tipo del personaje: %s\n",personajes[i].tipo);
        printf("Fuerza del personaje: %f\n",personajes[i].fuerza);
        printf("Salud del personaje: %f\n",personajes[i].salud);


    }



}


#endif



