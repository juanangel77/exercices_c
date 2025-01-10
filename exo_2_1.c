/*2.1
    Écrivez un programme qui déclare un entier, un pointeur vers cet entier, et utilise ce pointeur pour modifier la valeur de l'entier.
    Affichez la valeur de l'entier avant et après la modification.
*/
#include <stdio.h>

int main() {
    // Déclaration d'un entier
    int nombre = 10;  // L'entier 'nombre' est initialisé à 10
    
    // Affichage d'un pointeur vers l'entier
    int *pointeur = &nombre;  // L'adresse mémoire de 'nombre' est stockée dans un pointeur appelé 'pointeur
    
    // Montrer la valeur de l'entier avant transformation 
    printf("Avant modification, la valeur de 'nombre' est: %d\n", nombre);
    
    // Mise en place du pointeur afin de changer la valeur de l'entier
    *pointeur = 20;  // Grâce au pointeur, nous ajustons la valeur de 'nombre' à 20
    
    // Montrer la valeur de l'entier après avoir été modifié
    printf("Après modification, la valeur de 'nombre' est: %d\n", nombre);

    // Vérification de l'utilisation du pointeur en affichant l'adresse mémoire de l'entier
    printf("L'adresse mémoire de 'nombre' est: %p\n", (void*)&nombre); // '%p' affiche l'adresse mémoire

    // Montre la valeur affichée dans le pointeur
    printf("Le pointeur pointe vers la valeur: %d\n", *pointeur);  // Affiche la valeur pointée par le pointeur

    return 0; }
