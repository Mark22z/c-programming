/*
 Name       : Mark Wambugu
  Reg No     : COM/00123/25
  Description: 
 This program keeps prompting the user to enter a 
 password until the correct one (1234) is entered. 
 */

#include <stdio.h>

int main() {
    int password;

    // keep asking for password until the user gets it right
    do {
        printf("Enter password: ");
        scanf("%d", &password);

        // if wrong password, tell the user to try again
        if (password != 1234) {
            printf("Incorrect password. Try again.\n");
        }
        //loop continues if password is wrong 
    } while (password != 1234); 

    // if correct display access granted message
    printf("Access Granted\n");

    return 0;
}