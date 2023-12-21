#include <stdio.h>
#include<math.h>

 int main() {
    
 
  int a=10;
  int b=20;
  printf("before %d %d  \ n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("after %d %d  \n",a,b);
}

//Output 
//before 10 20 
//after 20 10
