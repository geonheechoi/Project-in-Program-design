/*
Geonhee Choi
U15718954
net id: geonheechoi
Geonhee Choi project1 solution
*/
#include <stdio.h>
#include <stdlib.h>

#define base 1986 //define the last year when halley visited earth
#define period 76 //input the period


int main()
{
    int current; // make current year variable

    
    
    printf("Enter year:\n"); // printf enter year
    scanf("%d", &current);//scan the current year
    
    if(current<=1986){//test valid or invalid input 
        
        printf("Input year must be greather than 1986\n");//if input does not satisfy condition  print error statement and exit
        exit(EXIT_FAILURE);
    }
    
    if(current>base) //if  input satisfy condition then execute
    {
        int period_va=(current-base)/period;  //calculate duration
        int find=(period_va*period)+(base+period); //(duration*76)+(1986+76)
        

        printf("Next appearance: %d", find);  //printout next appearance year
    }

    return 0;
}


