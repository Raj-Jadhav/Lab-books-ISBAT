/*a program that checks if a user is eligible to vote at ISBAT university. The program should
prompt the user to enter age, an if the age is equal or above 18 years, it should display that the
user is eligible to vote*/
#include <stdio.h>

int main (){
    //Declare variables and datatype
    char name[50];
    int age;

    printf("\nWelcome to ISBAT UNIVERSITY ELECTORAL COMMISSION\n");
    
    //Prompt the user for name and age and store them in memory.
    printf("Please enter your name below:\n");
    scanf("%s",&name);
    
    printf("Please enter your AGE below;\n");
    scanf("%d",&age);

    //Check if the age is 18 and above and display the respective message.
    if (age >= 18)
    {
        printf("\n%s is Eligible to vote",name);
    }else {
        printf("\n%s is not eligible to vote! Must be 18 years and older.",name);
    }
    
    return 0;
}