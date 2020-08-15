#include<stdio.h>
int main(){
	float alpha=10000000;
	float beta=5000000;
	int i=0;
	do{
		i++;
		alpha+=500000;
		beta+=(beta*(0.03));//3/100
	}while(beta<alpha);
	printf("\n alpha=%f,beta=%f",alpha,beta);
	printf("\n%d",i+2020);
//	printf("\n %f",(3/100));
	return 0;
}
