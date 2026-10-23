//declare int pointer,allocate memory dynamically for 5 int data,display value stored in ecah location
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *p;
//     p=(int*)malloc(5*sizeof(int));
//     for(int i=0;i<5;i++){
//         printf("%d\n",p[i]);
//     }
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
int main(){    
    int*p;
    p=(int*)calloc(5,sizeof(int));
    for(int i=0;i<5;i++){
        printf("%d\n",p[i]);
    }
}
