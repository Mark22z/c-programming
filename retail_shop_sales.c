/* 
Name: Mark Wanjau 
Reg No: PA106/G/28726/25
Short description: Read transactions from sales.txt and print total sales for the day.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    double amount;
    double total = 0.0;

    fp = fopen("sales.txt", "r");
    if (fp == NULL) {
        perror("Error opening sales.txt");
        return 1;
    }

    printf("Reading transactions from sales.txt...\n");

    while (fscanf(fp, "%lf", &amount) == 1) {
        total += amount;
    }

    if (!feof(fp)) {
        
        fprintf(stderr, "Warning: unexpected input format in sales.txt\n");
    }

    fclose(fp); // close the file 
    printf("Total sales for the day: %.2f\n", total);
    return 0;
}