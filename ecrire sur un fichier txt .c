#include<stdio.h>
void enregistrer(char *Nom,char *Prenom,int Age){
	FILE *f=NULL;
	f=fopen("Mehdi.txt","a");//append
	fprintf(f,"%s;%s;%d\n",Nom,Prenom,Age);
	fclose(f);
	puts("Donnée enregistrée!");
}

int main(){
	char Nom[25],Prenom[25];
	int Age,rep;
	do{
	fflush(stdin);//vider le buffer
	puts("Nom:");
	gets(Nom);
	
	puts("Prenom:");
	gets(Prenom);
	
	puts("Age:");
	scanf("%d",&Age);
	
	enregistrer(Nom,Prenom,Age);
	puts("Voulez-vous Continuer Stop=0 Oui=1 ?");
	scanf("%d",&rep);
	}while(rep!=0);//rep==1
	//printf("%s\n%s\n%d",Nom,Prenom,Age);
	

	return 0;
}
