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


int nivel;
scanf("%d", &nivel);

int segundo = time(0);
srand(segundo);
int numerogrande = rand();
int numerosorte = numerogrande % 100;

int chute;
int tentativas = 1;
int totaltentativa;
double pontos = 1000;

if (nivel == 1) {
    totaltentativa = 20;
    printf("Bunda mole vamos logo\n\n");
} else if (nivel == 2 ) {
    totaltentativa = 10;
    printf("E da para brincar\n\n");
} else {
    totaltentativa = 6;
    printf("Nao sei para que escolheu eu sei que voce e ruim\n\n");
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

        printf ("Voce conseguiu fazer %.2f pontos seu ruim!\n", pontos);
        printf ("Obrigado por jogar!!\n");
}

