#include <stdio.h>


// Movimentação da Torre
void movimentoTorre(int casas) {
    for (int i = 0; i < casas; i++) {
        printf("TORRE move %d casas para a direita\n", i + 1);
    }
}

//MOVIMENTAÇÃO DA RAINHA
void movimentoRainha(int casas) {
    for (int i = 0; i < casas; i++) {
        printf("RAINHA move %d casas para a esquerda\n", i + 1);
    }
}

// MOVIMENTAÇÃO DO BISPO
void movimentoBispo(int casas, char diagonal[20]) {
    for (int i = 0; i < casas; i++) {
        printf("BISPO move %d casas para diagonal %s\n", i + 1, diagonal);
    }
}

// MOVIMENTAÇÃO DO CAVALO
void movimentoCavalo(int casas) {

    int movimentocavalo = 1;
    while (movimentocavalo <= 1) {
    printf("CAVALO move 2 casas para cima\n");
    for (int j = 0; j < 1; j++) {
        printf("e 1 casa para direita\n");
    }
    break; // resolve o problema de loop infinito
    }
}

int main () {
    int casas;

    printf("BEM VINDO AO JOGO DE XADREZ\n");
    printf("Neste jogo possuímos as seguinte peças:\n");
    printf("1 - Torre\n");
    printf("2 - Rainha\n");
    printf("3 - Bispo\n");
    printf("4 - Cavalo\n");
    printf("5 - Sair\n");
    printf("Escolha uma peça para movimentar: ");
    scanf("%d", &casas);

    switch (casas) {
        case 1:
            printf("Quantas casas deseja mover a Torre? ");
            scanf("%d", &casas);
            movimentoTorre(casas);
            break;
        case 2:
            printf("Quantas casas deseja mover a Rainha? ");
            scanf("%d", &casas);
            movimentoRainha(casas);
            break;
        case 3:
            printf("Quantas casas deseja mover o Bispo? ");
            scanf("%d", &casas);
            printf("E para qual diagonal? (cimaDireita/cimaEsquerda/baixoDireita/baixoEsquerda): ");
            char diagonal[20];
            scanf("%s", diagonal);
            movimentoBispo(casas, diagonal);
            break;
        case 4:
            movimentoCavalo(casas);
            break;
        case 5:
            printf("Saindo do jogo...\n");
            return 0;
        default:
            printf("Opção inválida! Tente novamente.\n");
    }
    printf("Deseja continuar jogando? (1 - Sim, 0 - Não): ");
    int continuar;
    scanf("%d", &continuar);
    if (continuar == 1) {
        main(); // Chama a função main novamente para reiniciar o jogo
    } else {
        printf("Obrigado por jogar!\n");
    }
    

return 0;

}
