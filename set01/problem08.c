#8.sum of n different numbers.

#include <stdio.h>

int input_size()
{
    int n;
    printf("Enter the number of numbers you want to add:\n");
    scanf("%d", &n);
    return n;
}

void input_numbers(int n, int a[n])
{
    printf("Enter numbers:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

int sum_of_numbers(int n, int a[n])
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += a[i];
    }
    return total;
}

void output_numbers(int n, int a[n], int sum)
{
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d + ", a[i]);
    }
    printf("%d = %d\n", a[n - 1], sum);
}

int main()
{
    int n, sum;
    n = input_size();
    int a[n];

    input_numbers(n, a);
    sum = sum_of_numbers(n, a);
    output_numbers(n, a, sum);

    return 0;
}

INPUT
Enter the number of numbers you want to add:
3
Enter numbers:
Enter number 1: 5
Enter number 2: 12
Enter number 3: 8


OUTPUT
5 + 12 + 8 = 25
