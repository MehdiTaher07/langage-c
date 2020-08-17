#include<stdio.h>
int puissance(int x,int n){
	if(n==0)
		return 1;
	return x*puissance(x,n-1);
}
int main(){
	//récursive c'est une fonction qui s'appel elle meme
	int x,n;
	printf("x:");
	scanf("%d",&x);
	printf("n:");
	scanf("%d",&n);
	printf("%d^%d=%d",x,n,puissance(x,n));
	return 0;
}
