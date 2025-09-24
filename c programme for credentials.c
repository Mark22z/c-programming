/*
Name :Mark Wanjau
Reg no:PA106\G\28726\25
Description:simple c programme for height,id number and bank balance
*/

#include<stdio.h> 

int main(){
//variable deceleration
   float height,bank_balance;
   int id_number;
 
 //prompt user to enter height
   printf("enter height:");
   scanf("%.f" ,&height );
   
    printf("you entered: %.2f (height)");
    
    // prompt user to enter ID number
    printf("\nenter ID number: ");
    scanf("%d" ,&id_number );
    
    printf("you entered: %d (id number)");
    
    //prompt user to enter bank balance 
     printf("\nenter bank balance:");
     scanf("%f",&bank_balance);
     
     printf("you entered: %.2f(bank balance)");
     
     
    
    return 0;
}