#include<stdio.h> 
struct ourNode{
	char x,y,z;
};
int main() 
{
/*
	int arr[5]={2,6,3};
	int (*p)[5]=&arr;
	printf("%d",*(*p+1));
		*/
	/*
	int a[][3]={1,2,3,4,5,6};
	int (*ptr)[3]=a;
	printf("%d %d",(*ptr)[1],(*ptr)[2]);
	++ptr;
	printf("%d %d",(*ptr)[1],(*ptr)[2]);
	*/
	/*
	int a[][3]={1,2,3,4,5,6};
	int (*ptr)[3]=&a;
	printf("%d %d",(*ptr)[1],(*ptr)[2]);
	++ptr;
	printf("%d %d",(*ptr)[1],(*ptr)[2]);
	
	*/
	//printf("%d",printf("%s","Hello World!"));//Hello World!12
	//printf("%10s","Hellllllllllllllo");
	/*char c=255;
	c=c+10;
	printf("%d",c);
	*/
	
	/*
	int var=2147483647;
	var++;
	printf("%d",var);
*/
	/*
	struct ourNode p={'1','0','a'+2};//'a'+2='c'
	struct ourNode *q=&p;
	printf("%c, %c",*((char*)q+1),*((char*)q+2));
	*/
return 0; 
} 

