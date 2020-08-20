#include<stdio.h>
int print(int i){
	printf("print function %d",i);
	return i;
}
int myFunction(int x,int y){
	return x+y;
}
int main(){
	//unsigned int a=29;//0001 1101=16+8+4+1
	//unsigned int means 0 to 2^32
	// (32=4bytes=10000000 00000000 00000000 00000000)
	
	//unsigned int b=48;//0011 0000=32+16
	//int c=0;
//	c=a&b;		  	  //0001 0000=16
//	c=a|b;		  	  //0011 1101=32+16+8+4+1=61
//	c=a^b;		  	  //0010 1101=32+8+4+1=61
//	c=~a;		  	    //1110 0010=128+64+32+2

//------------bitwise AND------------
	//printf("%d",1&0);//0
	//printf("%d",2&2);//1
//	printf("%d"c);//16

//------------bitwise inclusive OR------------
//	printf("%d",1|0);//1
//	printf("%d",c);//61

//------------bitwise exclusive OR(XOR) c=a^b------------
	//printf("%d",1^1);//1
//	printf("%d",c);//45

//------------bitwise not (one's complement) c=~a------------
//	printf("%d",1);//1
//	printf("%d",c);//45

//---------------
//int a=20,b=5;

//here b==5 is not evaluated

//since a!=0 is false

//if(a!=20 && b==5){
//	printf("i won't be printed");
//}

//int print(int i);[i don't know]
//if(a==20 && print(a)){
//	printf("i will be printed");
//}

//-----------------comma
//int x=42,y=42;
//printf("%d\n",(x=x+1,y));
//printf("%d",x);

//int i,j;
//for(i=1,j=10;i<=10;i++,j--){
//	printf("i=%i,j=%i\n",i,j);
//}

//int a=1,b=1;
//if(++a>b)//a is incremented  by 1 before being compared in the condition.
//{
//printf("%d",a);
//}

//int x;
//printf("%d",sizeof x);

//int a=3;
//int b=4;
//printf("%f",(float)a/b);

//int a=1,b=1,tmp=0;
//tmp=++a;//increments a by one, and return new value;
//printf("a=%d\n",a);
//printf("tmp=%d",tmp);

//tmp=a++;//increments a by one, and return old value;
//printf("a=%d\n",a);
//printf("tmp=%d",tmp);

//int a=1,b=1;
//int (*fn)(int,int)=&myFunction;
//printf("a=%d,b=%d:%d",a,b,(*fn)(a,b));

//char character='c';
//hold the value 99,return 99.
// character 'c' is represented in the ASCII table with 99.

	return 0;
}

