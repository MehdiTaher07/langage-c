#include<stdio.h>
int main(){
	int temp;
	printf("donner la temp");
	scanf("%d",&temp);
	if(temp<0){
		printf("solid");
	}else if(temp<100){
		printf("Liquid");
	}else{
		printf("gaseaux");
	}
	return 0;
}
