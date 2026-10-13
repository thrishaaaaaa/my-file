#include<stdio.h>
int main(){
    int choice,firstnumber,secondnumber;
    do{
    printf("=----welcome to my calculator--------");
    printf("1,addition");
    printf("2,subtraction");
    printf("3,multiplication");
    printf("4,division");
    printf("enter your choice:");
    scanf("%d",&choice);
    
    if (choice==1){
        //addition
        printf("enter the firstnumber:");
        scanf("%d",&firstnumber);
        printf("enter the secondnumber:");
        scanf("%d",&secondnumber);
        int sum=firstnumber+secondnumber;
        printf("the sum is;%d",sum);
        choice++;
        }
        if(choice == 2){
        //subtraction
        printf("enter the firstnumber:");
        scanf("%d",&firstnumber);
        printf("enter the secondnumber:");
        scanf("%d",&secondnumber);
        int difference=firstnumber-secondnumber;
        printf("the difference is ;%d",difference);
        choice++;
        }
        if(choice==3){
        //multiplication
        printf("enter the firstnumber:");
        scanf("%d",&firstnumber);
        printf("enter the secondnumber:");
        scanf("%d",&secondnumber);
        int multiplication=firstnumber*secondnumber;
        printf("the multiplication is ;%d",multiplication);
        choice++;

        }
        if (choice==4){
        //division
        printf("enter the firstnumber:");
        scanf("%d",&firstnumber);
        printf("enter the secondnumber:");
        scanf("%d",&secondnumber);
        int division=firstnumber/secondnumber;
        printf("the division is;:%d",division);
        choice++;
        }
    }while(choice<=4);
    return 0;
}