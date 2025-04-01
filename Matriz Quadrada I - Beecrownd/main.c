#include <stdio.h>
#define MAX 100

int lerOrdem(){
    int ordem = 0;

    scanf("%d", &ordem);

    return(ordem);
}

void mostrarMatriz(int mat[MAX][MAX], int ordem)
{
    int i, j;
    for(i = 0; i < ordem; i++){
        for(j = 0; j < ordem; j++){
            if(j == ordem - 1){
                printf("%3d", mat[i][j]);
            } else {
                printf(" %3d ", mat[i][j]);
            }
            
        }
        printf("\n");
    }
}

void montarMatriz(int mat[MAX][MAX], int ordem)
{
    int i, j;
    int aux = 0, valor = 1;

    while(aux < (ordem + 1) / 2)
    {
        for(i = aux; i < ordem - aux; i++){
            for(j = aux; j < ordem - aux; j++){
                mat[i][j] = valor;
            }
        }

        aux++;
        valor++;
    }

}

int main(int argc, char const *argv[])
{
    
    int ordem = 0;
    int mat[MAX][MAX];

    ordem = lerOrdem();

    while (ordem != 0)
    {
        montarMatriz(mat, ordem);
        mostrarMatriz(mat, ordem);
        ordem = lerOrdem();
    }

    return 0;
}



