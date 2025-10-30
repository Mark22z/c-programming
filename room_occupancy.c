/*
Name :Mark Wanjau 
Reg no:PA106/G/28726/25
Description : checking room occupancy 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];  // 5 floors × 10 rooms
    int floor, room, occupied, vacant;

    srand(time(0));  // So random numbers change each time

    // Loop through each floor
    for (floor = 0; floor < 5; floor++) {
        occupied = vacant = 0; 

        
        for (room = 0; room < 10; room++) {
            
            occupancy[floor][room] = rand() % 2;

            // Count how many rooms are occupied or vacant
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        // After checking , display results
        printf("Floor %d: Occupied = %d, Vacant = %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}