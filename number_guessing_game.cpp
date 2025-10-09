/*
Name:Mark Wanjau
Reg no:PA106/G/28726/25
Description:Number guessing game
*/

//because of input and output
#include <stdio.h>

//because of rand() and srand()
#include <stdlib.h>

//because of time(0) 
#include <time.h>

int main (){
 //variable declaration
 int  secret ,guess ,attempts=0;	
	
     //generate a random number
     srand(time(0));
     //random number between 1 and 20
     secret=rand()%20+1;
       
    //ask user to enter the random number
    printf("Guess a number between 1 and 20(guess game):\n");
    
    while(1){
    	//prompt user to enter their guess
    	printf("Enter your guess:");
    	scanf("%d" ,&guess);
    	attempts++;
    	
    	if(guess > secret) {
			printf("Too high!\n");
		}
		else if (guess<secret){
			printf("Too low!\n");
		}
		else{
			printf("Congratulions, you guessed the correct numver in %d attempts.\n",attempts);
		
		//stop loop after correct number is guessed
			break;}
		
	}
	
	return 0;
}
    
 
	
	
	
	
	
	
	
	
	
	




