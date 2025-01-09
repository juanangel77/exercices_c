/* 1.4
- Érivez un programme qui demande à l'utilisateur de saisir 10 nombres.
- Calculez la moyenne de ces nombres.
- Affichez tous les nombres supérieurs à la moyenne et leur total.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    int numbers[10];
    int sum = 0;
    int count_above_average = 0;
    int total_above_average = 0;

    // Initialiser le générateur de nombres aléatoires
    srand(time(0));

    // Générer 10 nombres aléatoires entre 1 et 100 et calculer leur somme
    for (i = 0; i < 10; i++) {
        numbers[i] = rand() % 100 + 1; // Génère un nombre entre 1 et 100
        sum += numbers[i];
    }

    // Calculer la moyenne
    float average = sum / 10.0;

    // Afficher les nombres et la moyenne
    printf("Les 10 nombres générés sont :\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\nMoyenne: %.2f\n", average);

    // Trouver les nombres supérieurs à la moyenne et leur total
    printf("Les nombres supérieurs à la moyenne sont :\n");
    for (i = 0; i < 10; i++) {
        if (numbers[i] > average) {
            printf("%d ", numbers[i]);
            total_above_average += numbers[i];
            count_above_average++;
        }
    }

    // Afficher le total des nombres supérieurs à la moyenne
    printf("\nTotal des nombres supérieurs à la moyenne : %d\n", total_above_average);
    printf("Nombre de valeurs supérieures à la moyenne : %d\n", count_above_average);

    return 0;
}


