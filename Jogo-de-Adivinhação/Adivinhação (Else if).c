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
int numerosorte = 5;

for(int i = 1; i <= NUMERO_DE_TENTATIVA; i++) {
printf("Qual e o seu chute? ");
scanf("%d", &chute);
printf("Seu chute foi %d\n", chute);

    int acertou = chute == numerosorte;
    int maior = chute > numerosorte;
    
    if(acertou) {
        printf("Voce acertou parabens carnisa.\n");
        break;
//Igual o código original porém com ELSE IF.
    } else if (maior) {
        printf("seu chute foi maior que o numeor da sorte!.\n");
        }
        else {
         printf("Seu chute foi menor que o numeor da sorte!.\n");
        }
    }
}
