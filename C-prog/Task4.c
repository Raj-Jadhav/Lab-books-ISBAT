/*A program with a function that adds two numbers. The main function should prompt the
user to enter two numbers, and the other function should add those two numbers and return the
sum. The final output should be; "The sum of x and y is z".*/
#include <stdio.h>
int add_numbers(int num1, int num2);
int main (){
    int num1, num2, result;
    printf("Please enter first number:\n");
    scanf("%d",&num1);

    printf("Please enter second number:\n");
    scanf("%d",&num2);

    result = add_numbers(num1, num2);
    printf("The sum of %d and %d is %d",num1, num2, result);
    
    return 0;
}
int add_numbers(int num1, int num2){
   return num1 + num2; 
}