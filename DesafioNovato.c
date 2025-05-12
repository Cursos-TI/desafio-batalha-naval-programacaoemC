#include <stdio.h>
        int main(){
            char Linha[20]= {'A','B','C','D','F','G','H','J'};
            int Tabuleiro[10] [10];
            int NavioH[10] ={1,2,3,4,5,6,7,8,9};
            int NavioV[10]= {1,2,3,4,5,6,7,8,9};
            int i,j;
            
            
            for (int i = 0; i <10; i++){    
                for (int j = 0; j < 10; j++)
                {
                   Tabuleiro[i] [j] = 0;
                }
                
            }
            //Navio Horizontal
            int linhaH = 3;
            int colunaH = 5;
            //Navio Vertical
            int LinhaV = 7;
            int colunaV = 9;

            for (int i = 0; i < 10; i++)
            {
               Tabuleiro[linhaH] [colunaH + i++] = 3;

             }
                for (int i = 0; i <10; i++)
                {
                   Tabuleiro[LinhaV + i] [colunaV];

                }
                
            printf("Tabuleiro com os navios: \n");
            for (int i = 0; i <10; i++) 
                for (int j = 0; j < 10; j++)
            {
               printf("%d", Tabuleiro[i][j]);
            }
            
            {
                printf("\n");
            }
            

            return 0;

        }