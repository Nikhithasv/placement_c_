#include <stdio.h>

int main() {
    int hours,days,workers;

    printf("enter total number of hours needed: ");
    scanf("%d", &hours);
    printf("enter number of days: ");
    scanf("%d", &days);
    printf("enter number of workers: ");
    scanf("%d", &workers);
    int available = days * 8 * 0.9; 
    int total = available + workers * days * 2;
    int difference = hours- total;
    printf(hoursDifference <= 0 ? "Yes! %d hours left.\n" : "Not enough time! %d hours needed.\n", -hoursDifference);

    return 0;
}
