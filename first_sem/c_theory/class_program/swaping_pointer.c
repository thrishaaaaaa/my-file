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
    printf("%d num1\n",num1);
    printf("%d num2\n",num2);
    
    return 0;



}