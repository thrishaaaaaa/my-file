#include<stdio.h>
int main(){
    int x=10; //stores value 10
    int*p; //declare a pointer
    p=&x;// stores value of pointer

    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%p\n",p);