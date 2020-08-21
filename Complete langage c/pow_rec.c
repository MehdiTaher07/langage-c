#include <stdio.h>

#include <stdlib.h>

int pow_rec(int x,int y);

int pow_rec(int x, int y)

{

if(y==0 )

return 1;

else

return x*pow_rec(x,y-1);

}
//(2,2)->2*__

void main()

{

int nbr=0,puis=0;

printf("entrer le nombre : \n");

scanf("%d",&nbr);

printf("entrer la puissance : \n");

scanf("%d",&puis);

printf("la valeur est : %d ",pow_rec(nbr,puis));

}
