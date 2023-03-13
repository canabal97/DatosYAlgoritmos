//Calcular el índice de masa corporal ingresando el peso de una persona en kilos y suestatura en metros.
// Este índice se obtiene realizando el cociente entre el peso y elcuadrado de la estatura.


void cargar(float peso, float altura){

    printf("Ingrese un peso en kgs\n");
    scanf("%f", &peso);

    while(peso<1 || peso>500){

        printf("El peso no puede se menor a 1kg ni mayor a 500kg. Intentelo nuevamente");
        scanf("%f", &peso);

    }

    printf("Ingrese una altura en mts\n");
    scanf("%f", &altura);

    while(altura<1 || altura){

        printf("La altura ingresada es incorrecta. No puede ser menor a 1 o mayor a 3");
        scanf("%f", &altura);

    }

}


int calculo(float peso, float altura){

    float imc = peso/(altura*altura);

    return imc;
}


float main(){

    float peso, altura, imc;

    cargar(peso, altura);

    imc = calculo(peso, altura);

    printf("El indice de masa corporal es de %f", imc);

}