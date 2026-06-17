#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a numbers: ");
    scanf("%d%d",&a,&b);

    if(a>b){
    printf("a is greater than b\n ");
    }
        else{
        printf("b is greater than a\n ");
    }
        printf("Done\n");
        return 0;
}