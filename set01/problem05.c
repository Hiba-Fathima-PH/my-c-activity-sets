#5. Write a program to find the largest of three numbers using 4 functions.

#include <stdio.h>

int input()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int compare(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

void output(int a, int b, int c, int largest)
{
    printf("The largest of %d, %d, and %d is %d\n", a, b, c, largest);
}

int main()
{
    int a, b, c, largest;

    a = input();
    b = input();
    c = input();

    largest = compare(a, b, c);

    output(a, b, c, largest);

    return 0;
}

INPUT
Enter a number: 12
Enter a number: 45
Enter a number: 29

OUTPUT
The largest of 12, 45, and 29 is 45
