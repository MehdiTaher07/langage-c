#include<stdio.h>
int main(){
	int note;
	printf("donner la note");
	scanf("%d",&note);
	if(note>0){
		if(note<=7){
			printf("vous-�tes eliminez!");
		}else if(note<=9){
			printf("vous-�tes redoublant!");
		}else if(note<12){
			printf("vous-�tes passable!");
		}else if(note<14){
			printf("vous-�tes assez bien!");
		}else if(note<16){
			printf("vous-�tes bien!");
		}else if(note<=20){
			printf("vous-�tes tres bien!");
		}
	}/**/
	return 0;
}
