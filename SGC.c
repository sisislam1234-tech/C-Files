#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){

char name[41];
double num1;
double num2;
double num3;

printf("Enter your name :");
fgets(name,41,stdin);
name[strlen(name)-1]= '\0';

printf("\nEnter your marks in English:");
scanf("%lf",&num1);
printf("\nEnter your marks in Science:");
scanf("%lf",&num2);
printf("\nEnter your marks in Mathematics:");
scanf("%lf",&num3);
double total =(num1 +num2 + num3);
double avg = (num1 +num2 + num3)/3;

if (num1>=40 && num2>=40 && num3>=40){
    printf("\nYou have passed the exam.");
}
else{
printf("\nYou have failed the exam.");
}
printf("\nName:%s",name);
printf("\nYour Total mark is :%lf",total);

printf("\nYour average mark is %lf.",avg);










}