#include <stdio.h>

int main() {
    char name[50];
    long studentID;
    float programming, physics, calculus;
    float gpa;
    printf("Enter your Name: ");
    scanf("%s", name);  
    printf("Enter your student ID: ");
    scanf("%ld", &studentID);
    printf("Enter your Programming score: ");
    scanf("%f", &programming);
    printf("Enter your Physics score: ");
    scanf("%f", &physics);
    printf("Enter your Calculus score: ");
    scanf("%f", &calculus);
    gpa = (programming + physics + calculus) / 3.0;
    printf("Hi %s(%ld)! Your GPA is %.2f\n", name, studentID, gpa);

    return 0;
}
