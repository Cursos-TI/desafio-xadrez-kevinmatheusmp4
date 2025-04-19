#include <stdio.h>

int main () {

// Movimentação da Torre

for (int i = 0; i < 5; i++)
{
    printf("TORRE move %d casas para a direita\n", i + 1);
}

//MOVIMENTAÇÃO DA RAINHA

for (int i = 0; i < 8; i++)
{
    printf("RAINHA move %d casas para a esquerda\n", i + 1);
}

// MOVIMENTAÇÃO DO BISPO

for (int i = 0; i < 5; i++)
{
    printf("BISPO move %d casas para (cima,direita)\n", i + 1);
}
/*

GUIA DE CASAS A MOVER - NIVEL NOVATO

Torre move 5 - horizontal e vertical
Bispo move 5 - diagonal (horizontal e vertical)
Rainha move 8 - horizontal, vertical e diagonal

*/

return 0;

}
