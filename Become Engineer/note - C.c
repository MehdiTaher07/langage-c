#include<stdio.h>
int main(){
	int note;
	printf("donner la note");
	scanf("%d",&note);
	if(note>=0 && note<=20){
		if(note<5){
			printf("vous-êtes eliminez!");
		}else if(note<10){
			printf("vous-êtes rattrapage!");
		}else{
			printf("vous-êtes valide!");
		}
	}/**/
	return 0;
}
