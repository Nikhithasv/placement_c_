//Get three values x, y, z and write a program to print 1 if x is the middle value, 2 if y is the middle value and 3 if z is the middle //value. Assume that all three variables (x, y, z) are distinct and have different values.

#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    int middle;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    
   
    if ((y < x && x < z) || (z < x && x < y)) 
    {
        middle = x;
    } 
    
    else if ((x < y && y < z) || (z < y && y < x)) 
    {
        middle = y;
    } 
    
    else
    
    {
        middle= z;
    }
    
    if(middle == x)
    {
        printf("1 \n");
    }
    
    else if(middle == y)
    {
        printf("2 \n");
    }
    else
    {
        printf("3 \n");
    }
    
}
