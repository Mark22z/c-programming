/*
Name :Mark Wanjau
Reg no:PA106\G\28726\25
Description:c programme to compute volume amnd surface area
*/

#include<stdio.h> 

int main(){
//variable deceleration
 float radius , height, volume , surface_area;
 float π=3.142;
 
 //prompt user to enter radius 
  printf("enter radius:");
  scanf("%f",& radius);
  
  //prompt user to enter height 
  printf("\n enter height:");
  scanf("%f",& height);
   
   //compute volume 
    volume = π*radius*radius*height ;
    
    //display volume 
    printf("\n volume is %.2f",volume);
    
    //compute surface area
    surface_area =2*π*radius*radius+2*π*radius*height ;
     
     printf("\nsurface area is %.2f",surface_area);
    
  return 0;}
   
