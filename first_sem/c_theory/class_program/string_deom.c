#include<stdio.h>
int main(){
    char s1[8]="thrisha";//static initialisation
    char name[30];//dynamic initialisation
    printf("enter the name:");
    fgets(name,sizeof(name),stdin);
    printf("%s",name);
    for (int i=0;name[i]!='\0';i++){
        printf("word[%d]=%c\n",i,name[i]);
    }

}