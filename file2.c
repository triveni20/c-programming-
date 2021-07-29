#incude<stdio.h>
#include<stdlib.h>

int main()
{
    int i,stdin,largest,smallest;
    FILE *fp;


    fp=fopen("/triveni/doccuments/ls.c\n","r");

    if(fp==NULL)
       {
	  printf("ls.c file is failed to opened ");
	  exit(1);
	}

	while(fscanf(fp,"%d",&i)==1) 
	{
	
	   printf("%d ",i);
     	}
     	return 0;
 }

