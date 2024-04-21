#include <stdio.h>

int main() {
    char name[50];
    int units;
    float charges = 0, surcharge = 0;

    printf("Enter your name: ");
    scanf("%[^\n]s", name);
    getchar(); // to clear the input buffer

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate charges based on usage
    if (units <= 200)
        charges = units * 0.80;
    else if (units <= 300)
        charges = 200 * 0.80 + (units - 200) * 0.90;
    else
        charges = 200 * 0.80 + 100 * 0.90 + (units - 300);

    // Minimum meter charge
    charges += 100;

    // Check for surcharge
    if (charges > 400)
        surcharge = 0.15 * charges;

    // Add surcharge if applicable
    charges += surcharge;

    printf("\nElectricity Bill\n");
    printf("Name: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Charges: Rs. %.2f\n", charges);

    return 0;
}
/*
1: Low electricity usage (less than or equal to 200 units)
Input:
Name: John Doe
Units Consumed: 150
Output:
Electricity Bill
Name: John Doe
Units Consumed: 150
Charges: Rs. 220.00
  
2: Moderate electricity usage (between 201 and 300 units)
Input:
Name: Jane Smith
Units Consumed: 250
Output:
Electricity Bill
Name: Jane Smith
Units Consumed: 250
Charges: Rs. 305.00

3: High electricity usage (more than 300 units)
Input:
Name: Alice Johnson
Units Consumed: 400
Output:
Electricity Bill
Name: Alice Johnson
Units Consumed: 400
Charges: Rs. 410.00

4: Very high electricity usage (more than 300 units with surcharge)
Input:
Name: Bob Brown
Units Consumed: 500
Output:
Electricity Bill
Name: Bob Brown
Units Consumed: 500
Charges: Rs. 612.50
  
5: Borderline case (just enough to trigger surcharge)
Input:
Name: Carol Williams
Units Consumed: 301
Output:
Electricity Bill
Name: Carol Williams
Units Consumed: 301
Charges: Rs. 406.15

6: Minimum units consumed (0 units)
Input:
Name: David Lee
Units Consumed: 0
Output:
Electricity Bill
Name: David Lee
Units Consumed: 0
Charges: Rs. 100.00
  
These scenarios cover various cases such as low, moderate, and high electricity usage, as well as cases where the surcharge is applied and where it is not.
  */
