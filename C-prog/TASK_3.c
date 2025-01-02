#include <stdio.h>
void get_name(char name[]);
int get_roll_number();
void calculate(int x, int y);

int main(){
    char name[50];
        get_name(name);

    int roll_number = get_roll_number();
        printf("**********************\n\n");
        printf("Your name is %s\n",name);
        printf("Your roll_number is %d\n",roll_number);

        calculate(50,30);

return 0;
}
void get_name(char name[]){
    printf("Your name here:\n");
    scanf("%s",name);
}
int get_roll_number(){
    int roll_number;
    printf("Your Roll number here:\n");
    scanf("%d",&roll_number);
    return roll_number;
}
void calculate(int x, int y){
   int sum = x+y;
   printf("The sum of %d and %d is %d \n",x,y,sum);
}

/*#include <stdio.h>
/*double refers to that data type in the C language that helps in storing high-precision sorts of floating-point numbers
or data in the computer memory.*/
void get_name();
double addSum();
int main(){
    get_name();
    addSum(25.2,50.2);
    printf("\nThe sum of is %lf",addSum()/*addSum(25.2,50.2)*/);
return 0;
}
void get_name(){
    printf("Your name is TIMO DONELY");

}
double addSum(double a, double b){
    double sum = a + b;
return sum;
}*/