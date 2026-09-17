//2. Write a C program to add two numbers.

#include <stdio.h>

void input(int *aa, int *ab);
int add(int a, int b);
void output(int a, int b, int sum);

int main()
{
    int a, b, sum;

    input(&a, &b);
    sum = add(a, b);
    output(a, b, sum);

    return 0;
}

void input(int *aa, int *ab)
{
    printf("Enter two numbers: ");
    scanf("%d %d", aa, ab);
}

int add(int a, int b)
{
    return a + b;
}

void output(int a, int b, int sum)
{
    printf("%d + %d = %d\n", a, b, sum);
}


INPUT
15 25

OUTPUT
15 + 25 = 40
