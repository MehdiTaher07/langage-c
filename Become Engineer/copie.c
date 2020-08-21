#include<stdio.h>
int main(){
	int nb;
	float total;
	printf("donner la nombre de copie:");
	scanf("%d",&nb);
	
	//0.5 => (1-10)
	//0.4 => (10-20)
	//0.3 => (nb>20)
	if(nb<=10){
		total=nb*0.5;
	}else if(nb<=20){
		total=nb*0.4;
	}else{
		total=nb*0.3;
	}
		printf("prix: %.2f",total);
	return 0;
}
