/*
Name:Mark Wanjau 
Reg no:PA106/G/28726/25
Description:c programme to calculate fare
*/
#include <stdio.h>

// Function declaration
float calculateFare(float distance);

int main() {
      //Variable declaration
    float distance;         
    float totalFare;

    printf("Enter distance traveled (in km): ");
    //prompt user to enter distance travelled 
    scanf("%f", &distance);

    totalFare = calculateFare(distance);

    printf("Total fare: KSh. %.2f\n", totalFare);

    return 0;
    }

// Function definition
float calculateFare(float distance)

 {return distance * 50;}