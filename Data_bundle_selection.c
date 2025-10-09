/*
Name:Mark Wanjau
Reg no:PA106/G/28726/25
Description:simple c programme to display data bundle price
*/

#include <stdio.h>

int main(){ 
	//variable declaration
	int choice;
	  
    //display the data menu
	printf("select data bundle:\n");
	printf ("1. 100MB @50kes\n");
	printf ("2. 500MB @200kes\n");
	printf ("3. 1GB   @350kes\n");
	printf ("4. 2GB   @600kes\n ");
	  
    //prompt user to enter choice
	printf ("Enter your choice(1-4):");
	scanf ( "%d" ,&choice); 
	
	//print output according to choice
	//using switch case for selection of bundles
	  
	  switch(choice){
	  	case 1:
	  		printf("You selected 100MB. Cost= 50kes \n");
	  		break;
	  	case 2:
	  		printf("You selected 500MB. cost= 200kes \n");
	  		break;
	  	case 3:
	  		printf("YOU selected 1GB. cost=350kes \n");
	  		break;
	  	case 4:
	  		printf("You selected 2GB. cost=600kes\n");
	  		break;
	  	default:
	  		printf("Invalid choice\n");}
	  		
	  		return 0;
	  		
}
	  			 
			 
