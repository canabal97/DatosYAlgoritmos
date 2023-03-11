#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero = 0;
    float numero2 = 8.9;
    numero = 2;
    int i=0;

    numero+=2;//acumulacion
    numero++;//numero = numero +1 (contador)
    numero--;//numero = numero -1 (contador)
    numero = numero2/2;

    printf("la primera %d la segunda %f\n", numero, numero2);

    while(i<10){//condicion
        printf("%d\n", i);
        i++;
    }

    do{
        printf("%d\n", i);//el "do" del "do-while" hace que el codigo se ejecute al menos una vez
        i++;
    }
    while(i<5);

    for(i=0; i<10; i++){
        printf("%d\n", i+1);
    }

    if (!(numero % 2 == 0 && numero2!=5))
    {
        printf("El numero es impar e igual a 5\n");
    }
    else if(numero>5)
    {
        printf("El numero es mayor o igual a 5");
    
    }
    else
    {
        printf("El numero es impar \n");
    }
    //and = &&
    //or = ||
    
    //\n es salto de linea, \t es tabulacion (aprox. 4 espacios por defecto)
    // /* control+k+c comentar, control+k+u descomentar*/
    printf("Multiplicacion %d\n", numero*2);
    printf("Hola Mundo %d\n", numero);
    printf("Float %.3f", numero2);


    return 0;
}