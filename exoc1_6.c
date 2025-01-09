/* 1.6
- Demandez à l'utilisateur de saisir 10 nombres.
- Permettez à l'utilisateur de rechercher un nombre spécifique dans le tableau.
- Indiquez si le nombre est présent et, si oui, son indice.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numbers[10];
    int target, found = 0, i;

    // Initialiser le générateur de nombres aléatoires
    srand(time(0));

    // Générer 10 nombres aléatoires entre 1 et 100
    printf("Les 10 nombres générés sont :\n");
    for (i = 0; i < 10; i++) {
        numbers[i] = rand() % 100 + 1; // Génère un nombre entre 1 et 100
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Demander à l'utilisateur de saisir un nombre à rechercher
    printf("Entrez un nombre à rechercher : ");
    scanf("%d", &target);

    // Recherche du nombre dans le tableau
    for (i = 0; i < 10; i++) {
        if (numbers[i] == target) {
            found = 1;
            printf("Le nombre %d est présent à l'indice %d.\n", target, i);
            break;
        }
    }

    // Si le nombre n'est pas trouvé
    if (!found) {
        printf("Le nombre %d n'est pas présent dans le tableau.\n", target);
    }

    return 0;
}
