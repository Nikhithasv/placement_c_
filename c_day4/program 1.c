

//call by value 
#include <stdio.h>
void swap(int a , int b)
{
    int c;
  c=a;
  a=b;
  b=c;
    printf("after swapping %d %d \n",a,b);
}
int main() {
    int a ;
    int b;
    printf("enter the value of A and B :\n");
    scanf("%d %d",&a,&b);
    printf("before swapping %d %d\n",a,b);
    swap(a,b);
    
}




//call by reference 
#include <stdio.h>
void swap(int *a , int *b)
{
    int c;
  c=*a;
  *a=*b;
  *b=c;
    printf("after swapping %d %d \n",*a,*b);
}
int main() {
    int a ;
    int b;
    printf("enter the value of A and B :\n");
    scanf("%d %d",&a,&b);
    printf("before swapping %d %d\n",a,b);
    swap(&a,&b);
    printf("after swapping %d %d\n",a,b);
    
}

