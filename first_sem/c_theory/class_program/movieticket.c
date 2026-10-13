#include<stdio.h>
int main(){
    int i;
    int n;
    int category; float final_amt;
    int regular_count=0;
    int premium_count=0;
    int recliner_count=0;
    int total=800; int discount=0;
    int regular=150;int premium=250;int recliner=400;
    printf("enter the number of tickets:",n);
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("enter the category for tickets(1/2/3)\n",n);
        scanf("%d",&category);
        if (category==1){
            regular_count++;
        }else if(category==2){
            premium_count++;
        }else if(category==3){
            recliner_count++;
        }
    }
        if (category==1){
            total=(total*regular_count);
        }else if(category==2){
            total=(total*premium_count);
        }else if(category==3){
            total=(total*recliner_count);
        }else{
            printf("invalid category\n");
        }
        if(n>=5){
        discount=(total-10/100);
        final_amt=discount;
        }else{
            final_amt=total;
        }printf("--------finalbill------\n");
        printf("regular:%d\n",regular_count);
        printf("premium:%d\n",premium_count);
        printf("recliner:%d\n",recliner_count);
        printf("total:%d\n",total);
        printf("discount:%d\n",discount);
        printf("final_amt:%f\n",final_amt);
        return 0;
    }