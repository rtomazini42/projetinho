#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tentativas 5

int main() {

    setlocale(LC_ALL, "Portuguese");
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("*****************************************\n");
    int numero_secreto = 42;

    char nome[20];
    printf("O nome do fdp q ta jogando\n");
    scanf("%s", &nome);

    int chute,pontos;

    for(int i = 1; i <= tentativas; i++){
        printf("Chuta aí arrombado!\nTentativa %d de %d\n", i,tentativas);
        scanf("%d", &chute);

        if (chute < 0){
            printf("\nTu é retardado? Sem numero negativo porra\n");
            i--;
            continue;
        }

        int acertou = (chute == numero_secreto);

        if (acertou){
            printf("Acertou miseravi\n");
            pontos = 11 - i;
            printf("Voce marcou: %d pontos\n\n", pontos);

            break;

        }
        else{
                if(chute > numero_secreto){
                    printf("O chute foi maior\n");
                }
                if(chute < numero_secreto){
                    printf("Chute menor q o numero\n");
                }
            printf("Errou otario %s\n\n", nome);
        }
    }
    printf("Cabo porra");
    }
