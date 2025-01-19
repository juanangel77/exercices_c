/* Mini Projet de gestion d'un boutique */
#include <stdio.h>
#include <string.h> // Pour utiliser les fonctions de manipulation de chaînes (ex: strcpy, strcmp)

// Définition des constantes
#define MAX_ARTICLES 100 // Nombre maximum d'articles pouvant être stockés
#define MAX_STRING 50    // Taille maximale des chaînes de caractères (nom, catégorie)

// Définition de la structure Article
typedef struct {
    char nom[MAX_STRING];     // Nom de l'article
    float prix;               // Prix de l'article
    int quantite;             // Quantité disponible
    char categorie[MAX_STRING]; // Catégorie de l'article
} Article;

// Déclaration des variables globales
Article articles[MAX_ARTICLES]; // Tableau pour stocker les articles
int nbArticles = 0;             // Nombre actuel d'articles dans le tableau

// Prototypes des fonctions
void afficherMenu(); // Affiche le menu principal
void ajouterArticle(); // Ajoute un nouvel article
int trouverIndiceArticle(const char* nom); // Trouve l'indice d'un article par son nom
void modifierArticle(); // Modifie un article existant
void afficherArticles(); // Affiche la liste des articles

// Fonction principale
int main() {
    // Initialisation de quelques articles pour la démonstration
    strcpy(articles[0].nom, "Smartphone");
    articles[0].prix = 699.99;
    articles[0].quantite = 5;
    strcpy(articles[0].categorie, "Electronique");
    nbArticles++;

    strcpy(articles[1].nom, "T-Shirt");
    articles[1].prix = 19.99;
    articles[1].quantite = 20;
    strcpy(articles[1].categorie, "Vêtements");
    nbArticles++;

    strcpy(articles[2].nom, "Ordinateur");
    articles[2].prix = 999.99;
    articles[2].quantite = 3;
    strcpy(articles[2].categorie, "Electronique");
    nbArticles++;

    int choix; // Variable pour stocker le choix de l'utilisateur
    do {
        afficherMenu(); // Afficher le menu principal
        printf("Choix : ");
        scanf("%d", &choix); // Lire le choix de l'utilisateur
        getchar(); // Consommer le caractère '\n' restant
        switch (choix) {
            case 1:
                ajouterArticle(); // Ajouter un nouvel article
                break;
            case 2:
                modifierArticle(); // Modifier un article existant
                break;
            case 3:
                afficherArticles(); // Afficher tous les articles
                break;
            case 4:
                printf("Au revoir !\n"); // Quitter le programme
                break;
            default:
                printf("Choix invalide.\n"); // Gestion des choix invalides
                break;
        }
    } while (choix != 4); // Boucle tant que l'utilisateur ne choisit pas de quitter

    return 0; // Fin du programme
}

// Fonction pour afficher le menu principal
void afficherMenu() {
    printf("\nMenu :\n");
    printf("1. Ajouter un article\n");
    printf("2. Modifier un article\n");
    printf("3. Afficher les articles\n");
    printf("4. Quitter\n");
}

// Fonction pour ajouter un nouvel article
void ajouterArticle() {
    if (nbArticles >= MAX_ARTICLES) { // Vérifier si la limite d'articles est atteinte
        printf("Impossible d'ajouter plus d'articles.\n");
        return;
    }

    Article nouvelArticle; // Déclaration d'un nouvel article temporaire
    printf("Nom de l'article : ");
    fgets(nouvelArticle.nom, MAX_STRING, stdin); // Lire le nom
    nouvelArticle.nom[strcspn(nouvelArticle.nom, "\n")] = 0; // Supprimer le '\n'

    printf("Prix de l'article (en euros) : ");
    scanf("%f", &nouvelArticle.prix); // Lire le prix
    getchar(); // Consommer le caractère '\n'

    printf("Quantité de l'article : ");
    scanf("%d", &nouvelArticle.quantite); // Lire la quantité
    getchar(); // Consommer le caractère '\n'

    printf("Catégorie de l'article : ");
    fgets(nouvelArticle.categorie, MAX_STRING, stdin); // Lire la catégorie
    nouvelArticle.categorie[strcspn(nouvelArticle.categorie, "\n")] = 0; // Supprimer le '\n'

    // Ajouter le nouvel article au tableau
    articles[nbArticles++] = nouvelArticle;
    printf("Article ajouté avec succès !\n");
}

// Fonction pour trouver l'indice d'un article par son nom
int trouverIndiceArticle(const char* nom) {
    for (int i = 0; i < nbArticles; i++) { // Parcourir tous les articles
        if (strcmp(articles[i].nom, nom) == 0) { // Comparer les noms
            return i; // Retourner l'indice si l'article est trouvé
        }
    }
    return -1; // Retourner -1 si l'article n'est pas trouvé
}

// Fonction pour modifier un article existant
void modifierArticle() {
    char nom[MAX_STRING]; // Variable pour stocker le nom de l'article à modifier
    printf("Nom de l'article à modifier : ");
    fgets(nom, MAX_STRING, stdin); // Lire le nom
    nom[strcspn(nom, "\n")] = 0; // Supprimer le '\n'

    int index = trouverIndiceArticle(nom); // Trouver l'indice de l'article
    if (index == -1) { // Si l'article n'existe pas
        printf("Article non trouvé.\n");
        return;
    }

    // Lire les nouvelles valeurs pour l'article
    printf("Nouveau prix : ");
    scanf("%f", &articles[index].prix);
    getchar(); // Consommer le caractère '\n'

    printf("Nouvelle quantité : ");
    scanf("%d", &articles[index].quantite);
    getchar(); // Consommer le caractère '\n'

    printf("Nouvelle catégorie : ");
    fgets(articles[index].categorie, MAX_STRING, stdin);
    articles[index].categorie[strcspn(articles[index].categorie, "\n")] = 0; // Supprimer le '\n'

    printf("Article modifié avec succès !\n");
}

// Fonction pour afficher tous les articles
void afficherArticles() {
    printf("Liste des articles :\n");
    for (int i = 0; i < nbArticles; i++) { // Parcourir tous les articles
        printf("Nom : %s\n", articles[i].nom);
        printf("Prix : %.2f\n", articles[i].prix);
        printf("Quantité : %d\n", articles[i].quantite);
        printf("Catégorie : %s\n\n", articles[i].categorie);
    }
}