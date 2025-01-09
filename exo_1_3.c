/* 1.3
- Dmandez à l'utilisateur d'entrer 10 nombres.
- Demandez ensuite un nombre à rechercher.
- Comptez combien de fois ce nombre apparaît dans le tableau et affichez le résultat.>
*/

#include <stdio.h>

int main() {
   // présentation des variables
    int tableau[10];  // un tableau pour enregistrer les 10 chiffres
    int i, nombreRecherche, compteur = 0;  // l'index le nombre à rechercher et le compteur sont des variables
    
    // proposer à l'utilisateur d'entrer 10 chiffres
    printf("Entrez 10 nombres:\n");
    for (i = 0; i < 10; i++) {
        // demande à l'utilisateur de saisir un chiffre
        printf("Entrez le nombre %d: ", i + 1);
        scanf("%d", &tableau[i]);  // // sauvegarde le chiffre dans la table.
    }
    
    // demander à l'utilisateur quel nombre il souhaite rechercher dans le tableau
    printf("Entrez le nombre à rechercher: ");
    scanf("%d", &nombreRecherche);
    
    //  la recherche du nombre dans le tableau entraîne une augmentation du compteu
    for (i = 0; i < 10; i++) {
        if (tableau[i] == nombreRecherche) {  
            compteur++;  
        }
    }
    
    // Affichage du résultat
    printf("Le nombre %d apparaît %d fois dans le tableau.\n", nombreRecherche, compteur);
    
    return 0;  // Fin du programme
}

