/*1.5
- Demandez à l'utilisateur de saisir 10 nombres.
- Affichez séparément les nombres pairs et les nombres impairs.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    int numbers[10];

    // Initialiser le générateur de nombres aléatoires
    srand(time(0));

    // Générer 10 nombres aléatoires entre 1 et 100
    for (i = 0; i < 10; i++) {
        numbers[i] = rand() % 100 + 1; // Génère un nombre entre 1 et 100
    }

    // Afficher les nombres générés
    printf("Les 10 nombres générés sont :\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Afficher les nombres pairs
    printf("Les nombres pairs sont :\n");
    for (i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");

    // Afficher les nombres impairs
    printf("Les nombres impairs sont :\n");
    for (i = 0; i < 10; i++) {
        if (numbers[i] % 2 != 0) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");

    return 0;
}
