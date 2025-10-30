/*
Name:Mark Wanjau 
Reg no:PA106/G/28726/25
Description:
*/
#include <stdio.h>

int main() {
     //variable declaration 
    float revenue[7], total = 0, average;
    int i;
     
     //start step stop 
    for (i = 0; i < 7; i++) {
        printf("Enter the revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }
     //calculate the average using total
    average = total / 7;
     
     //print out total weekly revenue 
    printf("\nTotal weekly revenue: %.2f", total);
    
    //print out average daily revenue 
    printf("\nAverage daily revenue: %.2f\n", average);

    return 0;
}