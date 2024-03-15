#include <stdio.h>

float calculator(int, int, char);

int main() {
    char ch;
    int a, b;
    float result;

    printf("Enter values of a and b and operator (+ - * /): ");
    scanf("%d %d %c", &a, &b, &ch);
    printf("You entered: %d %d %c\n", a, b, ch);

    result = calculator(a, b, ch);
    printf("Result: %.1f\n", result);

    return 0;
}

float calculator(int a, int b, char ch) {
    float answer;

    switch(ch) {
        case '+':
        printf("performing operation %d + %d\n",a,b);
            answer = a + b;
            break;
        case '-':
        printf("performing operation %d - %d\n",a,b);
            answer = a - b;
            break;
        case '*':
             printf("performing operation %d * %d\n",a,b);
            answer = a * b;
            break;
        case '/':
            if (b != 0)
            {
            printf("performing operation %d / %d\n",a,b);
            answer = (float)a / b; // Perform floating-point division
            }
            else {

                printf("Error: Division by zero\n");
                return 0; // Returning 0 as division by zero is undefined
            }
            break;
        default:
            printf("Invalid operator\n");
            return 0; // Returning 0 for an invalid operation
    }

    return answer;
}

