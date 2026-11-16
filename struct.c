#include <stdio.h>
#include <string.h>
struct students
{
    int id;
    char course[20];
    int year;
    float cgpa;
} aryan, rahul, manish;
int main()
{
    aryan.id = 111;
    strcpy(aryan.course, "AIML");
    aryan.year = 2;
    aryan.cgpa = 7.5;
    rahul.id = 222;
    strcpy(rahul.course, "AIDS");
    rahul.year = 1;
    rahul.cgpa = 8.5;
    manish.id = 333;
    strcpy(manish.course, "CSE");
    manish.year = 4;
    manish.cgpa = 8;
    printf("NAME:   |Aryan|Rahul|Manish |\n");
    printf("ID:     | %d | %d | %d   |\n", aryan.id, rahul.id, manish.id);
    printf("COURSE: |%s | %s| %s   |\n", aryan.course, rahul.course, manish.course);
    printf("YEAR:   | %d   | %d   |   %d   |\n", aryan.year, rahul.year, manish.year);
    printf("CGPA:   |%.1f  | %.1f | %.1f   |\n", aryan.cgpa, rahul.cgpa, manish.cgpa);

    return 0;
}