#include<stdio.h>
#include<string.h>
int main(){
	/*
		strlen: longuer de la chaine
		strcmp: comparer deux chaines
		strcpy: copier le contenu d'une chaine dans une autre chaine
		strcat: concat�ner (fusionner) deux chaines
		strstr: tester si une chaine est pr�sente dans une autre
		strchar: tester si un caract�re est pr�sente dans une chaine
	*/
	/*
	char chaine[50]="Hello, World!";
	printf("taille:%d",strlen(chaine));
	*/
	/*
	char mot1[50],mot2[50];
	printf("Mot 1 : ");
	scanf("%s",mot1);
	
	printf("Mot 2 : ");
	scanf("%s",mot2);
	
	if(strcmp(mot1,mot2)==0)
		printf("egeaux");
	else if(strcmp(mot1,mot2)>0)
		printf("mot1>mot2");
	else if(strcmp(mot1,mot2)<0)
		printf("mot1<mot2");
	*/
	/*
	char mot1[50],mot2[50];
	printf("Mot 1 : ");
	scanf("%s",mot1);
	strcpy(mot2,mot1);
	printf("%s",mot2);
	*/
	/*
	char mot1[50],mot2[50];
	printf("Mot 1 : ");
	scanf("%s",mot1);
	
	printf("Mot 2 : ");
	scanf("%s",mot2);
	
	printf("%s",strcat(mot1,mot2));
	*/
	/*
	char str[50]="salam cv";
	char substr[5]="cv";
	
	if(strstr(str,substr)==NULL)
		printf("il n'exite pas ");
	else
		printf("il exite ");
	*/
	/**/
	char str[50]="salam cv";
	char substr='c';
	
	if(strchr(str,99)==NULL)
		printf("il n'exite pas ");
	else
		printf("il exite ");
		
	return 0;
}
