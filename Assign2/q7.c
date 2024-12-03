#include <stdio.h>

int main()
{
    int marks;
    char grade;

    // Input marks from the user
    printf("Enter the marks obtained by the student (0-100): ");
    scanf("%d", &marks);

    // Validate marks input
    if (marks < 0 || marks > 100)
    {
        printf("Invalid marks! Please enter a value between 0 and 100.\n");
        return 1;
    }

    // Determine the grade using switch-case
    switch (marks / 10)
    {
    case 10: case 9: // For marks in range 90//-100
        grade = 'O';
        break;
    case 8: // For marks in range 80-89
        grade = 'A';
        break;
    case 7: // For marks in range 70-79
        grade = 'B';
        break;
    case 6: // For marks in range 60-69
        grade = 'C';
        break;
    case 5: // For marks in range 50-59
        grade = 'D';
        break;
    case 4: // For marks in range 40-49
        grade = 'E';
        break;
    default: // For marks less than 40
        grade = 'F';
    }

    // Display the grade
    printf("The grade for marks %d is: %c\n", marks, grade);

    return 0;
}
