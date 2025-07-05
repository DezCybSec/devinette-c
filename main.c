#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nombreMystere = 0;
    int nombreEntre = 0;
    int tentatives = 0;
    char rejouer = 'o';

    printf("\t\t\t\t\tBienvenue dans le jeu de devinette !\n");

    do {
        // G�n�ration du nombre myst�re
        srand(time(NULL));
        nombreMystere = rand() % 100 + 1;
        tentatives = 0;

        // Boucle principale du jeu
        do {
            printf("Devine le nombre (entre 1 et 100) : ");
            scanf("%d", &nombreEntre);
            tentatives++;

            if (nombreEntre < nombreMystere)
                printf("Presque mais c'est pas ca !\n");
            else if (nombreEntre > nombreMystere)
                printf("Non non non !!! C'est pas ca !\n");
            else {
                printf("Bravo ! Tu as trouv� en %d tentatives !\n", tentatives);
                if (tentatives > 15)
                    printf("Je pensais franchement pas que tu allais y arriver \n");
            }

        } while (nombreEntre != nombreMystere);

        // Demander � rejouer
        printf("Veux-tu rejouer ? (o/n) : ");
        scanf(" %c", &rejouer); // Le petit espace avant %c est tr�s important

    } while (rejouer == 'o' || rejouer == 'O');

    printf("Merci d'avoir jou� ! � bient�t \n");

    return 0;
}
