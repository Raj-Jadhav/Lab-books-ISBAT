/*A program that performs the four basic arithmetic operations and displays the result for
each operation*/
#include <stdio.h>

int main(){
    //Declare variables for storing our input values.
    double r,s;
    double sum,subtract,multiply,division;

    //Prompt User for values and store them in variables r and s
    printf("Please enter first number:\n");
    scanf("%lf",&r);
    printf("Please enter second number:\n");
    scanf("%lf",&s);
    
    //Arithmetic Operations
    sum = r + s;
    subtract = s - r;
    multiply = r * s;
    division = s/r;
      //comment below this goes here about the divide by 0 check  
        //Display the results of the operations
        printf("The sum of %.0lf and %.0lf is %.0lf\n"
               "The difference of %.0lf and %.0lf is %.0lf\n"
               "The Product of %.0lf and %.0lf is %.0lf\n"
               "The division of %.0lf and %.0lf is %.2lf\n",r,s,sum,s,r,subtract,r,s,multiply,s,r,division);
    return 0;
}

/* // Check for division by zero
    if (r != 0) {
        division = s / r;
        printf("The sum of %.2lf and %.2lf is %.2lf\n"
               "The difference of %.2lf and %.2lf is %.2lf\n"
               "The product of %.2lf and %.2lf is %.2lf\n"
               "The division of %.2lf by %.2lf is %.2lf\n",
               r, s, sum, s, r, subtract, r, s, multiply, s, r, division);
    } else {
        printf("The sum of %.2lf and %.2lf is %.2lf\n"
               "The difference of %.2lf and %.2lf is %.2lf\n"
               "The product of %.2lf and %.2lf is %.2lf\n"
               "Division by zero is not allowed.\n",
               r, s, sum, s, r, subtract, r, s, multiply);
    }*/