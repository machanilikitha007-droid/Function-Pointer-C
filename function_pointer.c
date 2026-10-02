#include <stdio.h>

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int x, y;
    int (*operation)(int, int);

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    operation = multiply;

    printf("Product = %d\n", operation(x, y));

    return 0;
}
