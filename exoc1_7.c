/* 1.7
- Écrivez un programme en C qui demande à l'utilisateur de saisir 10 nombres dans un tableau.
- Implémentez une rotation circulaire vers la droite des éléments du tableau. Par exemple, si le tableau contient [1, 2, 3, 4, 5], après une rotation, il devient [5, 1, 2, 3, 4].
- Affichez le tableau avant et après la rotation.
*/
#include <stdio.h>

void rotateRight(int arr[], int n) {
    int last = arr[n-1];
    for (int i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = last;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Affiche le tableau avant la rotation
    printf("Tableau avant la rotation:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Effectue une rotation circulaire vers la droite
    rotateRight(arr, 10);

    // Affiche le tableau après la rotation
    printf("Tableau après la rotation:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
