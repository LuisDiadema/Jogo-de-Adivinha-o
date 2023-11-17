#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_TENTATIVA 3

int main() {

printf("\n\n");
printf("          P  /_\\  P                             ");
printf("         /_\\_|_|_/_\\                           ");
printf("    n_n | ||.  .|| | n_n          Bem-Vindo ao   ");
printf("    |_|_|nnnn  nnnn|_|_|      Jogo de Adivinhacao");
printf("   |\" \"  |   |_|  |\"  \"  |                   ");
printf("   |_____| ' _ '  |_____|                        ");
printf("        \\___|_|___//                            ");
printf("\n\n");

printf("Qual nivel de dificuldade voce quer jogas\n");
printf("Facil [1] normal [2] Dificil [3]\n\n");
printf("Escolhe logo: ");

    int segundo = time(0);
    srand(segundo);
    int numerogrande = rand();
    int numerosorte = numerogrande % 100;

    int chute;
    int tentativas = 1;
    int totaltentativa;
    double pontos = 1000;

    int nivel;
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

for(int i = 1; i <= totaltentativa; i++) {

    printf("Tentativa %d de %d\n", i, totaltentativa);

    printf("Qual e o seu chute ?  ", tentativas);
    scanf("%d.", &chute, "\n\n");
    printf("Seu chute foi %d\n", chute);

        if (chute < 0) {
            printf("Nada de numeros negativos Ze Pagao\n\n");
            continue;
        }

        int acertou = chute == numerosorte;
        int maior = chute > numerosorte;

        if (acertou) {
            printf("Voce acertou\n");
        } else if (maior) {
            printf("Seu chute foi maior\n\n");
        } else {
            printf("Seu chute foi menor\n\n");
        }
            tentativas++;        
    }
        double resultado = abs(chute - numerosorte) / 2.0;
        pontos = pontos - resultado;

        int boa = chute == numerosorte;

        if (boa) {
            printf ("Pego menos no jogo voce consegue alguma coisa %.2f \n\n", pontos);
        } else {
            printf("Minha avo e cega de um olho e faz melhor que isso%.2f \n\n", pontos);
        }
        printf ("Obrigado por jogar pato!!\n");
}


