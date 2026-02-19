#include <stdio.h>
#include <stdio.h>

int main() {

    // Número de casas que cada peça vai andar
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int contador;

    //Movimento da Torre
    
    printf("Movimento da Torre:\n");

    for(contador = 1; contador <= casasTorre; contador++) {
        printf("Direita\n");
    }

    printf("\n");


    
    // Movimento do Bispo (while)
    
    printf("Movimento do Bispo:\n");

    contador = 1;

    while(contador <= casasBispo) {
        printf("Cima Direita\n");
        contador++;
    }

    printf("\n");


    
    // Movimento da Rainha (do-while)

    printf("Movimento da Rainha:\n");

    contador = 1;

    do {
        printf("Esquerda\n");
        contador++;
    } while(contador <= casasRainha);


    return 0;
}
