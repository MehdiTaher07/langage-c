#include <stdio.h>
#include <stdlib.h>
#define SIZE 512
#define TARGET 'e'
int main()
{
char TXT[512];
int i,j,n=SIZE-2;
printf("\nEntrer votre chaine de caractere: \n");
gets(TXT);
//Si le caract�re se trouve � la fin
if(TXT[SIZE-1] == TARGET)
TXT[SIZE-1] = ' ';
for(i=0 ;i<n; i++)
{
//Si le caract�re TARGET est d�tect�
if(TXT[i]=='e')
{
//On fait un d�calage
for(j=i ;j<n; j++)
{
TXT[j] = TXT[j+1];
}
}
}
printf("\n%s\n",TXT);
system("pause");
}
