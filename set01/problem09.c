#9. Write a c program to find the square root of a number

#include <stdio.h>
#include <math.h>

float input()
{
    float num;
    printf("Enter the number\n");
    scanf("%f", &num);
    return num;
}

float squareroot(float n)
{
    float x0 = n / 2;
    float x1 = (x0 + n / x0) / 2;

    while (fabs(x0 - x1) > 0.00001)
    {
        x0 = x1;
        x1 = (x0 + n / x0) / 2;
    }
    return x1;
}

void output(float n, float res)
{
    printf("The square root of %f is %f\n", n, res);
}

int main()
{
    float s, root;
    s = input();
    root = squareroot(s);
    output(s, root);
    return 0;
}


INPUT
Enter the number
25

OUTPUT
The square root of 25.000000 is 5.000000
  
