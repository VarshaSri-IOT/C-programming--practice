#include<stdio.h>
int main()
{
    int a,b;
    float c,d;

    printf("enter the numbers:");
    scanf("%d %d",&a,&b);

    printf("enter the float numbers:");
    scanf("%f %f",&c,&d);

    printf("%d %d\n",a+b,a-b);
    printf("%.1f %.1f\n",c+d,c-d);

    return 0;
}
