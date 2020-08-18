#include<stdio.h>
int main(){
	do{
	
	char o;
	printf("choisit l'operation a effectue(+,-,*,/)");
	scanf("%c",&o);
	
	int rep;
	float x,y;
	printf("donnez deux nombres:");
	scanf("%d %d",&x,&y);
	
	switch(o){
		case '+':
				printf("%.2f + %.2f = %.2f",x,y,x+y);
				break;
		
		case '-':
				printf("%.2f - %.2f = %.2f",x,y,x-y);
				break;
		
		case '*':
				printf("%.2f * %.2f = %.2f",x,y,x*y);
				break;
		
		case '/':
			if(b!=0)
				printf("%.2f / %.2f = %.2f",x,y,x/y);
			else printf("Attention division sur ZERO ");
				break;		
		default :
			printf("operation incorrect");
				break;	
	}
	printf("\n 1 / 0 ");
	scanf("%d",&rep);
	}while(rep!=0);
	return 0;
}
