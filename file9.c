#include<stdio.h>
#include<stdlib.h>   
#include<string.h>

int main()
    {
    FILE*fptr;
    int n=3,i;
    char str[50];
    fptr=fopen("sample.txt","w");
    if(fptr==NULL)
    {
         printf("could not open the file");
         return 0;
    }
    else 
    {
       printf("file opened successfully");
       for(i=0;i<n;i++)
       {
           puts("enter a name");
           scanf("%s",str);
    
        

	}   
	printf("sample having output as %d %s\n",i,str);

	fprintf(fptr,"%d %s\n",i,str);

       
          fclose(fptr);

        return 0;
     }
     }














     
           

