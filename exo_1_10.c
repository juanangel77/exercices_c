/*1.10
- Écrivez un programme qui affiche un histogramme des fréquences pour un tableau de nombres donnés par l'utilisateur.
- Par exemple, si le tableau contient les nombres `[2, 3, 2, 4, 3]`, affichez :
  2 : **
  3 : **
  4 : *
  */

#include <stdio.h>

int main() {
    // Déclaration des variables
    int tableau[10];  // Tableau contenant les 10 nombres donnés par l'utilisateur
    int i, j;  // Variables d'index pour les boucles
    int n = 10;  // Taille du tableau (10 éléments)
    int frequence[10] = {0};  // Tableau contenant la fréquence de chaque nombre (initialisé à zéro)

    // Proposer à l'utilisateur de renseigner les 10 chiffres 
    
    printf("Veuillez entrer 10 nombres pour les stocker dans un tableau.\n");

    // Saisie des 10 nombres dans le tableau
    for (i = 0; i < n; i++) {  // La boucle se répète à 10 reprises afin de saisir chaque nombre
        printf("Entrez le nombre %d: ", i + 1);  // Demande à l'utilisateur de saisir un nombre
        scanf("%d", &tableau[i]);  // enregistre le nombre entré dans le tableau à l'index i
    }

    // affichage du tableau afin de vérifier les informations saisies.
    printf("\nLe tableau des nombres saisis est: ");
    for (i = 0; i < n; i++) {  // Parcours du tableau pour afficher les nombres
        printf("%d ", tableau[i]);  // Affiche chaque élément du tableau
    }
    printf("\n");

    // Évaluation des fréquences des composants
    for (i = 0; i < n; i++) {  // On parcourt chaque élément du tableau
        //  L'élément tableau[i] est comparé à tous les éléments suivants
        for (j = i + 1; j < n; j++) {
            if (tableau[i] == tableau[j]) {  // Si un doublon est trouvé
                frequence[i]++;  // Incrémente la fréquence de l'élément trouvé
                tableau[j] = -1;  // On considère cet élément comme déjà compté afin de ne pas le refaire
            }
        }
        if (tableau[i] != -1) {  //  Si l'élément n'a pas été identifié comme déjà compté
            frequence[i] = 1;  // On commence à compter cet élément
        }
    }

    // Mise en évidence du diagramme des fréquences
    printf("\nHistogramme des fréquences :\n");
    for (i = 0; i < n; i++) {  // Le tableau est parcouru afin d'afficher l'histogramme
        if (tableau[i] != -1) {  // Si l'élément n'a pas encore été traité
            printf("%d : ", tableau[i]);  // Affiche le nombre
            // Montre le nombre de '*' autant que la fréquence de ce nombre
            for (j = 0; j < frequence[i]; j++) {
                printf("*");  // Affiche un '*' pour chaque occurrence du nombre
            }
            printf("\n");  // Saut de ligne après chaque nombre
        }
    }

    return 0;  
}
