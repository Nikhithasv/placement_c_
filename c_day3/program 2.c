#include <stdio.h>
#include <stdbool.h>
#include<math.h>

int main()
{
   int a[10];
   int n;
   int max1=0;
   printf("enter the size of the array:");
   scanf("%d",&n);
   
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(int i=0;i<n;i++)
   {
       if(max1<i)
       {
           printf("false");
           return 0;
       }
       max1=fmax(max1,i+a[i]);
       
   }
   printf("true");
   return 0;
}
