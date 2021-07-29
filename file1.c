#incude<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("\ntriveni\doccuments\ls.c\n","a");
    if(fp==NULL)
       {
	  printf("ls.c file is failed to opened ");
	}
     else 
       {
          printf("the file is now opened\n");
       }
       return 0;
       
 }

