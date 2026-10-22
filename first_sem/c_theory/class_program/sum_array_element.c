#include<stdio.h>
//get_array_sum() defination
int get_array_sum(int number[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
         sum=sum+number[i];
    }
    return sum;
}
void read_array(int number[],int n){
    for (int i=0;i<n;i++){
        printf("enter %d number:",i+1);
        scanf("%d",&number[i]);
    }
}
void display_array(int number[],int n){
    for (int i=0;i<n;i++){
        printf("index %d=%d\n",i,number[i]);
    }
}

int main(){
    int mynumber[100],n,total;//array intialisation
    //dynamic initialisation
    printf("enter the number of elements:");
    scanf("%d",&n);
    if(n<=0 ||n>100){
        printf("invalid number of elements\n");
        return 0;
    }
    read_array(mynumber,n);
    printf("array elements with index\n");
    display_array(mynumber,n);
    total=get_array_sum(mynumber,n);
    printf("the sum is:%d\n",total);
    return 0;

    

}