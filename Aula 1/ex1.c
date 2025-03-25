#include <stdio.h>

void preencherDisponiveis(int *disponiveis){

    do
    {
        printf("Digite a quantidade de frango disponivel: ");
        scanf("%d", &disponiveis[0]);

        if(disponiveis[0] > 100 || disponiveis[0] < 0){
            printf("Quantidade inválida digite um numero de 0 a 100");
        }

    } while (disponiveis[0] > 100 || disponiveis[0] < 0);
    
    do
    {
        printf("Digite a quantidade de bife disponivel: ");
        scanf("%d", &disponiveis[1]);

        if(disponiveis[1] > 100 || disponiveis[1] < 0){
            printf("Quantidade inválida digite um numero de 0 a 100");
        }

    } while (disponiveis[1] > 100 || disponiveis[1] < 0);
    
    do
    {
        printf("Digite a quantidade de Massa disponivel: ");
        scanf("%d", &disponiveis[2]);

        if(disponiveis[2] > 100 || disponiveis[1] < 2){
            printf("Quantidade inválida digite um numero de 0 a 100");
        }
    } while (disponiveis[2] > 100 || disponiveis[2] < 0);
    
}

void preencherPedidos(int *pedidos){
    do
    {
        printf("\nDigite a quantidade de frango solicitada: ");
        scanf("%d", &pedidos[0]);

        if(pedidos[0] > 100 || pedidos[0] < 0){
            printf("Quantidade inválida digite um numero de 0 a 100");
        }
    } while (pedidos[0] > 100 || pedidos[0] < 0);
    
    do
    {
        printf("Digite a quantidade de bife solicitada: ");
        scanf("%d", &pedidos[1]);

        if(pedidos[1] > 100 || pedidos[1] < 0){
            printf("Quantidade inválida digite um numero de 0 a 100");
        }
    } while (pedidos[1] > 100 || pedidos[1] < 0);
    
    do
    {
        printf("Digite a quantidade de Massa solicitada: ");
        scanf("%d", &pedidos[2]);

        if(pedidos[2] > 100 || pedidos[2] < 0){
            printf("Quantidade inválida digite um numero de 0 a 100");
        }

    } while (pedidos[2] > 100 || pedidos[2] < 0);
    
}

void calc(int *disponiveis, int *pedidos){
    int sFrango, sBife, sMassa;
    int passageiroSemRefeicao = 0;

    sFrango = disponiveis[0] - pedidos[0]; 
    sBife = disponiveis[1] - pedidos[1]; 
    sMassa = disponiveis[2] - pedidos[2]; 

    if(sFrango < 0){
        passageiroSemRefeicao += sFrango * (-1);
    }
    if(sBife < 0){
        passageiroSemRefeicao += sBife * (-1);
    }
    if(sMassa < 0){
        passageiroSemRefeicao += sMassa * (-1);
    }

    printf("%d Passageiros ficaram sem a refeição escolhida.\n", passageiroSemRefeicao);
}

int main(){

    int disponiveis[3];
    int pedidos[3];

    preencherDisponiveis(disponiveis);
    preencherPedidos(pedidos);
    calc(disponiveis, pedidos);

    return 0;
}