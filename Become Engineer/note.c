#include<stdio.h>
int main(){
	int note;
	printf("donner la note");
	scanf("%d",&note);
	if(note>0){
		if(note<=7){
			printf("vous-êtes eliminez!");
		}else if(note<=9){
			printf("vous-êtes redoublant!");
		}else if(note<12){
			printf("vous-êtes passable!");
		}else if(note<14){
			printf("vous-êtes assez bien!");
		}else if(note<16){
			printf("vous-êtes bien!");
		}else if(note<=20){
			printf("vous-êtes tres bien!");
		}
	}/**/
	return 0;
}
