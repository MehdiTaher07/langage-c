#include<stdio.h>
int main(){
	int a,b;
	printf("donner deux valeurs:");
	scanf("%d %d",&a,&b);
if(a==0 || b==0){
		printf("Null");	
	}
	else
		if(a<0){
		if(b<0){
			printf("POSITIVE");
		}else{
			printf("NEGATIVE");	
		}
	}
	else{
		if(b>0){
			printf("POSITIVE");
		}else{
			printf("NEGATIVE");	
		}
	}

	return 0;
}
