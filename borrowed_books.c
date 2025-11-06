/* 
 Name: Mark Wanjau 
 Reg No: PA106/G/28726/25
 Short description: programme to prompt librerian to enter
 books borrowed 
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *fp;
    char title[256];
    char choice[4];

    fp = fopen("borrowed_books.txt", "a");
    if (fp == NULL) {
        perror("Error opening borrowed_books.txt");
        return 1;
    }

    printf("Enter book titles to store (press Enter after each title).\n");
    printf("When finished type 'no' when asked to add another.\n\n");

    do {
        printf("Enter title: ");
        if (fgets(title, sizeof title, stdin) == NULL) {
            
            break;
        }
        
        size_t len = strlen(title);
        if (len > 0 && title[len - 1] == '\n') title[len - 1] = '\0';

        if (strlen(title) == 0) {
            printf("Empty title ignored.\n");
        } else {
            fprintf(fp, "%s\n", title); 
            fflush(fp); 
            printf("Saved: \"%s\"\n", title);
        }

        printf("Add another? (yes/no): ");
        if (fgets(choice, sizeof choice, stdin) == NULL) break;
        
    } while (choice[0] != 'n' && choice[0] != 'N');

    fclose(fp);
    printf("File closed. All done.\n");
    return 0;
}