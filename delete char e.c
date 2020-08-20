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
//Si le caractère se trouve à la fin
if(TXT[SIZE-1] == TARGET)
TXT[SIZE-1] = ' ';
for(i=0 ;i<n; i++)
{
//Si le caractère TARGET est détecté
if(TXT[i]=='e')
{
//On fait un décalage
for(j=i ;j<n; j++)
{
TXT[j] = TXT[j+1];
}
}
}
printf("\n%s\n",TXT);
system("pause");
}
