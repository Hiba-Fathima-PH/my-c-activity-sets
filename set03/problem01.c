#1. Distance between two point using pass by reference.

#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Point;

void input(Point *p1, Point *p2)
{
    printf("Enter coordinates of Point 1 (x y): ");
    scanf("%f %f", &p1->x, &p1->y);

    printf("Enter coordinates of Point 2 (x y): ");
    scanf("%f %f", &p2->x, &p2->y);
}

float find_distance(Point p1, Point p2)
{
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}

void output(Point p1, Point p2, float d)
{
    printf("The distance between (%.2f, %.2f) and (%.2f, %.2f) is %.4f\n", 
           p1.x, p1.y, p2.x, p2.y, d);
}

int main()
{
    Point pt1, pt2;
    float dist;

    input(&pt1, &pt2);
    dist = find_distance(pt1, pt2);
    output(pt1, pt2, dist);

    return 0;
}


INPUT
Enter coordinates of Point 1 (x y): 2 3
Enter coordinates of Point 2 (x y): 5 7


OUTPUT
The distance between (2.00, 3.00) and (5.00, 7.00) is 5.0000
