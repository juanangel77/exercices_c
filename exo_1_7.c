/*1.7
- Écrivez un programme en C qui demande à l'utilisateur de saisir 10 nombres dans un tableau.
- Implémentez une rotation circulaire vers la droite des éléments du tableau. Par exemple, si le tableau contient [1, 2, 3, 4, 5], après une rotation, il devient [5, 1, 2, 3, 4].
- Affichez le tableau avant et après la rotation.
*/
#include <stdio.h>

int main() {
    // Déclaration des variables
    int tableau[10];  // Un tableau contenant 10 éléments pour stocker les nombres donnés par l'utilisateur
    int i, temp;  // Variables d'index pour la boucle, 'temp' pour stocker temporairement un élément pendant la rotation
    int n = 10;  // Taille du tableau (10 éléments)
    
    // Demander à l'utilisateur de saisir les 10 nombres
    printf("Veuillez entrer 10 nombres pour les stocker dans un tableau.\n");
    
    // Saisie des 10 nombres dans le tableau
    for (i = 0; i < n; i++) {  // La boucle s'exécute 10 fois pour saisir chaque nombre
        printf("Entrez le nombre %d: ", i + 1);  // Affiche une demande de saisie pour chaque nombre
        scanf("%d", &tableau[i]);  //  Stocke le nombre saisi dans le tableau à l'index i 
    }

    // Affichage du tableau avant la rotation
    printf("\nLe tableau avant la rotation est: ");
    for (i = 0; i < n; i++) {  // On parcourt le tableau pour afficher chaque nombre
        printf("%d ", tableau[i]);  // Affiche chaque élément du tableau
    }
    printf("\n");

    // Rotation circulaire vers la droite
    // La dernière valeur sera déplacée à la première position, et toutes les autres valeurs se déplaceront d'une position vers la droite.
    
    temp = tableau[n-1];  // Sauvegarde de la dernière valeur du tableau dans 'temp'
    
    // Décalage des éléments vers la droite
    for (i = n - 1; i > 0; i--) {  // On commence à la fin du tableau et on se déplace vers le début
        tableau[i] = tableau[i - 1];  // Déplace chaque élément d'une position vers la droite
    }
    
    // Déplacer la valeur sauvegardée dans 'temp' à la première position
    tableau[0] = temp;  // La dernière valeur (qui a été sauvegardée) est maintenant à la première position du tableau

    // Affichage du tableau après la rotation
    printf("\nLe tableau après la rotation est: ");
    for (i = 0; i < n; i++) {  // Parcours du tableau pour afficher les éléments après la rotation
        printf("%d ", tableau[i]);  // Affiche chaque élément du tableau après la rotation
    }
    printf("\n");

    return 0; 
}
