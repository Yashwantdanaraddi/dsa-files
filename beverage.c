#include<stdio.h>
main()
{
char j;
float n,amt;
printf("Enter the type of beverage and Quantity\n");
scanf("%c %f",&j,&n);

if (j=='A')
{
amt=n*25;
printf("The amount to be paid is %f",amt);
}
else if (j=='K')
{
amt=n*30;
printf("The amount to be paid is %f",amt);
}
else if (j=='S')
{
amt=n*50;
printf("The amount to be paid is %f",amt);
}
else if (j=='M')
{
amt=n*45;
printf("The amount to be paid is %f",amt);
}
else if (j=='O')
{
amt=n*60;
printf("The amount to be paid is %f",amt);
}
else if (j=='W')
{
amt=n*40;
printf("The amount to be paid is %f",amt);
}
else
{
printf("Invalid beverage\n");
exit(0);

}
}

