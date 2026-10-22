#include<stdio.h>
int main(){
    int num1,num2,num3;
    int *p1,*p2;

    printf("enter two numbers:");
    scanf("%d %d",&num1,&num2);

    p1=&num1;
    p2=&num2;

    num3=*p1;
    *p1=*p2;
    *p2=num3;
    printf("after swapping:\n");
    printf("num1: %d\n",num1);
    printf("num2: %d\n",num2);
    return 0;



}