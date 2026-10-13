#include<stdio.h>
int main(){
    int sum;
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    if(n>=5){
        sum=n+1;
        sum=sum+1;
        printf("sum of numbers from 5 to 10 is:",sum);
        scanf("%d",sum);
    }else{
        printf("enter the number greater than 5:");
    }
}





