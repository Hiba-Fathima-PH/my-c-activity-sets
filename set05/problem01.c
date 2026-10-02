#1. Distance between two points.

  #include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Point;

Point input()
{
    Point pt;
    printf("Enter coordinates (x and y): ");
    scanf("%f %f", &pt.x, &pt.y);
    return pt;
}

float find_distance(Point p1, Point p2)
{
    float dx = p1.x - p2.x;
    float dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy);
}

void output(Point p1, Point p2, float d)
{
    printf("The distance between (%.2f, %.2f) and (%.2f, %.2f) is %.4f\n", p1.x, p1.y, p2.x, p2.y, d);
}

int main()
{
    Point p1 = input();
    Point p2 = input();
    float dist = find_distance(p1, p2);

    output(p1, p2, dist);

    return 0;
}

INPUT
Enter coordinates (x and y): 1.0 2.0
Enter coordinates (x and y): 4.0 6.0

OUTPUT
The distance between (1.00, 2.00) and (4.00, 6.00) is 5.0000
