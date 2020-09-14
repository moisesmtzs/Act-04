#include <stdio.h>
#include <stdlib.h>

void num(){

    int num[5];
    float prom;
    int sum = 0, i;
    for ( i=0 ; i<5 ; i++ ){

        printf("Número %i:", i+1);
        scanf("%i", &num[i]);

    }
    for ( i=0 ; i<5 ; i++ ){

        printf("%i\n", num[i]);

    }
    for ( i=0 ; i<5 ; i++ ){

        sum += num[i]; 

    }
    printf("Suma: %i \n",sum);
    printf("Promedio: %.2f \n",sum/5.0);



}

void mostrar( int n, char arreglo[] ){

    


}

int main(){

    char opt;
    char arreglo[50];
    int n;
    do{

        printf("\n\n");
        printf(" 1.- Ingresar Números Enteros \n");
        printf(" 2.- Mostrar cadena 'n' veces \n");
        printf(" 3.- Personajes \n");
        printf(" 4.- Salir \n");
        scanf("%c",&opt);

        switch (opt){
        case '1':
            num();
            break;
        case '2':
            mostrar( n, arreglo );
            break;
        case '3':
            num();
            break;
        
        default:
            break;
        }
        fflush(stdin);

    }while (opt != '4');

    return 0;    








}




