#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

FILE*fp;
char file[100];
int i,n;
printf("enter the file name to open \n");
scanf("%s",file);
fp=fopen(file,"r");
if(fp==NULL)
   {
   printf("error");
   exit (0);
   }
   else
   {

   printf("file opened successfully\n");
   char line[20];
        n=sizeof(line)/sizeof(line[0]);
        for(i=1;i<n;i++)
        {
          fscanf(fp,"%c",&line);
        printf("%c\n",line);

        }
        return 0;
      }

 }



