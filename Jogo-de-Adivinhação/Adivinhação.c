#include <stdio.h>

int main() {
// Não consegui entender esse sequencia de codigos.

printf("************************************\n");
printf("* Bem-vindo ao jogo de Adivinhacao *\n");
printf("************************************\n");


int chute;
int numerosorte = 5;

for(int i = 1; i <= 3; i++) {

    printf("Qual e o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

        int acertou = chute == numerosorte;

        if(acertou) {
            printf("Voce acertou parabens carnisa.\n");
            break;
        } else {
            int maior = chute > numerosorte;
            if (maior) {
            printf("seu chute foi maior que o numeor da sorte!.\n");
            }
            else {
            printf("Seu chute foi menor que o numeor da sorte!.\n");
            }
        }
    }
}