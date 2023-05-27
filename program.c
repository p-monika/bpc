//program for sum of two numbers

#include <stdio.h>
int main() {

    int num1, num2, sum;

    printf("Enter two numbers:\n ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;

    printf("%d + %d = %d", num1, num2, sum);
    return 0;
}

output:
Enter two numbers:
 3
 4
3 + 4 = 7
