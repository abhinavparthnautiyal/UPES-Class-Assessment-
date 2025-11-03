/*Write a menu driven program to implement a calculator using switch case. (any five
functionalities).
*/
#include <stdio.h>
void main()
{
    int choice;
    float num1, num2, result;
    printf("\nCalculator Menu:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if(choice >= 1 && choice <= 5)
        {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
        }
        switch(choice)
        {
            case 1:
            {
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
            }
            case 2:
            {
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
            }
            case 3:
            {
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
            }
            case 4:
            {
                if(num2 != 0)
                {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                }
                else
                {
                    printf("Error: Division by zero\n");
                }
                break;
            }
            case 5:
            {
                printf("Result: %d\n", (int)num1 % (int)num2);
                break;
            }
            case 6:
            {
                printf("Exiting calculator.\n");
                break;
            }
            default:
            {
                printf("Invalid choice! Try again.\n");
            }
        }
    }

