#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Tache {
    int id;
    char titre[100];
    char description[500];
    char deadline[20];
    char statut[50];
};
struct Tache taches[100];
static int nomTaches = 0;
    //Si exist ou pas
    bool tacheExist(int id, struct Tache taches[], int nomTaches) {

        for (int i = 0; i < nomTaches; i++) {
            if (taches[i].id == id) {
                return true; //Une task exist avec le meme id
        }
    }

    return false; //Pas de task avec meme id
}

    void ajout(struct Tache taches[], int nomTaches){

        int id;
        printf("Entrer votre id\t:");
        scanf("%d", &id);

        if (tacheExist(id, taches, nomTaches)) {
            printf("Une tâche avec le même ID existe déjà.\n");
            return;
        }

        printf("Entrer votre titre:\n");
        scanf("%s", taches[nomTaches].titre);
        printf("Entrer votre description:\n");
        scanf("%s", taches[nomTaches].description);
        printf("Entrer votre deadline:\n");
        scanf("%s", taches[nomTaches].deadline);
        printf("Entrer votre statut:\n");
        scanf("%s", taches[nomTaches].statut);

        nomTaches ++;

    }
    void ajoutmulti(struct Tache taches[], int nom){

        printf("Combien de taches voulez vous entrer:\n");
        scanf("%d",&nom);

        for(int i = 0; i<nom; i++){
                ajout(taches, nom);

        }
    }
    void afficherTaches(struct Tache taches[], int nomTaches) {
        printf("Afficher les taches:\n");

        for(int i = 0; i < nomTaches; i++) {
            printf("L'identifiant\t %d\n", taches[i].id);
            printf("Le titre\t %s\n", taches[i].titre);
            printf("La description\t %s\n", taches[i].description);
            printf("Le deadline\t %s\n", taches[i].deadline);
            printf("Le statut\t %s\n", taches[i].statut);
        }
    }
int main()
{

    int choix;
    int nom;

    do{
            printf("\n");
            printf("\t \t \t \t**********************MENU********************** \n");
            printf("\n");
			printf("\t \t \t \t1 Ajouter une tache \n");
			printf("\t \t \t \t2 Ajouter plusieurs nouvelles taches \n");
			printf("\t \t \t \t3 Ajouter plusieurs nouvelles taches \n");
			printf("\t \t \t \t4 afficher taches \n");
			printf("\t \t \t \t5 Trier les taches par ordre alphabetique \n");
			printf("\t \t \t \t6 Trier les taches par deadline \n");
			printf("\t \t \t \t7 Afficher les taches dont le deadline est dans 3 jours ou moins \n");
			printf("\t \t \t \t8 Modifier la description d'une tache\n");
			printf("\t \t \t \t9 Modifier le statut d’une tache \n");
			printf("\t \t \t \t10 Modifier le deadline d’une tache\n");
			printf("\t \t \t \t11 Supprimer une tâche par identifiant  \n");
			printf("\t \t \t \t12 Rechercher une tache par son Identifiant \n");
			printf("\t \t \t \t13 Rechercher une tache par son Titre \n");
			printf("\t \t \t \t14 Afficher le nombre de tâches completes et incompletes \n");
			printf("\t \t \t \t15 Afficher le nombre de jours restants jusqu'au delai de chaque tache\n");
			printf("\t \t \t \t16 Quitter  \n");
			printf("\t \t \t \t________________________________________________\n");
            printf("\n");

            printf("\t \t \t\tEntrer un choix:\t");
            scanf("%d",&choix);

            switch(choix){
                case 1:
                    ajout(taches, nomTaches);
                            printf("%d",nomTaches);

                    break;
                case 2:
                    ajoutmulti(taches, nom);
                    break;
                case 3:
                    afficherTaches(taches, nomTaches);
               /* case 4:
                    //triAlpha();
                    break;
                case 4:
                   // triDead();
                    break;
                case 5:
                   // afficher();
                    break;
                case 6:
                   //  modDesc();
                     break;
                case 7:
                   // modStatus();
                    break;
                case 8:
                  //  modDead();
                    break;
                case 9:
                   // supprimer();
                    break;
                case 10:
                    //rechercheId();
                    break;
                case 11:
                    //rechercheTitre();
                    break;
                case 12:
                    //afficheTotal();
                    break;
                case 13:
                    //afficheCI();
                    break;
                case 14:
                    //afficheDelai();
                    break;
                case 15:
                    //quitter();
                    break;*/
            }

            }while(choix!=3);
    return 0;
}
