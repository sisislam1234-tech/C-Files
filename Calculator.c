#include<stdio.h>
 int main() {
char variable;
float Num1;
float Num2;

    float result;
    printf("\nWhich operation do you want to complete?(+,-,*,/)");
    scanf(" %c",&variable);
    printf("You are doing %c operation",variable);
    printf("\nEnter your First Number :");
    scanf("%f",&Num1);
    printf("\nEnter your Second Number :");
    scanf("%f",&Num2);
    switch (variable)
    {
    case '+':
    result = Num1 + Num2;
    printf("Your Result is %f",result);
    break;
    case '-':
    result = Num1 - Num2;
    printf("Your Result is %f",result);
    break;
    case '*':
    result = Num1 * Num2;
    printf("Your Result is %f",result);
    break;
    case '/':
    if (Num2 == 0) {
        printf("Your result is not available.");
    } else {
        result = Num1 / Num2;
        printf("Your Result is %f",result);
    }
    break;
    default:
    printf("The operator you have given is Invalid");
        break;
    
    }
















 }