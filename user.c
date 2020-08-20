#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char iduser[25];
	char  nomuser[15];
	char  pw[15];
}user;
int main()
{
	user U[10],user;
	int op,i=0,j;
	do{
		printf("choisir une operation\n");
		printf("1:ajouter un utilisateur au tableau\n");
		printf("2:supprimer un utilisateur au tableau\n");
		printf("3:afficher le tableau\n");
		printf("4:quitter le programme\n");
		scanf("%d",&op);
		
		switch(op){
			case 1:
				printf("donner les informations de utilisateur(id,nom,pw)");
				scanf("%s%s%s",user.iduser,user.nomuser,user.pw);
				U[i]=user;
				i++;
				printf("utilisateur bien ajouter \n");
				break;
			case 2:
				break;
			case 3:
				for(j=0;j<=i;j++){
					printf("les informations de l'utilisateur n° %s sont:id=%s,nom=%s,password=%s",j,U[i].iduser,U[i].nomuser,U[i].pw);
				}
				break;
		}
	}while(op!=4);
	return 0;
}
