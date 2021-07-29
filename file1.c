#incude<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("\ntriveni\doccuments\ls.c\n","r");
    fp=fopen("\ntriveni\doccuments\ls.c\n","w");
	
    if(fp==NULL)
       {
	  printf("ls.c file is failed to opened ");
	exit(1);
       }
      while(fscanf(fp,"%d",&i)==1)
       {
	      fscanf(stdin,"%d %d\n",i);
        }
	fclose(fp);
	printf("file should be closed");
	return 0;
}
	
		    
		   
		   
		   
		   
	
	
	
         
	
     
     
       return 0;
       
 }

