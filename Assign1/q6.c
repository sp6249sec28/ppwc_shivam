// You are tasked with creating a C program to convert a given distance (in meters) to various other units
// commonly used in science. Your program should prompt the user for a distance in meters and then
// display a table that converts this distance into Kilometers, Centimeters, Millimeters, Feet, and Inches.
// The program must satisfy the following requirements.
// (a) Prompt the user to enter a distance in meters (floating-point number).
// (b) Perform the necessary conversions using the following relationships:
// • 1 meter = 0.001 kilometers
// • 1 meter = 100 centimeters
// • 1 meter = 1000 millimeters
// • 1 meter = 3.28084 feet
// • 1 meter = 39.3701 inches
// (c) Display the conversions in a neatly aligned table using printf with appropriate format specifiers
// as follows.
// Enter distance in meters: 12.5
// +------------------+------------------+
// | Unit | Value |
// +------------------+------------------+
// | Meters | 12.50 |
// | Kilometers | 0.01 |
// | Centimeters | 1250.00 |
// | Millimeters | 12500.00 |
// | Feet | 41.01 |
// | Inches | 492.13 |
// +------------------+------------------+

#include <stdio.h>

int main()
{
    float meters, kilometers, centimeters, millimeters, feet, inches;

    // Prompt the user to enter a distance in meters
    printf("Enter distance in meters: ");
    scanf("%f", &meters);

    // Perform the conversions
    kilometers = meters * 0.001;
    centimeters = meters * 100;
    millimeters = meters * 1000;
    feet = meters * 3.28084;
    inches = meters * 39.3701;

    // Display the conversions in a neatly aligned table
    printf("+------------------+------------------+\n");
    printf("| %-16s | %-16s |\n", "Unit", "Value");
    printf("+------------------+------------------+\n");
    printf("| %-16s | %16.2f |\n", "Meters", meters);
    printf("| %-16s | %16.2f |\n", "Kilometers", kilometers);
    printf("| %-16s | %16.2f |\n", "Centimeters", centimeters);
    printf("| %-16s | %16.2f |\n", "Millimeters", millimeters);
    printf("| %-16s | %16.2f |\n", "Feet", feet);
    printf("| %-16s | %16.2f |\n", "Inches", inches);
    printf("+------------------+------------------+\n");

    return 0;
}
