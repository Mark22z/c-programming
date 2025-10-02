/*
Name:Mark Wanjau
Reg no:PA106/28726/25
Description;c programme to display water bill
*/

#include <stdio.h >

int main(){
	//variable declaration
	float bill;
	int water_units;
	
	
    //prompt user to enter water units consumed
	printf("enter number of water units consumed:");
	scanf("%d",& water_units);
	
	if(water_units  <=30)
	{bill=water_units *20;}
		
	else if(water_units <=60)
     {bill=water_units *25;}
     	
	 else if(water_units >60)
	{bill=water_units *30;}
			 
	//display water bill accordinly
	printf("your water bill is: %.2f kes ",bill);		
		
	
	return 0;
	}