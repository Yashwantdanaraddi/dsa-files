#include<stdio.h>
void fibo(int );
int main()
{
    int n;
    printf("enter the number of terms\n");
    scanf("%d",&n);
    fibo(n);
    return 0;
}
void fibo(int n)
{  int i,a=-1,b=1,c;
   for(i=0;i<n;i++)
   {
    c=a+b;
    a=b;
    b=c;

       printf("%d\n",c);
   }
}
