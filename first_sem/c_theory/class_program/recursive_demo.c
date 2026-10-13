# include<stdio.h>
int factorial(int number){
    if (number==0){ ///base condition
        return 1;
    }
    return number* factorial(number-1);
}
int main(){
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    printf("%d!=%d\n",num,factorial(num));
        return 0;


    }