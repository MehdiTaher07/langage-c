#include<stdio.h>
int main()
{
	/*
   int  i,age,somme,R;
   R=0;
        printf ("entrez l'age !! ");
        scanf("%d",&age);
   for (i=1 ; i<=age;i++){
        R = R + i ;
   }
   somme = 100*age + 2*R ;
   printf ("le solde est %d Euros",somme);	
   */
   int  i,age,somme,R=0;
    printf ("entrez l'age !! ");
    scanf("%d",&age);
   for (i=1 ; i<=age;i++){
        R = R + (100+(i*2)) ;
   }
   printf ("le solde est %d Euros",R);	
	return 0;
}
