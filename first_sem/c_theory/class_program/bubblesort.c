#include <stdio.h>
int main(){
    int size;
    printf("enter size of array:");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        printf("enter the elements%d:",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if (a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
            
    printf("array elements are:\n");
        for(int i=0;i<size;i++){
        printf("%d\n",a[i]);
        }


        for(int i=0;i<size;i++){
        printf("sorted elements are %d\n",a[i]);
    }

return 0;
}