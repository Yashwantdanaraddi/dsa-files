#include <stdio.h>

int main() {
    int i,num;
     printf("Enter the number\n");
    scanf("%d",&num);
    printf("Even numbers between 0 to %d are\n",num);
    for (i = 0; i <=num; ++i) {
        if (i % 2 == 0)
            printf("%d ", i);
    }

    return 0;
}

