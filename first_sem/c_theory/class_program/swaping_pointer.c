#include<stdio.h>
void swap3(int *x,int*y,int*z){
    int temp;
    temp=*x;
    *x=*z;
    *z=*y;
    *y=temp;
}
int main(){
    int a,b,c;
    printf("enter the number:");
    scanf("%d%d%d",&a,&b,&c);
    printf("before swaping:");
    printf("a=%d b=%d c=%d\n",a,b,c);
    swap3(&a,&b,&c);
    printf("after swaping:");
    printf("a=%d b=%d c=%d\n",a,b,c);
    return 0;


}