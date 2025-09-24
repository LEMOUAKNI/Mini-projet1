#include <stdio.h>
#include <stdlib.h>
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
                    printf("\nAJOUTER AVEC SUCCEE.\n");
                }
                break;
            case 2:

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
                if (!found) {
                printf("\nAucune contact trouvee pour le nom : **%s**\n", rech);
                 }
                break;
            case 4:
                printf("Entrer le nom du contact que vous vouler supprimer: ");
                scanf("%s", supp);
                ajou--;

                if(supp < 0 || supp >= ajou){
                    printf("Contact non disponible.\n");
                }
                for(int i = supp; i < ajou - 1; i++){
                    strcpy(nom[i], nom[i + 1]);
                    strcpy(tele[i], tele[i + 1]);

                }
                ajou--;
                printf("Le contact a ete supprimee.\n");

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
