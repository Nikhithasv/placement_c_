/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
int main()
{
   char pass[25];
   
   printf("enter your password:");
   scanf("%s",pass);
   int upper=0;
   int lower=0;
   int spl=0;
   int digit=0;
   int length=0;
   
   for(int i=0;pass[i] != '\0';i++)
   {
       if(pass[i] >='a' && pass[i]<='z')
       {
           lower=1;
       }
       if(pass[i] >='A' && pass[i]<='Z')
       {
           upper=1;
       }
       
       //!@#$%^&*()-+
       
       if(pass[i]=='!' || pass[i]=='@'||pass[i]=='#' || pass[i]=='$'||pass[i]=='%' || pass[i]=='^'||pass[i]=='&' || pass[i]=='*'||pass[i]=='(' || pass[i]==')'||pass[i]=='-' || pass[i]=='+' )
       {
           spl=1;
       }
       
       if (pass[i]>='0'&& pass[i]<='9')
       {
           digit =1;
       }
   }
    
    if(strlen(pass)>=8)
    {
        length=1;
    }
    if(upper&&lower&&spl&&digit)
    {
        printf("strong password");
    }
    
    else{
        printf("weak password");
    }
    
    return 0;
}
