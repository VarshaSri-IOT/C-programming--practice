#include<stdio.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    if (a%2==0){
        printf( "The number is Even\n");
    }
    else{
        printf("The number is Odd\n");
    }
        printf("Done\n");
    return 0;
}