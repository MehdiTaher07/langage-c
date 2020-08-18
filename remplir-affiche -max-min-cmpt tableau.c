#include<stdio.h>
int main(){
	int tab[5],i;
	for(i=0;i<5;i++){
		printf("Donner le %d element: ",i+1);
		scanf("%d",&tab[i]);
	}
	printf("Affichage Du Tableau\n");
	for(i=0;i<5;i++){
		printf("Tab[%d]=%d\n",i,tab[i]);
	}
	int max,min;
	max=tab[0];
	min=tab[0];
	for(i=0;i<5;i++)
	{
		if(tab[i]<min)
			tab[i]=min;
		if(tab[i]>max)
			tab[i]=max;
	}
	int rech;
	printf("donner le nombre a chercher:");
	scanf("%d",&rech);
	int cmpt=0;
	for(i=0;i<5;i++){
		if(tab[i]==rech)
			cmpt++;
	}
	printf("%d exist %d",rech,cmpt);
	return 0;
}
