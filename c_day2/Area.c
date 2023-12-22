

#include <stdio.h>

int main()
{   char shape;
    int area;
    int size;
    printf("1.SQUARE \n 2.CIRCLE\n");
    printf("ENTER THE SHAPE TO CALCULATE AREA:");
    scanf("%c",&shape);
    switch(shape)
{
case 's':
printf("enter the size of the square:");
scanf("%d",&size);
printf("Area of square = %d",(size*size));
   
             break;
case 'c':
printf("enter the sradius of the circle:");
scanf("%d",&size);
printf("Area of circle = %d",(3.14*(size*size)));
   
             break;
default: printf("access denied");
}
    return 0;
}
