#include<stdio.h>
int main()
{
    int a,b,temp;
    a=12;
    b=1;

    a=a-b;//a=11
    b=a+b;//b=12
    a=b-a;//1
    printf("a=%d\n",a);
    printf("b=%d",b);
    return 0;
}