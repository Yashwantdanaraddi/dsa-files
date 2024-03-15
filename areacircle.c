#include <stdio.h>

int main() {
    int m, n, gcd,num1,num2;
    printf("enter the two numbers\n");
    scanf("%d %d",&m,&n);
    num1=m;
    num2=n;
    while (num1 != num2) {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }
    gcd = num1;
    printf("GCD of %d and %d is %d\n", m, n, gcd);
    return 0;
}
