#8. Write a program to read and print the points of a polygon

#include <stdio.h>

typedef struct {
    float x;
    float y;
} Point;

typedef struct {
    int total_points;
    Point vertices[6];
} Hexagon;

Hexagon input()
{
    Hexagon hex;
    hex.total_points = 6;
    for (int i = 0; i < 6; i++) {
        printf("Enter point %d (x y): ", i + 1);
        scanf("%f %f", &hex.vertices[i].x, &hex.vertices[i].y);
    }
    return hex;
}

void output(Hexagon hex)
{
    printf("Hexagon coordinates:\n");
    for (int i = 0; i < 6; i++) {
        printf("P%d: (%.2f, %.2f)\n", i + 1, hex.vertices[i].x, hex.vertices[i].y);
    }
}

int main()
{
    Hexagon h;
    h = input();
    output(h);
    return 0;
}

INPUT
Enter point 1 (x y): 0 0
Enter point 2 (x y): 2 1
Enter point 3 (x y): 3 3
Enter point 4 (x y): 2 5
Enter point 5 (x y): 0 4
Enter point 6 (x y): -1 2


OUTPUT
Hexagon coordinates:
P1: (0.00, 0.00)
P2: (2.00, 1.00)
P3: (3.00, 3.00)
P4: (2.00, 5.00)
P5: (0.00, 4.00)
P6: (-1.00, 2.00)
