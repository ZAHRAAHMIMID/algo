#include <stdio.h>
#include <stdlib.h>
//vous reservez de espace pour une serie
char *ChargerChaine(int N) {
    char *chaine = (char *)malloc((N+1) * sizeof(char));
    if (chaine == NULL) {
        printf("Erreur d'allocation de mémoire.\n");
        exit(1);
    }
    scanf("%s",chaine);
    int i=0; 
      while(chaine[i]!='\0'&& chaine[i]!='\n'){
      	i++;
       }
	  chaine[i]='\0';
	  
    return chaine;
}
//calcule la longueur de la chaine
int Longueur(char *ch) {
    int i = 0;
    while (ch[i] != '\0') {
        i++;
    }
    return i;
}
//inverse les elements d'un tableau
void InverserTab(char Tab[], char T[], int m) {
    for (int i = 0; i < m; i++) {
        T[i] = Tab[m-i-1];
    }
}
//deplace le contenu d'une chaine dans un tableau
void ChargerTab(char *p, char Tab[]) {
    int i = 0;
    while (*p != '\0') {
        Tab[i] = *p;
        i++;
        p++;
    }
}
//inprime le contenu du tableau
void AfficherTab(char Tab[], int m) {
    for (int i = 0; i < m; i++) {
        printf("%c", Tab[i]);
    }
    printf("\n");
}
//fonction principale
int main() {
    char *ch;
    int n;
    printf("Veuillez saisir la taille maximale de la chaine: ");
    scanf("%d", &n);
    ch = ChargerChaine(n);

    int m = Longueur(ch);
    char Tab[m];

    ChargerTab(ch, Tab);
    AfficherTab(Tab, m);

    InverserTab(Tab, Tab, m);
    AfficherTab(Tab, m);

    free(ch);
    return 0;
}
