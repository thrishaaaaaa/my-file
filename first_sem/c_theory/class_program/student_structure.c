#include<stdio.h>

//global structure variable "accessed anywhere in the method"
struct student{
    char name[20];
    int reg;
    int submark[3];
    int total; ///to store total maks
    float average;//to store avg marks
};
struct student students[5];
void studentdata(){/// method to inistialise student
    struct student students[5];//memory allocaton
    for(int i=0;i<5;i++){
        printf("enter %d student data:\n",i+1);
        printf("enter the student reg\n");
        scanf("%d",&students[i].reg);
        printf("enter the student name\n");
        scanf("%s",&students[i].name);
        for (int j=0;j<5;j++){
            printf("enter  the submark:\n");
            scanf("%d",&students[i].submark[j]);
        }
    }

}
int studenttotal(){//find total marks of three subject
     for(int i=0;i<5;i++){
        students[i].total=students[i].submark[0]+students[i].submark[1]+students[i].submark[2];
       
     }
  
   
}
int studentaverage(){
    for(int i=0;i<5;i++){
        students[i].average=students[i].submark[0]+students[i].submark[1]+students[i].submark[2]/3;
        }
}
void displaystudent(){
for(int i=0;i<5;i++){  
    printf("reg\t\name\t\submark\t\t\t:");
    printf("total %2.f:",students[i].total);
    printf("average:%2.f",students[i].average);
}
}
int main(){
    struct student students[5]; //array of sturcture --///acessing the variable inside respective main is called scoope of the variable
    studentdata();
    studenttotal();
    studentaverage(); 
    displaystudent();

}
