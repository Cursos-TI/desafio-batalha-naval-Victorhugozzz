#include <stdio.h>
#define TAM 10
  
int main(){

    //int 
    int tabuleiro[TAM][TAM];
    int i,j;
    int raio = 2;

    //CONE

    int conelinha=2;
    int conecoluna=2;

    //CRUZ

    int cruzlinha=2;
    int cruzcoluna=7;

    //OCT

    int octlinha=7;
    int octcoluna=4;

    //VARIAVEIS 
    int linha,coluna;
    int linha_Vertical,coluna_Vertical;
    int linha_Horizontal,coluna_Horizontal;
    int disti , distaj;

    // inico do tabuleiro

    for (i=0; i< TAM; i++){
        for(j=0; j< TAM; j++){
            tabuleiro[i][j]=0;
        }        
    }

    //cone 

    for( i =0 ; i<= raio; i++){
        for( j= -i; j<=i; j++){
            linha = conelinha +i;
            coluna = conecoluna +j;
            if (linha >= 0 && linha < TAM && coluna >= 0 && coluna < TAM) {
                tabuleiro[linha][coluna] = 1;
            }
        }
    }

    //cruz

    for(i= -raio; i<=raio; i++){
        linha_Vertical = cruzlinha + i ;
        coluna_Vertical = cruzcoluna ;

        if(linha_Vertical >= 0 && linha_Vertical < TAM){
            tabuleiro[linha_Vertical][coluna_Vertical] = 2; 
        } 

        linha_Horizontal = cruzlinha;
        coluna_Horizontal = cruzcoluna +i; 
        if(coluna_Horizontal >=0 && coluna_Horizontal < TAM){
            tabuleiro[linha_Horizontal][coluna_Horizontal]=2;
        } 
    }

    //octraedro 

    for( i= -raio; i<=raio; i++ ){
        for( j= -raio; j<=raio; j++){
            if(i<0){
                disti=-i;
            }else{
                disti=i;
            }
            if(j<0){
                distaj= -j;
            }else{
                distaj= j;
            }
            if(disti+distaj <= raio){
                linha= octlinha +i ;
                coluna= octcoluna +j;

                if(linha >=0 && linha< TAM && coluna>=0 && coluna<TAM){
                    tabuleiro[linha][coluna]=3;
                }
            }
        }
    }
    //exibir

    for(i=0; i < TAM; i++){
        for(j=0; j < TAM; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }



        return 0;
    }