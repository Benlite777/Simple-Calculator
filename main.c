#include <stdio.h>
#include <stdlib.h>
void main()
{
    char op;
    float a,b,c;
printf("Enter the first numbers\n");
scanf("%f",&a);

printf("Enter the second numbers\n");
scanf("%f",&b);

printf("Enter the operator\n");
scanf("%s",&op);
switch(op)
{
    case '+':
        c=a+b;
printf("%f+%f=%f\n5
       ",a,b,c);
break;

case '-':
    c=a-b;
printf("%f-%f=%f\n",a,b,c);
break;

case '*':
    c=a*b;
printf("%f*%f=%f\n",a,b,c);
break;

case '/':
    if(b!=0)
    {
        c=a/b;
       printf("%f/%f=%f\n",a,b,c);
    }
    else
    {
        printf("Not defined\n");
    }
    break;

    default:printf("Enter the wrong operator\n");

}

}
