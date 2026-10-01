#include <stdio.h>

int main(void)
{
    int x, y;
    int sum, diff, prod, quot, remainer;

    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);

    // sum
    sum = x + y;

    // difference
    if(x > y){
        diff = x - y;
    }
    else{
        diff = y - x;
    }

    // product
    prod = x * y;
    
    printf("Sum: %d \n", sum);
    printf("Difference: %d \n", diff);
    printf("Product: %d \n", prod);

    // quotient
    if (y != 0){
        quot = x / y;
        printf("Quotient: %d \n", quot);
    } else {
        printf("Quotient: Cannot be devided by 0\n");
    }

    // remainder
    if (y != 0){
        remainer = x % y;
        printf("Remainder: %d \n", remainer);
    } else {
        printf("Remainder: Cannot be devided by 0\n");
    }

    return 0;
}