#include<stdio.h>
int main()
{
    int accountno =1000;
    float balance =500;
    printf("......welcome to my bank.......");
    int option;
    int deposite;
    int useraccount;
    int ammount;
    printf("1,deposite:");
    printf("2,withdraw:");
    printf("3,accountveiw:");
    printf("enter the option:");
    scanf("%d", &option);
    switch(option)
    {
        case 1:
        printf("enter the accountno");
        scanf("%d",&useraccount);
        if(accountno==useraccount){
            printf("valid account:");
            printf("enter the deposite amount\n");
            scanf("%d",&ammount);
            balance=deposite+balance;
            printf("the balance ammount is:%f", balance);
            printf("account updated");
        }else{
            printf("invalid account");
        }
        break;
        case 2:
        printf("enter the accountno");
        scanf("%d",useraccount);
        if(accountno!=useraccount){
            printf("invalid account:");
        }
        printf("valid account|n");
        printf("enter the withdraw ammount:\n");
        scanf("%d",&ammount);
        if(ammount<=balance){
        balance=balance-ammount;
        printf(" balance after withdrawal : \n");
        printf("withdraw successfull:");
        }
        else{
            printf("withdraw unsuccessfull:");

        }
        break;

        


        }
        
        
        



    
        
    }


    
    
        


        
    



