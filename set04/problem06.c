#6. Write a program to find the length of a string.

#include <stdio.h>

void input(char str[])
{
    printf("Enter a string: ");
    scanf("%s", str);
}

int length_of_string(char str[])
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}

void output(int len, char str[])
{
    printf("The length of \"%s\" is %d\n", str, len);
}

int main()
{
    char str[100];
    int len;

    input(str);
    len = length_of_string(str);
    output(len, str);

    return 0;
}

INPUT
Enter a string: hello

OUTPUT
The length of "hello" is 5
