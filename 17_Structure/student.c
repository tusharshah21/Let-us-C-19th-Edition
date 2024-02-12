// Create a structure called student that can contain data given below:
// Roll number, Name, Department, Course, Year of joining
// Assume that there are not more than 450 students in the college.
// (1) Write a function to print names of all students who joined in a
// particular year.
// (2) Write a function to print the data of a student whose roll
// number is received by the function.

#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 450
struct student
{
    int roll;
    char name[50];
    char dept[50];
    char course[50];
    int year;
} students[MAX_STUDENTS];
int numStudents = 0;
void addStudent(const struct student *s)
{
    if (numStudents < MAX_STUDENTS)
    {
        students[numStudents] = *s;
        numStudents++;
    }
    else
    {
        printf("No more space for students\n");
    }
}
void printNamesByYear(int yr)
{
    for (int i = 0; i < numStudents; i++)
    {
        if (students[i].year == yr)
        {
            printf("%s\n", students[i].name);
        }
    }
}
void getDataOfRoll(int rl, struct student *stu)
{
    for (int i = 0; i < numStudents; i++)
    {
        if (students[i].roll == rl)
        {
            *stu = students[i];
            return;
        }
    }
    printf("No student with roll number %d\n", rl);
}

int main()
{
    struct student s1 = {1, "John", "CSE", "B.Tech", 2019};
    struct student s2 = {2, "Jane", "ECE", "B.Tech", 2019};
    struct student s3 = {3, "Jim", "CSE", "B.Tech", 2020};
    addStudent(&s1);
    addStudent(&s2);
    addStudent(&s3);
    struct student s;
    getDataOfRoll(2, &s);
    printf("Roll: %d\nName: %s\nDept: %s\nCourse: %s\nYear: %d\n", s.roll, s.name, s.dept, s.course, s.year);
    printNamesByYear(2019);
    return 0;
}