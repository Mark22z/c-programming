/*
 * Name       : Mark Wambugu
 * Reg No     : PA106/G/28726/25
 * Description: simple c programme to ask and verify password 
 */

#include <stdio.h>

int main() {
     //variable declaration 
    int password;

    // The correct password is 1234
    do {
        printf("Enter password: ");
        scanf("%d", &password);

        // Check whether the entered password is wrong
        if (password != 1234) {
            printf("Wrong password! Try again.\n");
        }

    } while (password != 1234);  // Keep looping until correct password 

    // Display message after correct password has been entered
    printf("Access Granted!\n");

    return 0;
}


