/*
Name:Mark Wanjau 
Reg no :PA106/G/28726/25
Description: programme to calculate water bill 
*/

#include <stdio.h>

// Function declaration
float calculateElectricBill(int units);  

int main() {

     //variable declaration 
    int units;              
    float totalBill;         

    printf("Enter units consumed: ");
    //prompt user to enter units consumed
    scanf("%d", &units);

    totalBill = calculateElectricBill(units);

    //display total bill
    printf("Total bill: KSh. %.2f\n", totalBill);

    return 0;
}

// Function definition
float calculateElectricBill(int units) {
    float total = 0;

    if (units <= 100) 
    {total = units * 10;} 
    
    else if (units <= 200) 
    { total = (100 * 10) + ((units - 100) * 15); } 
    
    else 
    {total = (100 * 10) + (100 * 15) + ((units - 200) * 20);}

    return total;
}