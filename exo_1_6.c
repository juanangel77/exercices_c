/* 1.6
- Demandez à l'utilisateur de saisir 10 nombres.
- Permettez à l'utilisateur de rechercher un nombre spécifique dans le tableau.
- Indiquez si le nombre est présent et, si oui, son indice.
*/

#include <stdio.h>

int main() {
    // Déclaration des variables
    int tableau[10];  //  Un tableau contenant les 10 nombres saisis par l'utilisateur
    int i;  // Variable d'index pour naviguer dans le tableau 
    int nombreRecherche;  //  Variable contenant le nombre que l'utilisateur souhaite rechercher
    int trouve = 0;  // Variable pour indiquer si le nombre a été trouvé dans le tableau (0 = non trouvé, 1 = trouvé)
    
    // Demander à l'utilisateur de saisir les 10 nombres
    printf("Veuillez entrer 10 nombres. Ces nombres seront stockés dans un tableau.\n");
    
    // Utilisation d'une boucle pour demander à l'utilisateur d'entrer les 10 nombres
    for (i = 0; i < 10; i++) {  // Exécution de la boucle 10 fois, une fois pour chaque nombre 
        printf("Entrez le nombre %d: ", i + 1);  
        scanf("%d", &tableau[i]);  // Lecture et stockage du nombre dans le tableau à l'index i
    }

    // Demander à l'utilisateur quel nombre il souhaite rechercher dans le tableau
    printf("Entrez le nombre que vous voulez rechercher: ");
    scanf("%d", &nombreRecherche);  // L'utilisateur entre le nombre à rechercher et il est stocké dans 'nombreRecherche'

    // Recherche du nombre dans le tableau
    // Utilisation d'une boucle pour parcourir le tableau et vérifier si le nombre est présent
    for (i = 0; i < 10; i++) {  // On parcourt chaque élément du tableau
        if (tableau[i] == nombreRecherche) {  // Si l'élément du tableau est égal au nombre recherché
            printf("Le nombre %d a été trouvé à l'indice %d.\n", nombreRecherche, i);  // Affichage de l'indice où le nombre a été trouvé
            trouve = 1;  // Le nombre a été trouvé, donc on change la variable 'trouve' à 1
            break;  // Dès qu'on trouve le nombre, on quitte la boucle
        }
    }

    // Si le nombre n'a pas été trouvé, afficher un message indiquant qu'il n'est pas présent
    if (!trouve) {  // Si 'trouve' est toujours 0, cela signifie que le nombre n'a pas été trouvé
        printf("Le nombre %d n'est pas présent dans le tableau.\n", nombreRecherche);  // Message indiquant que le nombre n'a pas été trouvé
    }

    return 0;  
}
