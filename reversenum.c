#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;
     printf("Enter the number\n");
    scanf("%d",&number);
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }
    printf("Reversed Number: %d\n", reversedNumber);
    return 0;
}
