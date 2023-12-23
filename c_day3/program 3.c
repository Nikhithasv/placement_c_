/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include<math.h>

int main()
{
   int a[100];
   int n;
    int sum=0;
   int max1;
   printf("enter the size of the array:");
   scanf("%d",&n);
   
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   max1=a[0];
   for(int i=0;i<n;i++)
   {
      sum=sum+a[i];
      
      if(sum>max1)
      {
          max1=sum;
      }
      
      if(sum<0)
      {
          sum=0;
      }
       
   }
   printf("maximum sum is %d",max1);
}
