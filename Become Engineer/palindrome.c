#include<stdio.h>
#include<string.h>
int main(){
	char ch[100];
	int i,plindrome=1,n;
	puts("donner une chaine:");
	gets(ch);
	n=strlen(ch);
	for(i=0;i<n/2;i++){
		if(ch[i]!=ch[n-1-i]){
			plindrome=0;
			break;
//			i=n;
		}
	}
	if(plindrome==1){
		puts("Oui!");
	}else{
		puts("Non!");
	}
	return 0;
}
