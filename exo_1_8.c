/* 1.8
- Demandez à l'utilisateur de saisir 10 nombres.
- Inversez les éléments du tableau et affichez les deux tableaux.
*/

#include <stdio.h>

int main() {
    // Déclaration des variables
    int tableau[10];  // Un tableau contenant les 10 nombres donnés par l'utilisateur
    int i, temp;  // Variables d'index pour les boucles et 'temp' pour stocker temporairement les éléments lors de l'inversion
    int n = 10;  // Taille du tableau (10 éléments)
    
    // Demander à l'utilisateur de saisir les 10 nombres
    printf("Veuillez entrer 10 nombres pour les stocker dans un tableau.\n");
    
    // Les 10 nombres sont saisis dans le tableau
    for (i = 0; i < n; i++) {  // La boucle s'exécute 10 fois pour saisir chaque nombre
        printf("Entrez le nombre %d: ", i + 1);  // Affiche une requête de saisie pour chaque nombre
        scanf("%d", &tableau[i]);  // Stocke le nombre saisi dans le tableau à l'index i
    }

    // Le tableau avant l'inversion est affiché
    printf("\nLe tableau avant l'inversion est: ");
    for (i = 0; i < n; i++) {  // On parcourt le tableau pour afficher chaque nombre
        printf("%d ", tableau[i]);  // Affiche chaque élément du tableau
    }
    printf("\n");

    // Inversion des composantes du tableau. Les éléments symétriques du tableau sont échangés par rapport à leur centre
    
    for (i = 0; i < n / 2; i++) {  // On parcourt { // Seule la première moitié du tableau temp = tableau[i]; // L'élément à l'index 'i' est sauvegardé dans 'temp' tableau[i] = tableau[n - 1 - i];
     // L'élément symétrique est placé de l'autre côté à la place de 'tableau[i]' tableau[n - 1 - i] = temp; 
    // L'élément sauvegardé est placé dans la position symétrique }
        temp = tableau[i];  // L'élément à l'index 'i' est sauvegardé dans 'temp'
        tableau[i] = tableau[n - 1 - i];  // On met l'élément symétrique de l'autre côté à la place de 'tableau[i]'
        tableau[n - 1 - i] = temp;  // On place l'élément sauvegardé dans la position symétrique
    }

    // Affichage du tableau après l'inversion
    printf("\nLe tableau après l'inversion est: ");
    for (i = 0; i < n; i++) {  // On parcourt de nouveau le tableau pour afficher les éléments après l'inversion
        printf("%d ", tableau[i]);  // Affiche chaque élément du tableau après l'inversion
    }
    printf("\n");

    return 0;  
}
