#include <stdio.h>

void coletarValores(int *num1, int *num2){

    printf("Digite o primeiro valor: ");
    scanf("%d", num1);

    printf("Digite o segundo valor: ");
    scanf("%d", num2);
}

void ordenarValores(int *num1, int *num2){
    int aux;

    if(*num1 > *num2){
        aux = *num1;
        *num1 = *num2;
        *num2 = aux;
    }
}

void somarValores(int *num1, int *num2, int *soma){

    printf("\n\n%d", *num1);

    int i;
    *soma = *num1;

    for(i = *num1; i < *num2; i++){
        *soma += i + 1;
        printf(" %d", i + 1);
    }

    printf(" - soma = %d\n\n", *soma);
}

int main(){

    int num1, num2, soma = 0;

    coletarValores(&num1, &num2);
    ordenarValores(&num1, &num2);
    somarValores(&num1, &num2, &soma);

    return 0;
}