#include<stdio.h>
int main(){
	int nb,i,j;
	/*do{
		printf("donner la nombre entre 1 et 3;");
		scanf("%d",&nb);
	}while(nb>3 || nb<1);
	*/
	/**/
	printf("donner la nombre pour table multiplication:");
	scanf("%d",&nb);
	/*for(i=1;i<=10;i++){
		for(j=1;j<=10;j++){
			printf("%d x %d = %d\n",i,j,i*j);
		}
		printf("\n----------\n");
	}*/
	int fact=1;
	do{
		fact*=nb;//1=1*5//5=5*4=20=20*3//60=60*2=120*1=120
		nb--;
	}while(nb!=0);
	printf("fact : %d",fact);
//	system("cls");
	return 0;
}
