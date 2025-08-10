#include <stdio.h>

int main() {
    float Num1, Num2, result;
    int choice;

    printf("Enter Num1: ");
    scanf("%f", &Num1);

    printf("Enter Num2: ");
    scanf("%f", &Num2);

    printf("Choose cal method:\n");
    printf("1: +\n");
    printf("2: -\n");
    printf("3: *\n");
    printf("4: /\n");
    printf("5: %%\n");

    printf("Choose method: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = Num1 + Num2;
            printf("Ans: Num1 + Num2 = %.2f\n", result);
            break;
        case 2:
            result = Num1 - Num2;
            printf("Ans: Num1 - Num2 = %.2f\n", result);
            break;
        case 3:
            result = Num1 * Num2;
            printf("Ans: Num1 * Num2 = %.2f\n", result);
            break;
        case 4:
            if (Num2 != 0) {
                result = Num1 / Num2;
                printf("Ans: Num1 / Num2 = %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 5:
            printf("Ans: Num1 %% Num2 = %d\n", (int)Num1 % (int)Num2);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
