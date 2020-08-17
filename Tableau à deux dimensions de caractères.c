#include<stdio.h>
int main(){
	char t[10][10];
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			t[i][j]='*';
		}
		
	}
	for(i=0;i<10;i++)
	{
		t[i][i]='-';
		//t[10-(i+1)][10-(i+1)]='-';
	}
	j=9;
	for(i=0;i<10;i++)
	{
		t[i][j]='-';
		j--;
		//t[10-(i+1)][10-(i+1)]='-';
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%c",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}
