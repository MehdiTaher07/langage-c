#include<stdio.h>
main(){
	//S=1i+2i+3i+...+Ni;
	int n,i,f,s;
	printf("donner N:");
	scanf("%d",&n);
	f=1;
	s=0;
	for(i=1;i<=n;i++){
		f=f*i;
		s=s+f;
	}
	printf("S=%d",s);
}
