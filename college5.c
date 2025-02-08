// If the marks obtained by a student in five different subjects are input through the
// keyboard, find out the aggregate marks and percentage marks obtained by the student.
// Assume that the maximum marks that can be obtained by a student in each subject is
// 100.
//The term "aggregate marks" refers to the total marks a student has obtained across all subjects in a particular examination or course. It is the sum of the individual marks obtained in each subject, typically calculated by adding up the marks in all subjects and then sometimes expressing it as a percentage of the total possible marks.

#include <stdio.h>

int main(){
    int marks1, marks2, marks3, marks4, marks5;
    int totalMarks = 500;
    float percentage;
    printf("Enter marks in five subjects: ");
    scanf("%d %d %d %d %d", &marks1, &marks2, &marks3, &marks4, &marks5);
    int aggregate = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage = ((float)aggregate / totalMarks) * 100;
    printf("Aggregate marks: %d\n", aggregate);
    printf("Percentage marks: %.2f\n", percentage);


    return 0;
}