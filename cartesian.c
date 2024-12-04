// Structure for Points in 2D
typedef struct {
    float x, y;
} Point;


float distance(Point p1, Point p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

Point midpoint(Point p1, Point p2) {
    Point mid = {(p1.x + p2.x) / 2, (p1.y + p2.y) / 2};
    return mid;
}

float triangleArea(Point p1, Point p2, Point p3) {
    return fabs((p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y)) / 2);
}

void main()
{
    Point p1 = {1, 2}, p2 = {4, 6}, p3 = {0, 3};
    printf("Distance between points: %.2f\n", distance(p1, p2));
    Point mid = midpoint(p1, p2);
    printf("Midpoint: (%.2f, %.2f)\n", mid.x, mid.y);
    printf("Area of Triangle: %.2f\n", triangleArea(p1, p2, p3));
}