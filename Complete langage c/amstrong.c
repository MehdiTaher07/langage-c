#include<stdio.h>
#include<math.h>
main(){
//	int s,n,b;
//	printf("donner n:");
//	scanf("%d",&n);
//	b=n;
//	s=0;
//	do{
//		s=s+((n%10)*(n%10)*(n%10));
//		n=n/10;
//	}while(n!=0);
//	if(b==s){
//		printf("%n est premier",&b);
//	}
int N,J,K,L;
printf("liste de nombres amstrong:");
for(J=0;J<=9;J++){
	for(K=0;K<=9;K++){
		for(L=0;L<=9;L++){
			N=J*100+K*10+L;
			if((N==J*J*J+K*K*K+L*L*L)&&(N<1000)){
				printf("%5d\n",N);
			}
		}
	}
}
}
