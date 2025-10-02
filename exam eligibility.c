//simple c programme for exam eligibility
/*
Name;Mark wanjau
Reg no;PA106/G/28726/25
Description;c programme for exam eligibility
*/

#include <stdio.h>

int main(){
	//variable declaration
	float attendance,marks;
	
	//prompt user to enter their attendance
	printf("enter attendance percentage:");
	scanf("%f",&attendance);
	
	//prompt user to enter their average amrks
	printf("enter average marks:");
	scanf("%f",&marks);
	
	//print output accordinly
	if (attendance >= 75 &&  marks >= 40) 
	
	{printf("you are eligible");}
	 else 
    {printf ("you are not eligible");}
		
		return 0;
}
	
	