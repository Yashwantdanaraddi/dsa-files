#include <stdio.h>

int main() {
    int i,num;
     printf("Enter the number\n");
    scanf("%d",&num);
    printf("odd numbers between 1 to %d are\n",num);
    for (i = 1; i <=num; ++i) {
        if (i % 2!= 0)
            printf("%d ", i);
    }

    return 0;
}


