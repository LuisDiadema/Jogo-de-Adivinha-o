#include <stdio.h>

int main() {

#define NUMERO_DE_TENTATIVA 3

printf("************************************\n");
printf("* Bem-vindo ao jogo de Adivinhacao *\n");
printf("************************************\n");


int chute;
int numerosorte = 5;

for(int i = 1; i <= NUMERO_DE_TENTATIVA; i++) {
    
    printf("Qual e o seu chute? ");
    scanf("%d.", &chute);
    printf("Seu chute foi %d.\n", chute);

        if (chute < 0) {
            printf("Nada de numeros negativos Ze Pagao\n");
            i--;
            continue;
        }

        int acertou = chute == numerosorte;
        int maior = chute > numerosorte;
        int menor =  chute < numerosorte;

        if(acertou) {
            printf("Voce acertou carnisa.\n");
            break;
        if (maior) {
            printf("seu chute foi maior que o numeor da sorte!.\n");
            }
        if (menor) {
            printf("Seu chute foi menor que o numeor da sorte!.\n");
            }
        }
    }
}
