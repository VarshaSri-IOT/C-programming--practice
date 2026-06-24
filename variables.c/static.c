#include<stdio.h>
void display()
{
    static int a=9;
    a++;
    printf("%d\n",a);

}
int main()
{
    display();
    display();
    display();
    return 0;
}