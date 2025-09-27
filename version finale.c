#include <stdio.h>
#include <string.h>
int main()
{
     int choix;
     char nom[50][50];
     char tele[50][50];
     int ajou = 0;
     int n;
     char rech[50];
     char supp[50];
     int i, j;
    do {
        printf("\n===== Menu principal =====\n");
        printf("1. Ajouter un contact.\n");
        printf("2. Afficher tous les contacts.\n");
        printf("3. Rechercher un contact par son nom.\n");
        printf("4. Supprimer un contact par son nom.\n");
        printf("5. Quitter.\n");

        printf("Entrer votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("\nCombien de contracts voulez-vous ajouter:");
                scanf("%d", &n);

                for (int i = 0; i < n; i++){
                    printf("\nAjouter le nom: ");
                    scanf("%s", nom[ajou]);
                    printf("Ajouter le telephone:");
                    scanf("%s", tele[ajou]);
                    ajou++;
                }
                printf("\nAJOUTER AVEC SUCCEE.\n");
                break;
            case 2:
                printf("\n====  Liste des contacts ====\n");
                for (i = 0; i < ajou; i++) {
                    printf("Nom: %s\n", nom[i]);
                    printf("Telephone: %s\n", tele[i]);
                }

                break;
            case 3:
                printf("\nEntrer le nom que vous voulez rechercher : ");
                scanf("%s", rech);
                int found = 0;
                for (int i = 0; i < ajou; i++) {
                if (strcmp(nom[i],rech )== 0) {
                printf("NOM: %s\n", nom[i]);
                printf("TELEPHONE: %s\n", tele[i]);
                found = 1;
                }
                }
                if(!found){
                printf("\nAucune contact trouvee pour le nom : **%s**\n", rech);
                 }
                break;
            case 4:
                printf("\nEntrer le contact que vous voulez supprimer : ");
                scanf("%s", supp);
                found = 0;
                for (i = 0; i < ajou; i++) {
                    if (strcmp(nom[i], supp) == 0) {
                        for (j = i; j < ajou - 1; j++) {
                            strcpy(nom[j], nom[j + 1]);
                            strcpy(tele[j], tele[j + 1]);
                        }
                    ajou--;
                    found = 1;
                    break;
                    }
                }
                if (found) {
                    printf("Le contact a ete supprime.\n");
                } else {
                    printf("Aucun contact trouve pour supprimer.\n");
                }
                break;
            case 5:
                printf("\n+++ Au revoir ! +++\n");
                break;
            default:
                printf("\n Veuillez reessayer.\n");
                break;
}
} while (choix != 5);
    return 0;
}
