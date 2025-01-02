/* A program that uses two functions. One function is used to display your 
student name and student number. The second function is used to add two 
numbers and display the result.
*/
#include <stdio.h>
void get_studentinfo(char name[50],char roll_number[50]);
double addNumbers(double num1, double num2, double sum);

int main (){
    char name[50];
    char roll_number[50];
    double num1, num2, sum, result;
    
    
    get_studentinfo(name, roll_number);

    result = addNumbers(num1, num2, sum);

    return 0;
}

void get_studentinfo(char name[50],char roll_number[50]){
    printf("Please enter your name below:\n");
    scanf("%s",name);
    printf("Please enter your roll number below:\n");
    scanf("%s",roll_number);

    printf("Student Name: %s\n",name);
    printf("Student roll number: %s\n",roll_number);
}
double addNumbers(double num1, double num2, double sum){
    printf("Please enter first number below:\n");
    scanf("%lf",&num1);

    printf("Please enter second number:\n");
    scanf("%lf",&num2);
    
    sum = num1 + num2;
    printf("The sum of %.2lf and %.2lf is %.2lf\n", num1, num2, sum);
    
    return sum;
}
//16.0 learning cprog
