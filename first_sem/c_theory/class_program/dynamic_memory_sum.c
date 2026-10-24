#include<stdio.h>
#include <stdlib.h>
int main(){
    int*p;
    int sum=0;
    p=(int*)malloc(10*sizeof(int));
    for (int i=0;i<10;i++){
        printf("enter the number:");
        scanf("%d",&p[i]);
        sum=sum+p[i];
    }
    printf("the  sum is: %d",sum);
    free(p);
    return 0;



}