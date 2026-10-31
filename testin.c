#include <stdio.h>

int main()
{
    int num,a,b;
    printf("Enter a number:");
    scanf("%d",&num);
        a = num % 2;
        b = num % 5;
        printf("The memory address %p\n",& num);
        printf("Remainder divided by 2 is % d \n", a);
        printf("Remainder divided by 5 is % d \n", b);
    return 0;
}