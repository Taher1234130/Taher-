#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Addition = %.2f", a + b);
            break;

        case 2:
            printf("Subtraction = %.2f", a - b);
            break;

        case 3:
            printf("Multiplication = %.2f", a * b);
            break;

        case 4:
            switch (b == 0)
            {
                case 0:
                    printf("Division = %.2f", a / b);                                                
                    break;

                case 1:
                    printf("undefined");
                    break;
            }
            break;

        default:
            printf("Invalid input");
    }

    return 0;
}
