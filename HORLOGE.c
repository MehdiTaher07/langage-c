#include<stdio.h>
#include <time.h>
int main(){
	/*
	int h=0,m=0,s=0;
	double i;
	printf("Entrez l'heure exacte (sous format HH:MM:SS)");
	scanf("%d %d %d",&h,&m,&s);*/
	 time_t t = time(NULL);
  struct tm tm = *localtime(&t);
  
  do{
  
	  printf("now: %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
	  sleep(1);
	  system("cls");
  }while(1==1);
	/*
	for(h;h<=24;h++){
		//if(h==24)==0;
		
		for(m;m<60;m++){
			for(s;s<60;s++)
			{
				printf("\n\n\n\n\t\t\t%2d:%2d:%2d",h,m,s);
				for(i=0;i<227744422;i++)
				{
					i++;
				}
				system("cls");
				
			}
			s=0;
		}
		m=0;
		
	}*/
	return 0;
}
