#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_TENTATIVA 3

int main() {

    printf("\n\n");
    printf("          P  /_\\  P                             \n");
    printf("         /_\\_|_|_/_\\                           \n");
    printf("    n_n | ||.  .|| | n_n          Bem-Vindo ao   \n");
    printf("    |_|_|nnnn  nnnn|_|_|      Jogo de Adivinhacao\n");
    printf("   |\" \"  |   |_|  |\"  \"  |                   \n");
    printf("   |_____| ' _ '  |_____|                        \n");
    printf("        \\___|_|___//                            \n");
    printf("\n\n");

    // Declarando variaveis que serao usadas mais a frente.
    int acertou;
    int chute;
    int nivel;
    int totaltentativa;

    // Definindo a quantidade pontos inicial.
    double pontos = 1000;

    // Gerando um numero da sorte aleatorio.
    srand(time(0));
    int numerosorte = rand() % 100;

    // Escolhendo a dificuldade.
    printf("Qual nivel de dificuldade voce quer jogar\n");
    printf("Facil [1] Normal [2] Dificil [3]\n\n");
    printf("Escolhe logo: ");

    scanf("%d", &nivel);

        switch (nivel) {
            case 1:
                totaltentativa = 20;
                printf("Mais e muito bunda mole ne ? tinha que escolher o facil!!\n\n");
                break;
            case 2:
                totaltentativa = 10;
                printf("Normal e para quem tem medo de arriscar!!\n\n");
                break;
            case 3:
                totaltentativa = 5;
                printf("Nao sei para quer ir no dificil voce e ruim!!\n\n");
                break;
        }
        
        //Loop principal do jogo.
        for(int i = 1; i <= totaltentativa; i++) {
            printf("Tentativa %d de %d\n", i, totaltentativa);

            printf("Qual e o seu chute ?  ");
            scanf("%d", &chute);

            printf("Se chute foi %d: \n\n", chute);
            
            //Tratando os chutes de números negativos.
            if (chute < 0) {
                printf("Nada de numeros negativos Ze Pagao\n\n");
                i--;
                continue;
            }
            //Verifica se acertou, foi maior ou menor.
            acertou = chute == numerosorte;

            if (acertou) {
                break;
            }
            else if (chute > numerosorte) {
                printf("Seu chute foi maior\n\n");
            } else {
                printf("Seu chute foi menor\n\n");
            }

            double perdidos = abs(chute - numerosorte) / 2;
            pontos = pontos - perdidos;
        }

        if (acertou) {
            printf("Pelo menos um jogo de adivinha voce consegui ganhar :P\n\n");
            printf("Voce fez %.2f pontos\n\n", pontos);
        } else {
            printf("Minha avo e cega de um olho e faz melhor que isso %.2f \n\n", pontos);
            printf("     .-.     \n");
            printf("     |U|     \n");
            printf("     | |     \n");          
            printf("     | |     \n");
            printf("    _| |_    \n");
            printf("   | | | |-. \n");
            printf("  /|     ` | \n");
            printf(" | |       | \n");
            printf(" |         | \n");
            printf(" \'        / \n");
            printf("  |       |  \n");
        }
        printf ("Obrigado por jogar seu fraco!!\n");
    }