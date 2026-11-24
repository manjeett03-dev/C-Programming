#include <stdio.h>
#include <math.h>
float edist(int x1, int y1, int x2, int y2)
{
    printf("The Euclidean distance & ");
    double dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("The radius is : %.2f\n", dist);
    return dist;
}
float areaofcircle(float (*fptr)(int, int, int, int), int x1, int y1, int x2, int y2)
{
    float r = fptr(x1, y1, x2, y2);
    return (3.14 * r * r);
}
int main()
{
    int x1, x2, y1, y2;
    printf("Enter value of x1 : ");
    scanf("%d", &x1);
    printf("Enter value of x2 : ");
    scanf("%d", &x2);
    printf("Enter value of y1 : ");
    scanf("%d", &y1);
    printf("Enter value of y2 : ");
    scanf("%d", &y2);
    float (*func)(int, int, int, int);
    printf("x1 : %d ,x2 : %d ,y1 : %d ,y2 : %d \n", x1, x2, y1, y2);
    func = edist;
    float area = areaofcircle(func, x1, y1, x2, y2);
    printf("The area of circle is : %.2f\n", area);

    return 0;
}