#include<stdio.h>
int echange(int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int main(){
	int a=1,b=2;
	printf("Before:a=%d,b=%d\n",a,b);
	echange(&a,&b);
	printf("After:a=%d,b=%d",a,b);
	return 0;
}
