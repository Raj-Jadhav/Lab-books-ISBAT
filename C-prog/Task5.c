/*a program that uses a switch statement to display the seven days of the week.*/
#include <stdio.h>

int main() {
    int day;

    // Prompt user for input of a number between 1 & 7
    printf("Enter a number (1-7) to display the day of the week:\n");
    scanf("%d", &day);

    // Use a switch statement to display the corresponding day
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}