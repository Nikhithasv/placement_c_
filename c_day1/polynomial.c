#include <stdio.h>
#include <math.h>

int main() {
    
    int d, i;
    double z, result = 0;
    printf("enter the degree of the polynomial: ");
    scanf("%d", &d);
    double c[d + 1];
    for (i = 0; i <= d; ++i) {
        printf("enter coefficient a%d: ", i);
        scanf("%lf", &c[i]);
    }
    printf("enter the value of z: ");
    scanf("%lf", &z);
    for (i = d; i >= 0; --i) {
        result += c[i] * pow(z, i);
    }
    printf("P(z) = %.2lf\n", result);

    return 0;
} 

//output :
//
//enter the degree of the polynomial: 20  3
//enter coefficient a0: 2
//enter coefficient a1: -1
//enter coefficient a2: 3
//enter coefficient a3: 4
//enter the value of z: 2
//P(z) = 44.00
