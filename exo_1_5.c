/* 1.5
- Demandez à l'utilisateur de saisir 10 nombres.
- Affichez séparément les nombres pairs et les nombres impairs.
*/

#include <stdio.h>

int main() {
    // Initialisation des variables int tableau[10]
    int tableau[10];  // Un tableau contenant les 10 nombres entrés par l'utilisateur
    int i;  // Variable d'index utilisée pour naviguer dans le tableau 
    int nombre;  // Variable utilisée pour stocker chaque nombre entré par l'utilisateur

    // Demander à l'utilisateur de fournir les 10 chiffres
    printf("Veuillez entrer 10 nombres. Ces nombres seront stockés dans un tableau.\n");
    
    //  Pour demander à l'utilisateur d'entrer les 10 nombres on utilise une boucle
    for (i = 0; i < 10; i++) {  //  La boucle est exécutée 10 fois, une fois pour chaque nombre
        printf("Entrez le nombre %d: ", i + 1);  // Affichage de l'invite pour chaque nombre
        scanf("%d", &tableau[i]);  // Lecture du nombre et stockage dans le tableau à l'index i
    }

    // Affichage des nombres pairs
    printf("\nLes nombres pairs sont: ");
    for (i = 0; i < 10; i++) {  // On parcourt chaque nombre du tableau
        if (tableau[i] % 2 == 0) {  //condition de vérification
            printf("%d ", tableau[i]);  // Si le nombre est pair, on l'affiche
        }
    }

    // Affichage des nombres impairs
    printf("\nLes nombres impairs sont: ");
    for (i = 0; i < 10; i++) {  // On parcourt encore le tableau pour afficher les impairs
        if (tableau[i] % 2 != 0) {  // Condition pour vérifier si le nombre est impair
            printf("%d ", tableau[i]);  // Si le nombre est impair, on l'affiche
        }
    }

    printf("\n");  // Ligne vide pour améliorer la qualité de l'affichage

    return 0;  
}


    