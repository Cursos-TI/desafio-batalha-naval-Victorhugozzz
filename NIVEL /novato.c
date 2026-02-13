#include <stdio.h>
  int main(){
 
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10] = {0};
    tabuleiro[0][5]=3;
    tabuleiro[0][4]=3;
    tabuleiro[0][3]=3;
    tabuleiro[2][8]=3;
    tabuleiro[3][8]=3;
    tabuleiro[4][8]=3;

    printf("TABULEIRO\n\n");

    printf("  ");
    for(int i = 0; i < 10; i++){
        printf("%c ", linha[i]);
    }
    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%d ", i);

        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}