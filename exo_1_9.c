/*1.9
- Demandez à l'utilisateur de saisir 10 nombres.
- Identifiez s'il existe des nombres répétés dans le tableau et affichez-les.
*/

#include <stdio.h>

int main() {
    // Déclaration des variables
    int tableau[10];  // Tableau de stockage des 10 nombres fournis par l'utilisateur
    int i, j;  // Variables d'index pour les boucles
    int trouve;  // Variable pour vérifier s'il y a déjà un nombre repéré.

    // Demander à l'utilisateur de saisir les 10 nombres
    printf("Veuillez entrer 10 nombres pour les stocker dans un tableau.\n");
    
    // Saisie des 10 nombres dans le tableau
    for (i = 0; i < 10; i++) {  // La boucle se répète à 10 reprises afin de saisir chaque nombre
        printf("Entrez le nombre %d: ", i + 1);  // Demande à l'utilisateur d'entrer un chiffre
        scanf("%d", &tableau[i]);  // enregistre le nombre entré dans le tableau à l'index i.
    }

    // Affichage du tableau pour vérifier les valeurs saisies
    printf("\nLe tableau des nombres saisis est: ");
    for (i = 0; i < 10; i++) {  //  Le parcours du tableau permet d'afficher les nombres
        printf("%d ", tableau[i]);  
    }
    printf("\n");

    // Observation des nombres répétés dans le tableau
    printf("\nLes nombres répétés dans le tableau sont: ");
    for (i = 0; i < 10; i++) {  // Nous examinons  chaque élément du tableau.
        trouve = 0;  // Mise à jour de la variable 'trouve' pour chaque élément
        for (j = i + 1; j < 10; j++) {  //  L'élément à l'index i est comparé à tous les éléments suivants
            if (tableau[i] == tableau[j]) {  // Si un doublon est trouvé
                trouve = 1;  // On indique que l'élément a été identifié comme un doublon 
                break;  // On quitte la boucle interne dès qu'on détecte un doublon
            }
        }

        //  Si on a découvert un doublon et qu'il n'a pas encore été affiché 
        if (trouve == 1) {  // Si un doublon est détecté
            //  l'élément ne sera affiché que s'il n'a pas encore été affiché comme doublon
            printf("%d ", tableau[i]);  // Affiche le nombre répété
            // ne fois que le nombre est affiché, on le considère comme déjà traité en le remplaçant par une valeur qui ne sera jamais un nombre réel
            for (j = 0; j < 10; j++) {  //  Le tableau est parcouru à nouveau afin d'éviter de réafficher ce nombre
                if (tableau[j] == tableau[i]) {
                    tableau[j] = -1;  // Remplace le nombre découvert par une valeur négative afin de ne pas le rendre visible à nouveau
                }
            }
        }
    }

    // Affichage d'un message si aucun doublon n'a été trouvé
    printf("\n");
    return 0;  
}
