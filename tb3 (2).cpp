#include <stdio.h>
#include <stdlib.h>

// DEFINIR LA STRUCTURE DE ELEMENT
typedef struct element {
    int val;
    struct element *suivant;
} element;

// FONCTION POUR CREER UNE LISTE
element* creerListe() {
    return NULL;
}

// fonction pour ajouter un element au debut de la liste
element* chargerListe(int Tab[], int taille, element* liste) {
    for (int i = 0; i < taille; i++) {
        element* nouveau = (element*)malloc(sizeof(element));
        nouveau->val = Tab[i];
        nouveau->suivant = liste;
        liste = nouveau;
    }
    return liste;
}

// fonction pour afficher les elements de menu
void afficherListe(element* L) {
    if (L == NULL) {
        printf("La liste est vide\n");
    } else {
        while (L != NULL) {
            printf("%d -> ", L->val);
            L = L->suivant;
        }
        printf("NULL\n");
    }
}

// une fonction pour supprimer le dernier element
element* supprimerEnFin(element* L) {
    if (L == NULL) {
        return NULL;
    }
    if (L->suivant == NULL) {
        free(L);
        return NULL;
    }
    element* actuel = L;
    while (actuel->suivant->suivant != NULL) {
        actuel = actuel->suivant;
    }
    free(actuel->suivant);
    actuel->suivant = NULL;
    return L;
}

// fonction pour ajouter un element au debut de la liste
element* ajouterEnDebut(element* L, int valeur) {
    element* nouveau = (element*)malloc(sizeof(element));
    nouveau->val = valeur;
    nouveau->suivant = L;
    return nouveau;
}

// fonction pour vider la liste
void viderListe(element* L) {
    element* temp;
    while (L != NULL) {
        temp = L;
        L = L->suivant;
        free(temp);
    }
    printf("La liste est vide\n");
}

// fonction principale
int main() {
    int Tab[10] = {1, 3, 5, 7, 8, 10, 9, 11, 13, 20};
    element* liste = creerListe();
    element* L1 = chargerListe(Tab, 10, liste);
    afficherListe(L1);

    L1 = supprimerEnFin(L1);
    afficherListe(L1);

    element* L2 = ajouterEnDebut(L1, 40);
    afficherListe(L2);

    viderListe(L2);

    return 0;
}
