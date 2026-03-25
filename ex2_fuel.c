/* Name: OTIM AMOS */
/* Student Number: 25/U/BIO/01416/PD */

#include<stdio.h>
int main() {

float distance, fuel, efficiency;
//Get the input from the user
printf("Enter the distance(km): ");
scanf("%f",&distance);

printf("Enter the fuel used(litres):");
scanf("%f",&fuel);
//The fuel efficiency
efficiency = (distance/fuel);

//Display of the Result
printf("fuel efficiency km/l: %.2fkm/l\n", efficiency);



    return 0;
}
