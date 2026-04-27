/*c program to implement simple calculator by using switch statement*/
#include<stdio.h>
int main()
{
    float a , b, r;
    char op;
    printf("The operations are given below\n");
    printf("click + for addition\n");
    printf("click - for subtraction\n");
    printf("click * for multiplication\n");
    printf("click / for division\n");
    printf("so type below which operation do you want..\n");
    scanf("%c",&op);

    switch(op)
    {
    case'+':
    printf("enter two numbers:\n");
    scanf("%f%f",&a,&b);
    r=a+b;
    printf("%f+%f=%f",a,b,r);
    break;

    case'-':
    printf("enter two numbers:\n");
    scanf("%f%f",&a,&b);
    r=a-b;
    printf("%f-%f=%f",a,b,r);
    break;

    case'*':
    printf("enter two numbers:\n");
    scanf("%f%f",&a,&b);
    r=a*b;
    printf("%f*%f=%f",a,b,r);
    break;

    case'/':
    printf("enter two numbers:\n");
    scanf("%f%f",&a,&b);

    if(b!=0)
    {
    r=a/b;
    printf("%f/%f=%f",a,b,r);
    break;
    }
    else
    {
        printf("division is not possible.");
        break;
    }

    default:
    {
        printf("invalid operation.");
        break;
    }
}
return 0;

}