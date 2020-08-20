#include <stdio.h>
#include <string.h>
int main(){
	//printf("\0salam");
	
    char *s="HowTo";
	char arr[10];
    int i,length=strlen(s);
    for(i=0;i<length;i++){
        arr[i]=s[length-i-1];
    }
    printf("%s",arr);
/*
	
	char *nomM01="Mehdi";//Mehdi\0
	char nomM02[]="Zakaria";//Zakaria\0
	char nomM03[]={'A','\0','i'};
	printf("%s",nomM03);
	printf("%s",nomM02);
	*/
   /* 
	//return number of chars is 1//
    //printf return the number of characters being printed
   
   //char a[3][3][3]={"Salam","efen","tmalek"};
    //printf("%c",***a);//will point to first address
    //https://www.instagram.com/hexaas.tech/
  *  
//}

    char str[]="%d%c";
    char arr[]="Hexaas";
    printf(str,0[arr],2[arr+3]);
    //////////////////
    char c[]="GATEHEXAAS2020";
    char *p=c;
    printf("Hexaas version %s1",p+9+p[3]-p[1]);
    //////////////


   // printf("%d",'A'=='A');//true(1)
    //printf("%d",'A'<'a');//true(1)
    //printf("%d",'A'<'B');//true(1)
    //printf("%d",'C'<'A');//false
    if(printf("%d",'C'<'A')){//return number of chars is 1//
    //printf return the number of characters being printed
        printf("l'3jeb");
    }else{
        printf("No l'3jeb");
    }
    if(printf("\0 jkhjkhkjhkj")){//return number of chars is 0
        printf("l'Mli7 maghdich ytafficha");
    }
    //char a[3][3][3]={"Salam","efen","tmalek"};
    //printf("%c",***a);//will point to first address
    //https://www.instagram.com/hexaas.tech/
    
    int a=3,b=8;
    printf("a=%d,b=%d\n",a,b);
    a=a+b;
   b=a-b;
//    a=a-b;
    printf("a=%d,b=%d\n",a,b);

*/
}
