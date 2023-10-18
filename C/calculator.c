#include<stdio.h>

int main()
{

    float a,b,c;
    int e;
    char con;
    do
    {


    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);
    printf("1. Press this for addition\n");
    printf("2. Press this for subtraction\n");
    printf("3. Press this for multiplication\n");
    printf("4. Press this for division\n");
    scanf("%d",&e);
    switch(e)
    {
    case 1:
             c=a+b;
             printf("Sum of %.0f and %.0f is %.0f\n",a,b,c);

             break;

    case 2:
            c=a-b;
            printf("Difference of %.0f and %.0f is %.0f\n",a,b,c);

            break;

    case 3:
            c=a*b;
            printf("Multiplication of %.0f and %.0f is %.0f\n",a,b,c);

            break;

    case 4:
            c=a/b;
            printf("Division of %.0f and %.0f is %.2f\n",a,b,c);

            break;

    default:
             printf("It is invalid input");
             break;
}


if(e>=5)
   exit(0);
}while(e<=4);

return 0;
}

