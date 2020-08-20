#include<stdio.h>
int main(){
	//{} the curly braces are used in pairs to indicate where a block of code begins and ends.
	//in c programs, every statement needs to be terminated by a semi-colon
	char *names[20];
	//[] takes precedence over *
	//so the interpretation is:
	//names is an array of size 20 of a pointer to char.
	char (*place)[10];
	//in case of using parentheses to override the precedence, the * is applied first:
	//place is a pointer to an array of size 10 of char.
	int fn(long,short);
	//there is no precedence to worry about here:
	//fn is a function taking long,short and returning int.
//	int *fn(void);
	//the () is applied first:
	//fn is a function taking void and returning a pointer to int.
	int (*fp)(void);
	//fp is a pointer to a function taking void and returning int.
	int arr[5][8];
	//arr is an array of size 5 of an array of size 8 of int.
	int **ptr;
	//ptr is a pointer to a pointer to an int
//	float f=1.33f;
//	double d=.1;
//	double a=1.2e1;
//	printf("%f",a);
	//--------------
//	a string in c is a sequence of chars, terminated by a literal zero.
//char* str ="Hello, World!";
//char a1[]="abc";
//char a2[4]="abc";//{'a','b','c','\0'}
/*
char* s="foobar";
//s[0]="F";//error
char const* ss="foobar";
printf("%s",s);
*/
//-------Declaration-Definition---------
extern int a;      // Declaration 
int a;             // Definition
a = 10;             // Initialization
int b = 10;        // Definition & Initialization
/*
Declaration just specifies the type but doesn't allocate memory,
whereas Definition associates the variable with a type and allocates memory.
Declaration is more useful when you want to refer the variable before definition.

*Don't confuse definition with initialization. Both are different, 
initialization gives value to the variable. See the above example.
*/

int fun(int a,int b);
/*
Note the semicolon at the end of function so it says it is only a declaration.
Compiler knows that somewhere in the program that function will be defined with 
that prototype.Now if the compiler gets a function call something like this:
int b=fun(x,y,z);
Compiler will throw an error saying that there is no such function. 
Because it doesn't has any prototype for that function.
*/
	return 0;
}
