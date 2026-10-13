#include<stdio.h>
int main()
{
    int i;
    int j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d",j);
        printf("\n");
    }
    printf("----------------\n");
    for(i=6;i>=1;i--){
        for( j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("--------\n");
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            if ((i==5 &&j==3)||(i==3&&j==2)){
                printf("");
            }else{
                printf("%d",j);
            }
        }
        printf("\n");
    }
      printf("--------------------\n");
      return 0;
}




