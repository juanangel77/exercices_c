/* 1.3
- Dmandez à l'utilisateur d'entrer 10 nombres.
- Demandez ensuite un nombre à rechercher.
- Comptez combien de fois ce nombre apparaît dans le tableau et affichez le résultat.#include <stdio.h>
*/

#include <stdio.h>
int main() {
    // Tableau avec des nombres prédéfinis
    int numbers[10] = {5, 8, 7, 5, 5, 9, 6, 8, 5, 2};
    int i, search_num, count = 0;

    // Afficher les nombres du tableau
    printf("Les nombres dans le tableau sont :\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Demander à l'utilisateur quel nombre il veut rechercher
    printf("Entrez le nombre à rechercher : ");
    scanf("%d", &search_num);

    // Compter combien de fois search_num apparaît dans le tableau
    for(i = 0; i < 10; i++) {
        if(numbers[i] == search_num) {
            count++;  // Si le nombre est trouvé, augmenter le compteur
        }
    }

    // Afficher le résultat
    printf("Le nombre %d apparaît %d fois dans le tableau.\n", search_num, count);

    return 0;
}

