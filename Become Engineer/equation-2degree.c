#include<stdio.h>
int main(){
	int a,b,c,delta,s1,s2;
	printf("donner deux valeurs a,b et c:");
	scanf("%d %d %d",&a,&b,&c);
	delta=(b*b)-(4*a*c);
	if(delta<0){
		printf("pas de solution!");
	}else if(delta==0){
		s1=-b/(2*a);
		printf("l'equation a une solution s1=%.2f",s1);
	}else{
		s1=-b+sqrt(delta)/(2*a);
		s2=-b-sqrt(delta)/(2*a);
		printf("l'equation a deux solutions s1=%.2f,s2=%.2f",s1,s2);
	}
	return 0;
}
