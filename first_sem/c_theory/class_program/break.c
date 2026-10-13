#include<stdio.h>
int main(){
    int i;
    for(int j=0;j<=5;j++){
         printf("loop started");
            for(i=0;i<=5;i++){
                printf("inner loop started");
                break;
                printf("from inner loop");
            }
        printf("from inside the loop");
        
        break;
    }
    printf("program terminated");
 }
