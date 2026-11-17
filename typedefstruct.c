#include <stdio.h>
typedef struct students
{
    int id;
    char course[20];
    int year;
    float cgpa;
} std;
int main()
{
    std s1, s2, s3;

    s1.id = 111;
    s1.year = 2;
    printf("s1's id: %d \n", s1.id);
    printf("s1's year: %d \n", s1.year);
    s2.id = 222;
    s2.year = 1;
    printf("s2's id: %d \n", s2.id);
    printf("s2's year: %d \n", s2.year);
    s3.id = 333;
    s3.year = 3;
    printf("s1's id: %d \n", s3.id);
    printf("s1's year: %d \n", s3.year);
    return 0;
}