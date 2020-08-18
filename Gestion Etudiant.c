#include<stdio.h>
#include<stdlib.h>
struct Etudiant{
	int Num;
	char Nom[100];
	char Prenom[100];
	char Filiere[50];
};
struct Etudiant Etud;
//------Fonction Recherche
int rech(int Numrech){
	FILE *F;
	F=fopen("Etudiants.txt","r");
	do{
		fscanf(F,"%d ;%s ;%s ;%s \n",&Etud.Num,&Etud.Nom,&Etud.Prenom,&Etud.Filiere);
		fflush(stdin);
		if(Etud.Num==Numrech){
			fclose(F);
			return 1;
		}
	}while(!feof(F));
	fclose(F);
	return -1;
}
//---------Ajouter Etudiant
void AjouterEtudiant(){
	FILE *F;
	int num;
	F=fopen("Etudiants.txt","a");
	printf("\n Entrer le numero du nouveau étudiant:");
	scanf("%d",&num);
	fflush(stdin);
	while(rech(num)==1){
		printf("\n Ce numero existe deja!");
		printf("Entrer le numero du nouveau étudiant");
		scanf("%d",&num);
		Etud.Num=num;
		printf("\n Entre le Nom:");
		scanf("%s",&Etud.Nom);
		fflush(stdin);
		printf("\n Entre le Prenom:");
		scanf("%s",&Etud.Prenom);
		fflush(stdin);
		printf("\n Entre la Filiere:");
		scanf("%s",&Etud.Filiere);
		fflush(stdin);
		fprintf(F,"%d ;%s ;%s ;%s \n",Etud.Num,Etud.Nom,Etud.Prenom,Etud.Filiere);
		fflush(stdin);
		close(F);
	}
}
//-------Recherche et Affiche
void Recherche(){
	int numR;
	printf("Entrer le numero d'etudiant a recherche:");
	scanf("%d",&numR);
	FILE *F;
	F=fopen("Etudiants.txt","r");
	do{
		fscanf(F,"%d ;%s ;%s ;%s \n",&Etud.Num,&Etud.Nom,&Etud.Prenom,&Etud.Filiere);
		fflush(stdin);
		if(Etud.Num==numR){
			printf("------ Information Sur le Etudiant : ------");
			printf("Numero:\t %d \n",Etud.Num);
			printf("Nom:\t %s \n",Etud.Nom);
			printf("Prenom:\t %s \n",Etud.Prenom);
			printf("Filiere:\t %s \n",Etud.Filiere);
		}
	}while(!feof(F));
	fclose(F);
}
//--------- suppression
void supprimerEtudiant(){
	char rep;
	int numRech;
	printf("Entrez le numero d'etudiant a supprimer :");
	scanf("%d",&numRech);
	fflush(stdin);
	if(rech(numRech)==1){
		printf("\n Voulez-Vous Vraiment Supprimer o/n:")
		scanf("%c",&rep);
		fflush(stdin);
		if(rep=='o' || rep=='O'){
			FILE *Fich,*F;
			F=fopen("Etudiants.txt","r");
			Fich=fopen("Etudiants.txt","a");
			do{
				fscanf(F,"%d ;%s ;%s ;%s \n",&Etud.Num,&Etud.Nom,&Etud.Prenom,&Etud.Filiere);
				if(numRech!=Etud.Num){
					fprintf(Fich,"%d ;%s ;%s ;%s \n",Etud.Num,Etud.Nom,Etud.Prenom,Etud.Filiere);
				}
			}while(!feof(F));
			fclose(F);
			fclose(Fich);
			remove("Etudiants.txt");
			rename("TempEtudiants.txt","Etudiants.txt");
			printf("Suppression Effectuee avec succes");
		}
	}
	else{
			printf("\n Ce numero d'etudiant n'existe pas");
	}
}
//------ Modification
void ModifierEtudiant(){
	FILE *F,*Fich;
	int num,i;
	char rep='n';
	printf("\n Entre le numero de l'etudiant a modifier : ");
	scanf("%d",&num);
	fflush(stdin);
	if(rech(num)==1){
		printf("\n Voulez-Vous Vraiment Modifier o/n:")
		scanf("%c",&rep);
		fflush(stdin);
		if(rep=='o' || rep=='O'){
			FILE *Fich,*F;
			F=fopen("Etudiants.txt","r");
			Fich=fopen("TempEtudiants.txt","a");
			do{
				fscanf(F,"%d ;%s ;%s ;%s \n",&Etud.Num,&Etud.Nom,&Etud.Prenom,&Etud.Filiere);
				if(num!=Etud.Num){
					Etud.Num=num;
					printf("\n Entre le Nom:");
					scanf("%s",&Etud.Nom);
					fflush(stdin);
					printf("\n Entre le Prenom:");
					scanf("%s",&Etud.Prenom);
					fflush(stdin);
					printf("\n Entre la Filiere:");
					scanf("%s",&Etud.Filiere);
					fflush(stdin);
			
					fclose(F);
				}
				fprintf(Fich,"%d ;%s ;%s ;%s \n",Etud.Num,Etud.Nom,Etud.Prenom,Etud.Filiere);
			}while(!feof(F));
			fclose(F);
			fclose(Fich);
				remove("Etudiants.txt");
			rename("TempEtudiants.txt","Etudiants.txt");
			printf("Modification Effectuee avec succes");
		}else{
				printf("Modification a ete annule");
		}
	}else{
			printf("\n Ce numero d'etudiant n'existe pas");
	}
}
//------- Menu
void main(){
	int choix;char rep;
	do{
		system("cls");
		printf("---------Menu----------\n");
		printf("1- Ajouter un Etudiant\n");
		printf("2- Rechercher un Etudiant\n");
		printf("3- Supprimer un Etudiant\n");
		printf("4- Modifier un Etudiant\n");
		printf("5- Afficher un Etudiant\n");
		printf("6- Quitter\n");
		
		do{
			printf("\n-Entre Votre Chiox: ");
			scanf("%d",&choix);
		}while(choix<1 || choix>6);
		switch(choix){
			case 1 :
				AjouterEtudiant();
				break;
			case 2 :
				Recherche();
				break;
			case 3 :
				supprimerEtudiant();
				break;
			case 4 :
				ModifierEtudiant();
				break;
			case 5 :
				Afficher();
				break;
			case 6 :
				break;
		}
		
		printf("\n Voulez-Vous Vraiment Modifier o/n:")
		scanf("%c",&rep);
		fflush(stdin);
	}while((rep=='o' || rep=='O'));
}
int main(){
	return 0;
}
