#include<stdio.h>
#include<math.h>

int main(){

double num;
double total = 0;
double avg = 0;
int count =0;
double max = 0;




while( num > 0){

printf("\nEnter a number :");
scanf("%lf",&num);

if(num > max){
    max =num;
}

count ++;

total = total + num ;

avg = total / count;
  
}

printf("\nYour total is :%lf",total);

printf("\nEntered inputs :%d",count);
printf("\nYour maximum number is :%lf",max);
printf("\nYour average is :%lf",avg);
    
}







