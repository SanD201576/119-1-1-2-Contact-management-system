#include <stdio.h>

struct contact {
	char Name[50];
	char Phone[15];
	char Address[100];
	char Email[50];
};

int main()

       {
       		int i=0 , j=0;
		  struct contact conList[100];
       		
       		
       	  printf("               ========================\n");
       	  printf("                   LIST OF CONTACTS\n");
       	  printf("               ========================\n\n");
       	  printf("Name           Phone No           Address           E-mail ad\n");
       	  printf("=============================================================\n\n\n");
       	  
       	  for(i=0;i<j;i++)
       	  {
		  printf("Name   :%s\n", conList[i].Name );
       	  printf("Phone  :%s\n", conList[i].Phone);
       	  printf("Adress :%s\n", conList[i].Address);
       	  printf("Email  :%s\n", conList[i].Email);
       	  printf("==============================================================\n\n\n");
          }
       	  
       	  return 0;
	   }
