#include <stdio.h>

int main() {
    int Min;
    int hours, minutes;
    printf("Enter total minutes: ");
    scanf("%d", &Min);
    hours = Min / 60;
    minutes = Min % 60;
    printf("%d minutes is %d hour(s) and %d minute(s)\n", Min, hours, minutes);

    return 0;
}
