#include<stdio.h>
int main(){
	int i;
	int * tab;
	tab=malloc(3*sizeof(int));//il met les valeur alearatoir
/*	for(i=0;i<3;i++){
		printf("%d\n",tab[i]);
	}*/
	/*tab=calloc(3,sizeof(int));//il met ZERO(NULL)
	for(i=0;i<3;i++){
		printf("%d\n",tab[i]);
	}
	*/
	//Ajout d'un element au tableau
	tab=realloc(tab,4*sizeof(int));
	tab[3]=10;
	printf("%d\n",tab[3]);
	return 0;
}
