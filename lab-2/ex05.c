#include <stdio.h>
#include <string.h>

int main() {
    char fullName[100];
    int age;
    float height;
    char university[100];
    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    fullName[strcspn(fullName, "\n")] = 0; 
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your heght: ");
    scanf("%f", &height);

    getchar(); 
    printf("Enter you University name: ");
    fgets(university, sizeof(university), stdin);
    university[strcspn(university, "\n")] = 0; 

    printf("\nHi! Everyone. This is %s from %s. I am %d years old and my height is\n%.1f cm tall.\n",
           fullName, university, age, height);

    return 0;
}
