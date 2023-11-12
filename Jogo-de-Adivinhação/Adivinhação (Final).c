#include <stdio.h>

int main() {

#define NUMERO_DE_TENTATIVA 3

printf("\n\n");
printf("          P  /_\\  P                             ");
printf("         /_\\_|_|_/_\\                           ");
printf("    n_n | ||.  .|| | n_n          Bem-Vindo ao   ");
printf("    |_|_|nnnn  nnnn|_|_|      Jogo de Adivinhacao");
printf("   |\" \"  |   |_|  |\"  \"  |                   ");
printf("   |_____| ' _ '  |_____|                        ");
printf("        \\___|_|___//                            ");
printf("\n\n");


int chute;
int numerosorte = 10;
int ganhou = 0;
int tentativas = 1;

while (!ganhou) {

        printf ( "Qual e o seu chute ?", tentativas);
        scanf ("%d.", &chute);
        printf ("Seu chute foi %d\n", chute);

        if (chute < 0) {
            printf ("Nada de numeros negativos Ze Pagao\n");
            continue;
        }

        int acertou = chute == numerosorte;
        int maior = chute > numerosorte;
        int menor =  chute < numerosorte;
        
        if (acertou) {
            printf("Voce acertou carnisa.\n");
            ganhou = 1;
        }
        if (maior) {
            printf("seu chute foi maior que o numenor da sorte!.\n");
            }
        if (menor) {
            printf("Seu chute foi menor que o numenor da sorte!.\n");
            }
            tentativas++;        
    }
        int pontos = 100;

        int resultado = (chute - numerosorte) / 2;
        pontos = pontos - resultado;

        printf ("Voce conseguiu fazer %d. pontos seu ruim!\n", pontos);
        printf ("Obrigado por jogar!!\n");
}
