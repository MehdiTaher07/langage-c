#include<stdio.h>
void main(){
/*	//1
	int x=3;
	float y=3.0;
	if(x==y)//implicite converstion
		printf("x and y are equal");
	else
		printf("x and y are not equal");
	*/
	/*	 //2
	char ch;
	int i=printf("abs");
	//printf returns numbers of character in string 'abs' is 3
	ch=printf("");// return 0
	//if(0) //not exucutes
	if(ch=printf(""))
		printf("it matters\n");
	else
		printf("it doesn't matters\n");
	*/
	/* //3
	int a[5]={5,1,15,20,25};
	int i,j,m;
	
	i=++a[1];//increment and then assignement//2
	j=a[1]++;//it will assign and then increment//2 3
	m=a[i++];//2 3
	printf("%d, %d, %d",i,j,m);//3, 2, 15
	i=++a[1];//it will increment and then assign it 1 will incremented and stored in i
	j=a[1]++;//j will store frist value before increment 2
	m=a[i++];//m will take the first value of table a[]
	
	i=++a[1];//i=++1--i=2
	j=a[1]++;//j=2++--j=2//but a[1]=3
	m=a[i++];//m=a[2++]//m=a[2]=15//but i=3
	*/
	/*//4
	int a=b=c=10;//it is wrong statement to declare//Compile Time Error
	int a=10,b=10,c=10;//that's OK
	int a,b,c;//that is also right
	*/
	//strcopy(s1,s2)//what is the function call mean //copies s2 string into s1
	
	/* //5
		int x[]={10,20,30,40,50};
		printf("\n %d %d %d %d %d"
		,x[4],3[x],x[2],1[x],x[0]);
		//x[4]=50
		//x[3]=3[x] both are the same
	*/
	/* //6
	//int i;
	//i=0x10+010+10;
	//any value that is prefix with 0x means it is hexaDecimal represetention//0X10 is 16
	//any value that is prefix with 0 means it is Decimal represetention//010 is 8
	//10 normal decimal
	//43 en decimal
	//convert 34 to hexadecimal
	printf("\n x=%x",i);
*/
/* //7
	#define square(x) x*x
	printf("\n square = %d",square(10+2));
	//10+2*10+2
	//10+20+2
	//32
		*/
		/* //8
	int a=0;//a=0
	for(;a;)//a=0//for(init;cond;increment)
	//condition 0  already i told you is means false//
	//---
	for(;0;){a++;}// like for()a++
	printf("%d",a);//a=0
	*/
	/*
		int c,toto[10]={0};
	for(c;c<10;c++){
		printf("%d\n",toto[c]);
	}
	*/
	/*
	int x=5,y=5;
	int *xptr=&x,*yptr=&y;
	if(xptr==yptr){
		printf("xptr!=yptr the lacation addresses are different.");
	}
	if(*xptr==*yptr){
		printf("\n*xptr==*yptr point at location addresses different but hold the same value.");
	}
	*/
}
