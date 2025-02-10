// The distance between two cities (in km.) is input through the keyboard.
//  Write a program to convert and print this distance in meters, feet, inches and centimeters.
#include <stdio.h>

int main(){
    float distance;
    printf("Enter the distance between two cities in km: ");
    scanf("%f", &distance);
    float meters = distance * 1000;
    float feet = distance * 3280.84;
    float inches = distance * 39370.1;
    float centimeters = distance * 100000;
    printf("Distance in meters: %f\n", meters);
    printf("Distance in feet: %f\n", feet);
    printf("Distance in inches: %f\n", inches);
    printf("Distance in centimeters: %f\n", centimeters);
    return 0;
}