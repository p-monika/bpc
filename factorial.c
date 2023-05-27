//progarm for factorial of a number

#include<stdio.h>

void main(){

int num, i, fact=1;

printf("Enter the number to calculate the factorial");
scanf("%d", &num);

if(num<0)
{
printf("No factorial for negative numbers");
}
else
{
for(i=1;i<=num;i++)
fact=fact*i;
}
printf("The factorial of the number is %d", fact);
}
//output
Enter the number to calculate the factorial5
The factorial of the number is 120
