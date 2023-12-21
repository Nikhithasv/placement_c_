#include <stdio.h>
#include<math.h>

 int main() {
    
 int days;
 int y;
 int w;
 int r;
 printf("enter no.of days:");
 scanf("%d",&days);
 y=days/365;
 w=(days%365)/7;
 r=(days%365)%7;
 
 printf("no. of Years: %d\n", y);
 printf("no. of Weeks: %d\n", w);
 printf("no. of Days: %d\n", r);
  
}
//Output :
//enter no.of days:569
//no. of Years: 1
//no. of Weeks: 29
//no. of Days: 1
