/*
Name: Mark Wanjau
Reg no: PA106\G\28726\25
Description: Loan qualification programme
*/

#include <stdio.h> 

int main() {
    int age;
    float income;

    // Prompt user to enter age
    printf("Enter your age: ");
    scanf("%d", &age);
    
    //prompt user to enter annual income 
    printf("Enter your annual income (in Sh): ");
    scanf("%f", &income);

    // output to the user depending on qualifications 
    if (age >= 21 && income >= 21000) 
        printf("Congratulations you qualify for a loan.\n");
    else 
        printf("Unfortunately, we are unable to offer you loan at this time.\n");
    

    return 0;
}