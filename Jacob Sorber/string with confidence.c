#include<stdio.h>
int get_str_len(char *str){
	int offset=0;
	while(str[offset]!=0){
		offset++;
	}
	return offset;
}
void str_copy(char *str1,char *str2){
	int l=get_str_len(str1);
	int offset=0;
	while(offset<l){
		str2[offset]=str1[offset];
		offset++;
	}
	str2[l]="\0";
}
int main(){
	char *str1="Hello World!";
	char str2[]="Hello World!";
	printf("%s\12",str1);
	printf("%s\xA",str2);
	printf("print a backSlash \\ \n");
	printf("%s has %d length \n",str1,get_str_len(str1));
	
	char *s1="salam",s2[5];
	str_copy(s1,s2);
	printf("%s\xA",s2);
	
}
