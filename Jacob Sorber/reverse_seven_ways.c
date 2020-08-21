#include<stdio.h>
#include<string.h>

/*int get_str_length(char * str){
	int offset=0;
	while(str[offset]!=0)
		offset++;
		return offset;
}
void copy_str(char * from , char *to){
	int offset=0;
	while(from[offset]!=0){
		to[offset]=from[offset];
		offset++;
	}
//	to[offset]=0;
}
*/
void reverse0(char *str){
	int length=strlen(str);
int i;
for(i=0;i<length/2;i++){
	char temp=str[i];
	str[i]=str[length-1-i];
	str[length-1-i]=temp;
}

}
void reverse1(char *str){
	int length=strlen(str);
	int i,j;
	for(i=0,j=length-1;i<j;i++,j--)
	{
		char temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
}

void reverse2(char *str1,char *str2){
	int length=strlen(str1);
	int i,j;
	for(i=length-1,j=0;i>=0;i--,j++)
	{
		str2[j]=str1[i];
	}
str2[j]='\0';
}
void reverse3(char *str){
	char *end=str+strlen(str)-1;
	while(str<end){
		char temp=*str;
		*str=*end;
		*end=temp;
		str++;
		end--;
	}
}
void reverse4(char *str,int length){
	if(length<=1) return;
	char temp=str[0];
	str[0]=str[length-1];
	str[length-1]=temp;
	reverse4(str+1,length-2);
}
char * reverse5(char *str){
	int i,length=strlen(str);
	char *result=malloc(length+1);
	for(i=0;i<length;i++)
	{
		result[i]=str[length-1-i];
	}
	result[length]=0;
	return result;
}
char * reverse6(char *str){
	int length=strlen(str);
	char *result=malloc(length+1);
	strcpy(result,str);
	reverse3(result);
	return result;
}
main(){
char str1[]="salam";
printf("%s\n",str1);
//reverse4(str1,strlen(str1));
char *rev=reverse6(str1);
printf("%s\n",rev);
//seven-reverse:[10:15]
//https://www.youtube.com/watch?v=dcBcgPGIMpo
}
