#include<stdio.h>
main()
{

    char m;
    printf("enter a single character\n");
    scanf("%c",&m);
    if(m>='A'&&m<='Z')
    printf("CAPITAL LETTER\n");
    else if(m>='a'&&m<='z')
    printf("samll case letter\n");
    else if(m>='0'&&m<='9')
    printf("its a digit\n");
    else
    printf("its a special character");

}





