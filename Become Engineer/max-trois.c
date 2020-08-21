#include<stdio.h>
int main(){
	int a,b,c,max;
	printf("donner trois valeurs:");
	scanf("%d %d %d",&a,&b,&c);
	max=a;
	if(max<b)
		max=b;
	if(max<c)
		max=c;
	printf("valeur le plus grands entre a=%d,b=%d,c=%d : %d",a,b,c,max);	
	return 0;
}
