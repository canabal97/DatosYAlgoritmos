//Ingresar numeros enteros hasta cargar un
// arreglo de 8 posiciones intercalando un
// numero impar positivo y un numero negativo.
// Mostrarlo
//Calcular:
//1) El valor maximo y el valor minimo.
//2) El promedio de los elementos del arreglo e
//insertarlo en la primera posicion del arreglo
//3) Ordenar el arreglo de menor a mayor.

//Ejemplo:
//[1][-1][3][-2][5][-3][7][-4]
//Max: 7
//Min: -4
//[0][1][-1][3][-2][5][-3][7][-4]
//[-4][-3][-2][-1][0][1][3][5][7]

#include <stdio.h>
#include <stdlib.h>

#define CANT 8 //constante

void cargar(int arreglo[]){
    //void: no devuelve nada (sin return)
    int numero = 0;
    int posicion=0;
    int numImpar =0;
    int NumNegativo=1;

    while(posicion <CANT){
        printf("Ingrese un numero\n");
        scanf("%d", &numero);
        if (posicion%2 == 0){

            if(numero>0 && numero%2!=0){

                arreglo[posicion] = numero;
                posicion++;
            }
        }else{

            if(numero<0){

                arreglo[posicion] = numero;
                posicion++;

            }
        }

    }

}

void mostrar(int arreglo[]){

    for(int i=0; i<CANT+1; i++){

        printf("[%d]", arreglo[i]);
    }
    printf("\n");
}

int maximo(int arreglo[]){

    int maxi = arreglo[0];

    for(int i=0; i<CANT; i++){
        if(arreglo[i]>maxi){
            maxi = arreglo[i];
        }
    }

    return maxi;
}

int minimo(int arreglo[]){

    int min = arreglo[0];

    for(int i=0; i<CANT; i++){
        if(arreglo[i]<min){
            min = arreglo[i];
        }
    }

    return min;
}

int promedio(int arreglo[]){

    int suma = 0;

    for(int i=0; i<CANT; i++){

        suma+= arreglo[i];

    }
    int prom = suma/CANT;

    return prom;

}

void ordenar(int arreglo[]){

    int i, j;
    for (i=0; i<CANT-1; i++){
        for (j=0; j<CANT-i-1; j++){
            if (arreglo[j] > arreglo[j+1]){
                int temp = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = temp;
            }
        }
    }
}

int main(){
    //int cant = 8
    int arreglo[CANT+1];
    int maxi, min, prom;


    cargar(arreglo);
    mostrar(arreglo);

    maxi = maximo(arreglo);
    min = minimo(arreglo);
    prom = promedio(arreglo);

    printf("Max: %d", maxi);
    printf("Min: %d", min);
    printf("Prom: %d", prom);

    for(int i= CANT+1; i>0; i--){

        arreglo[i]= arreglo[i-1];


    }

    arreglo[0] = prom;

    mostrar(arreglo);
    ordenar(arreglo);
    mostrar(arreglo);


    return 0;
}
