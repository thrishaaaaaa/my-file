#include<stdio.h>
#include <stdlib.h>
int main(){
    int*p;
    int sum=0;
    p=(int*)malloc(10*sizeof(int)); //syntax of malloc
    for (int i=0;i<10;i++){  //loop for 10 itteration
        printf("enter the number:");
        scanf("%d",&p[i]);
        sum=sum+p[i]; //finding sum
    }
    printf("the  sum is: %d",sum); //printing the sum
    free(p);
    return 0;



}