/* 1.4
- Écrivez un programme qui demande à l'utilisateur de saisir 10 nombres.
- Calculez la moyenne de ces nombres.
- Affichez tous les nombres supérieurs à la moyenne et leur total.
*/

#include <stdio.h>

int main() {
    // Présentation des variables
    int tableau[10];  // Un tableau contenant les 10 nombres fournis par l'utilisateur
    int i;  // Variable d'index employée dans les boucles
    int somme = 0;  // Variable qui enregistre la somme des 10 nombres 
    float moyenne;  // Variable qui enregistre la moyenne des nombres 
    int totalSupMoyenne = 0;  // Variable qui calcule la somme des nombres supérieurs à la moyenne du nombre
    int compteur = 0;  // Compteur permettant de surveiller le nombre de nombres supérieurs à la moyenne

    // Demandez à l'utilisateur de renseigner les 10 chiffres.
    printf("Veuillez entrer 10 nombres. Ces nombres seront stockés dans un tableau.\n");
    
    //   Pour demander à l'utilisateur d'entrer les 10 nombres, on utilise une boucle
    for (i = 0; i < 10; i++) {  
        printf("Entrez le nombre %d: ", i + 1);  //Affichage du nombre à entrer par l'utilisateur
        scanf("%d", &tableau[i]);  // Analyse du nombre enregistré et enregistrement dans le tableau
        somme += tableau[i];  // Addition du chiffre à la somme totale.
    
    }

    // Calcul de la moyenne des 10 nombres
    moyenne = (float)somme / 10;  // La moyenne est obtenue en divisant la somme totale par 10. L'utilisation de'somme' en float permet d'obtenir un résultat décimal.

    // La moyenne calculée est affichée en utilisant la fonction
    printf("La moyenne des 10 nombres est: %.2f\n", moyenne);  // Affichage de la moyenne avec 2 décimales

    // Recherche des nombres supérieurs à la moyenne dans le tableau 
    printf("Les nombres supérieurs à la moyenne sont: ");
    for (i = 0; i < 10; i++) {  // On parcourt tout le tableau
        if (tableau[i] > moyenne) {  // Si le nombre actuel est supérieur à la moyenne
            printf("%d ", tableau[i]);  // Affichage du nombre
            totalSupMoyenne += tableau[i];  // Ajout du nombre à la somme des nombres supérieurs à la moyenne
            compteur++;  // Incrémentation du compteur pour chaque nombre supérieur à la moyenne
        }
    }

    // Affichage du total des nombres supérieurs à la moyenne
    printf("\nLe total des nombres supérieurs à la moyenne est: %d\n", totalSupMoyenne);

    // Affichage du nombre de nombres supérieurs à la moyenne
    printf("Il y a %d nombres supérieurs à la moyenne.\n", compteur);

    return 0;  // Fin du programme
}
