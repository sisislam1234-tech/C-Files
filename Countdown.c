#include<stdio.h>
#include<math.h>
#include<windows.h>

int main(){
int num;
char name[23];


printf("Enter your name :");
fgets(name,23,stdin);
name[strlen(name)-1] = '\0';

printf("Enter a starting point :");
scanf("%d",&num);

/*for( int num=20;num>=0;num--){

printf("\n%d",num);
Sleep(1000);
}*/

while(num>=0 && num<=60){

printf("\n%d",num);
Sleep(1000);   
num--;

}



printf("\n Thank you %s for using.",name);













    return 0;
}